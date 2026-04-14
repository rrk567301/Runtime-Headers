@interface SCRDockButton : SCRElement

- (id)description;
- (BOOL)close;
- (id)_windowTitle;
- (id)windowType;
- (BOOL)canClose;
- (void)addItemNameToRequest:(id)a0;
- (BOOL)handleTaggedOperationWithEvent:(id)a0 request:(id)a1;
- (void)addItemDescriptionToRequest:(id)a0;
- (BOOL)monitorItemDescriptionChanges;
- (void)addItemDescriptionForBrailleToRequest:(id)a0;
- (BOOL)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (id)stringForCommand:(id)a0 withExtension:(id)a1;
- (id)_windowDescription;
- (void)addItemShortNameToRequest:(id)a0;
- (BOOL)allowAlternateSpeechToTitle;
- (BOOL)closeButtonWithRequest:(id)a0;
- (BOOL)closeButtonCallbackWithRequest:(id)a0;
- (BOOL)handleSyncToTrackedGestureItemWithEvent:(id)a0 request:(id)a1;

@end
