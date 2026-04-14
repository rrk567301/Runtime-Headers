@class NSArray, _NSTreeNodeObservingTracker;

@interface NSBrowserBinder : NSBinder {
    struct ___browserBinderFlags { unsigned char _ignoreChanges : 1; unsigned int _reservedOutlineViewBinder : 31; } _browserBinderFlags;
    NSArray *_selectedIndexPaths;
    _NSTreeNodeObservingTracker *_treeNodeObservingTracker;
}

+ (BOOL)isUsableWithObject:(id)a0;
+ (id)bindingsForObject:(id)a0;
+ (id)bindingCategory;

- (void)_init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)performAction:(id)a0;
- (void)_connectionWasEstablished;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_dealloc;
- (void)_updateObservingRegistration:(BOOL)a0;
- (void)_connectionWasBroken;
- (void)_resumeObservationNotificationProcessing;
- (void)browser:(id)a0 willDisplayCell:(id)a1 atRow:(long long)a2 column:(long long)a3;
- (void)browser:(id)a0 createRowsForColumn:(long long)a1 inMatrix:(id)a2;
- (void)setSelectedIndexPaths:(id)a0;
- (id)_selectionIndexPathsInBrowser:(id)a0;
- (void)_updateSelectionIndexPaths:(id)a0;
- (id)indexPathFromSelectionInBrowser:(id)a0 upToColumn:(unsigned long long)a1;
- (void)adjustMatrix:(id)a0 numberOfRows:(unsigned long long)a1;
- (void)_redisplayCellForNode:(id)a0;
- (id)selectedIndexPaths;

@end
