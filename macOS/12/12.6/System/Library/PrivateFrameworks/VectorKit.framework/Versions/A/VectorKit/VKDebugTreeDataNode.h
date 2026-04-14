@interface VKDebugTreeDataNode : VKDebugTreeNode {
    const void *_node;
}

- (id)name;
- (BOOL)isExpandable;
- (id)propertyColumn;
- (id)valueColumn;
- (id)tagsColumn;
- (void)searchNodes:(id)a0 withParameter:(id)a1;
- (id)initWithDebugTreeNode:(const void *)a0 withParent:(id)a1;
- (void)buildChildren;
- (long long)propertyCount;

@end
