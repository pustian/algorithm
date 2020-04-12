templcate<class Type> class Tree {
    public:
        Tree();
        virtual ~Tree();
        position Root(); 
        BuildRoot(const Type &value);
        position FirstChaild(position p);
        position NextSibling(position p, position v);
        position Parent(position p);
        Type Retrieve(positioin p);
        int InsertChild(const position p, const Type& value);
        int DeleteChild(position p, int i);
        void DeleteSubTree(position t);
        int isEmpty();
}
