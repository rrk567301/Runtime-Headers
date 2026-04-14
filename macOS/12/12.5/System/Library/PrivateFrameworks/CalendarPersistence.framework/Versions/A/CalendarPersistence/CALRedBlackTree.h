@class RBNode;

@interface CALRedBlackTree : NSObject {
    long long _count;
}

@property (retain) RBNode *root;

- (id)description;
- (long long)count;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)allNodes;
- (id)_rightRotate:(id)a0;
- (id)_leftRotate:(id)a0;
- (void)_rebalanceFromNode:(id)a0;
- (BOOL)_recursiveInsertNode:(id)a0 fromNode:(id)a1;
- (id)_recursiveFindNodeWithKey:(id)a0 fromNode:(id)a1;
- (id)_recursiveLargestNodeWithKeyLessThanOrEqualTo:(id)a0 fromNode:(id)a1;
- (id)_recursiveSmallestNodeWithKeyGreaterThanOrEqualTo:(id)a0 fromNode:(id)a1;
- (id)_recursiveRemoveNodeWithKey:(id)a0 fromNode:(id)a1 isDone:(BOOL *)a2;
- (id)_balanceAfterRemove:(id)a0 isRight:(BOOL)a1 isDone:(BOOL *)a2;
- (void)_recursiveTraverseFromNode:(id)a0 intoArray:(id)a1;
- (void)_recursiveTraverseFromNode:(id)a0 intoArray:(id)a1 startingAtOrAfterKey:(id)a2 stoppingBeforeKey:(id)a3;
- (void)_recursiveTraverseKeysFromNode:(id)a0 intoArray:(id)a1 startingAtOrAfterKey:(id)a2 stoppingBeforeKey:(id)a3;
- (id)nodeAtOrBelowKey:(id)a0;
- (id)nodeAtOrAboveKey:(id)a0;
- (void)removeObjectsStartingAt:(id)a0 endingBefore:(id)a1;
- (id)nodesStartingAt:(id)a0 endingBefore:(id)a1;

@end
