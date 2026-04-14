@class NSMutableArray;

@interface SCRDockList : SCRList {
    BOOL _isTabDock;
    NSMutableArray *_dockItemsReorderList;
    struct CGPoint { double x; double y; } _startingDockItemOrigin;
    struct CGPoint { double x; double y; } _endingDockItemOrigin;
}

- (void).cxx_destruct;
- (id)typeDescription;
- (BOOL)isStack;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)handleTaggedOperationWithEvent:(id)a0 request:(id)a1;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (void)echoCurrentSelectionWithQueueID:(id)a0 interruptsRequests:(BOOL)a1 excludingIdentifiers:(id)a2;
- (BOOL)addSelectionDescriptionToRequest:(id)a0;
- (void)handleSelectionChange:(id)a0;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)childrenShouldAddIndexToDescription;
- (id)captionDescriptionContainsUserLabel:(BOOL *)a0 containsAncestorLabel:(BOOL *)a1;
- (BOOL)tabDockSelectionChanged;
- (BOOL)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (void)_delayedEchoCurrentSelection;
- (void)_updateDockItemsReorderList;
- (BOOL)_handleDockItemReorder:(id)a0;
- (BOOL)_moveFirstInDockWithEvent:(id)a0 request:(id)a1;
- (BOOL)_moveLastInDockWithEvent:(id)a0 request:(id)a1;
- (BOOL)startWindowContentFeedback:(id)a0;
- (BOOL)handleReadContentsCallbackForEvent:(id)a0 request:(id)a1 visibleOnly:(BOOL)a2;
- (BOOL)shouldSynchVOCursorToSelectionChange;
- (void)synchVOCursorToSelectedUIElement:(id)a0;

@end
