class Solution
{
public:
    // Function to construct binary tree from parent array.
    Node *createTree(vector<int> parent)
    {
        // Your code here
        int size = parent.size();
        Node *arr_node[size];
        Node *root;

        for (int i = 0; i < size; i++)
        {
            arr_node[i] = new Node(i);
        }

        for (int i = 0; i < size; i++)
        {
            if (parent[i] == -1)
            {
                root = arr_node[i];
            }
            else
            {
                if (arr_node[parent[i]]->left == NULL)
                {
                    arr_node[parent[i]]->left = arr_node[i];
                }
                else
                {
                    arr_node[parent[i]]->right = arr_node[i];
                }
            }
        }
        return root;
    }
};