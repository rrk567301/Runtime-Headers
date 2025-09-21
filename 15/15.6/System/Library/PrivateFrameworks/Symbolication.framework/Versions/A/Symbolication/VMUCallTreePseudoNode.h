@interface VMUCallTreePseudoNode : VMUCallTreeNode

- (char)isPseudo;
- (id)largestTopOfStackPath;
- (id)pseudoNodeTopOfStackChild;
- (id)sortedChildrenWithPseudoNode;

@end
