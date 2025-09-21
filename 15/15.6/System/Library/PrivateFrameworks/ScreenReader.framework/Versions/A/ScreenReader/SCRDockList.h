@class NSString, NSMutableArray;

@interface SCRDockList : SCRList {
    char _isTabDock;
    NSMutableArray *_dockItemsReorderList;
    NSString *_startingDockItemEquivalenceTag;
    NSString *_endingDockItemEquivalenceTag;
}

- (void).cxx_destruct;
- (id)typeDescription;
- (char)isStack;
- (void)_delayedEchoCurrentSelection;
- (char)_handleDockItemReorder:(id)a0;
- (char)_moveFirstInDockWithEvent:(id)a0 request:(id)a1;
- (char)_moveLastInDockWithEvent:(id)a0 request:(id)a1;
- (void)_updateDockItemsReorderList;
- (char)addSelectionDescriptionToRequest:(id)a0;
- (id)captionDescriptionContainsUserLabel:(char *)a0 containsAncestorLabel:(char *)a1;
- (char)childrenShouldAddIndexToDescription;
- (void)echoCurrentSelectionWithQueueID:(id)a0 interruptsRequests:(char)a1 excludingIdentifiers:(id)a2;
- (char)focusInto:(id)a0 event:(id)a1;
- (char)handleEvent:(id)a0 request:(id)a1;
- (char)handleReadContentsCallbackForEvent:(id)a0 request:(id)a1 visibleOnly:(char)a2;
- (void)handleSelectionChange:(id)a0;
- (char)handleTaggedOperationWithEvent:(id)a0 request:(id)a1;
- (char)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (char)interactDownWithEvent:(id)a0 request:(id)a1;
- (char)interactUpWithEvent:(id)a0 request:(id)a1;
- (char)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (char)shouldSynchVOCursorToSelectionChange;
- (char)startWindowContentFeedback:(id)a0;
- (void)synchVOCursorToSelectedUIElement:(id)a0;
- (char)tabDockSelectionChanged;

@end
