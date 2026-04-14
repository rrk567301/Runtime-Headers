@interface PathTree : TreeNode <NSCopying> {
    unsigned int numberOfNodes;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(char *)a0;
- (unsigned int)numberOfNodes;
- (id)addTreePath:(char *)a0 withType:(int)a1;
- (void)removeTreeNode:(id)a0;
- (void)removeTreePath:(char *)a0;

@end
