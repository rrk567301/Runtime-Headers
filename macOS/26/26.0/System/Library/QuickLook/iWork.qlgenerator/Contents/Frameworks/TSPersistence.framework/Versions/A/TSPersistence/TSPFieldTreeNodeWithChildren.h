@interface TSPFieldTreeNodeWithChildren : TSPFieldTreeNode {
    struct map<int, TSPFieldTreeNode *, std::less<int>, std::allocator<std::pair<const int, TSPFieldTreeNode *>>> { struct __tree<std::__value_type<int, TSPFieldTreeNode *>, std::__map_value_compare<int, std::__value_type<int, TSPFieldTreeNode *>, std::less<int>>, std::allocator<std::__value_type<int, TSPFieldTreeNode *>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _children;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0 message:(struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a1;
- (BOOL)addChildNode:(id)a0 forFieldNumber:(int)a1;
- (id)childNodeForFieldNumber:(int)a0;

@end
