@class NSString, NSTreeController;

@interface NSTreeControllerTreeNode : NSTreeNode {
    NSString *_childrenKeyPath;
    NSString *_leafKeyPath;
    NSString *_countKeyPath;
    NSTreeController *_treeController;
    struct __NSTreeControllerTreeNodeFlags { unsigned char _observingIsSetup : 1; unsigned char _isUpdatingChildNodes : 1; unsigned char _observingRepresentedObjectChildren : 1; unsigned int reserved : 29; } _NSTreeControllerTreeNodeFlags;
}

- (void)dealloc;
- (void)setRepresentedObject:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isLeaf;
- (void)_setupObserving;
- (id)childrenKeyPath;
- (void)_tearDownObserving;
- (void)updateChildNodesForKeyPath:(id)a0 affectedIndexPaths:(id)a1;
- (id)leafKeyPath;
- (id)countKeyPath;
- (id)initWithRepresentedObject:(id)a0 treeController:(id)a1;
- (void)_detachFromParent;
- (void)_configureObservingWithOption:(unsigned long long)a0;
- (long long)_leafState;
- (void)_configureObservingForChildNodesWithOption:(unsigned long long)a0;
- (unsigned long long)countOfSubNodes;
- (void)_removeSubNodesAtIndexes:(id)a0;
- (void)willAccessChildNodes;
- (void)insertObject:(id)a0 inSubNodesAtIndex:(unsigned long long)a1;
- (void)removeObjectFromSubNodesAtIndex:(unsigned long long)a0;

@end
