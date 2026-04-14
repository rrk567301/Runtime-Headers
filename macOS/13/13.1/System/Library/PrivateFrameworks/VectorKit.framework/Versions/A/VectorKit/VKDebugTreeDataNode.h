@interface VKDebugTreeDataNode : VKDebugTreeNode {
    const void *_node;
}

- (id)name;
- (long long)propertyCount;
- (BOOL)isExpandable;
- (id)propertyColumn;
- (id)valueColumn;
- (id)tagsColumn;
- (void)searchNodes:(id)a0 withParameter:(id)a1;
- (void)buildChildren;
- (id)initWithDebugTreeNode:(const void *)a0 withParent:(id)a1;

@end
