## BST
```#include <iostream>
using namespace std;

struct node {
    int val;
    node* left;
    node* right;
    node(int v) {
        val = v;
        right = left = nullptr;
    }
};

class bst {
private:
    node* root = nullptr;

    node* insert_root(node* root, int val) {
        if (root == nullptr) {
            root = new node(val);
            return root;
        }
        if (val < root->val) {
            root->left = insert_root(root->left, val);
        } else if (val > root->val) {
            root->right = insert_root(root->right, val);
        }
        return root;
    }

    void display_inorder(node* root) {
        if (root == nullptr) {
            return;
        }
        display_inorder(root->left);
        cout << root->val << " ";
        display_inorder(root->right);
    }

    void display_preorder(node* root) {
        if (root == nullptr) {
            return;
        }
        cout << root->val << " ";
        display_preorder(root->left);
        display_preorder(root->right);
    }

    void display_postOrder(node* root) {
        if (root == nullptr) {
            return;
        }
        display_postOrder(root->left);
        display_postOrder(root->right);
        cout << root->val << " ";
    }

    int min(node* root) {
        if (root == nullptr) {
            return -1; // Sentinel value indicating the tree is empty
        }
        while (root->left != nullptr) {
            root = root->left;
        }
        return root->val;
    }

    node* delete_node(node* root, int v) {
        if (root == nullptr) {
            return root;
        }
        if (v < root->val) {
            root->left = delete_node(root->left, v);
        } else if (v > root->val) {
            root->right = delete_node(root->right, v);
        } else {
            // Node with only one child or no child
            if (root->left == nullptr) {
                node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                node* temp = root->left;
                delete root;
                return temp;
            }

            // Node with two children: Get the inorder successor (smallest in the right subtree)
            int successorValue = min(root->right);
            root->val = successorValue; // Replace value with the inorder successor
            root->right = delete_node(root->right, successorValue); // Delete the inorder successor
        }
        return root;
    }

public:
    void insert(int val) {
        root = insert_root(root, val);
    }

    void preorder() {
        display_preorder(root);
    }

    void postorder() {
        display_postOrder(root);
    }

    void inorder() {
        display_inorder(root);
    }

    int minValue() {
        return min(root);
    }

    void deleteValue(int val) {
        root = delete_node(root, val);
    }
};

int main() {
    bst obj;
    obj.insert(34);
    obj.insert(23);
    obj.insert(10);
    obj.insert(15);
    obj.insert(50);
    
    cout << "Inorder:" << endl;
    obj.inorder();
    cout << endl;

    cout << "Postorder:" << endl;
    obj.postorder();
    cout << endl;

    cout << "Preorder:" << endl;
    obj.preorder();
    cout << endl;

    cout << "Minimum value: " << obj.minValue() << endl;

    // Example of deleting a node
    obj.deleteValue(23);
    cout << "Inorder after deleting 23:" << endl;
    obj.inorder();
    cout << endl;

    return 0;
}
```
