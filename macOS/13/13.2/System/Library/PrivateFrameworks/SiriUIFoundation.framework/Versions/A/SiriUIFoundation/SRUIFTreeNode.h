@class NSMutableArray;

@interface SRUIFTreeNode : NSObject <NSFastEnumeration>

@property (weak, nonatomic, setter=_setParentNode:) SRUIFTreeNode *parentNode;
@property (readonly, nonatomic, getter=_childNodes) NSMutableArray *childNodes;
@property (retain, nonatomic) id item;

+ (id)absoluteIndexPathsForTreeNodes:(id)a0;

- (id)description;
- (id)init;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)nodeAtIndexPath:(id)a0;
- (void)addChildNode:(id)a0;
- (void)_appendDescriptionToString:(id)a0 withIndentation:(id)a1;
- (id)indexPathFromAncestorNode:(id)a0;
- (id)absoluteIndexPath;
- (BOOL)containsNodeAtIndexPath:(id)a0;
- (id)indexPathOfNodeWithItem:(id)a0;
- (void)removeFromParentNode;
- (long long)numberOfChildNodes;
- (long long)indexOfChildNode:(id)a0;
- (id)childNodeAtIndex:(long long)a0;
- (id)lastChildNode;
- (void)insertChildNode:(id)a0 atIndex:(long long)a1;
- (void)removeChildNodeAtIndex:(long long)a0;
- (void)removeChildNode:(id)a0;
- (void)replaceChildNodeAtIndex:(long long)a0 withNode:(id)a1;
- (void)enumerateChildNodesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateChildNodesUsingBlock:(id /* block */)a0;
- (void)enumerateDescendentNodesUsingBlock:(id /* block */)a0;

@end
