template <class Type> class BinaryTree;

template <class Type> class BinaryTreeNode {
    private:
        BinaryTreeNode<Type> *leftChild;
        BinaryTreeNode<Type> *rightChild;
        Type data;
    public:
        BinaryTreeNode(): leftChild(NULL), rightChild(NULL){}
        BinaryTreeNode(Type item, BinaryTreeNode<Type> *lch = NULL, BinaryTreeNode<Type> *rch = NULL):
            data(item), leftChild(lch), rightChild(rch) {}
        inline Type getData() const{ return data; }
        inline BinaryTreeNode<Type> *getLeft() const {return leftChild; }
        inline BinaryTreeNode<Type> *getRight() const {return rightChild;}
        void setData(const Type &item) { data = item; }
        void setLeftChild(BinaryTreeNode<Type> *l) {leftChild = l;}
        void setRightChild(BinaryTreeNode<Type> *r) {rightChild = r;}
};

template <class Type> class BinaryTree {
    private :
        BinaryTreeNode<Type> *next;
        Type refValue;
        BinaryTreeNode<Type> *
}
