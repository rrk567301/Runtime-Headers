@class CRDocument, CROrderedSet, CRTreeNode;

@interface CRTree : CRObject

@property (readonly, nonatomic) CROrderedSet *nodes;
@property (readonly, nonatomic) CRTreeNode *root;
@property (readonly, nonatomic) CRDocument *document;
@property (readonly, nonatomic) long long count;

+ (id)CRProperties;

- (id)init;
- (void)setDocument:(id)a0;
- (void)removeNode:(id)a0;
- (void)mergeWith:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (void)invalidateChildren;
- (unsigned long long)insertIndexForNode:(id)a0 childIndex:(unsigned long long)a1;
- (id)insertNodeWithValue:(id)a0 inParent:(id)a1 atIndex:(unsigned long long)a2;
- (void)insertNode:(id)a0 inParent:(id)a1 atIndex:(unsigned long long)a2;
- (void)setNodeTree:(id)a0 insertAtIndex:(unsigned long long)a1;
- (void)moveNode:(id)a0 toParent:(id)a1 atIndex:(unsigned long long)a2;
- (void)computeChildren;

@end
