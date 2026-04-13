@interface SCRDockButton : SCRElement

- (id)description;
- (BOOL)close;
- (id)_windowTitle;
- (id)windowType;
- (BOOL)canClose;
- (void)addItemNameToRequest:(id)a0;
- (void)addItemDescriptionToRequest:(id)a0;
- (id)stringForCommand:(id)a0 withExtension:(id)a1;
- (BOOL)handleTaggedOperationWithEvent:(id)a0 request:(id)a1;
- (BOOL)monitorItemDescriptionChanges;
- (id)_windowDescription;
- (void)addItemDescriptionForBrailleToRequest:(id)a0;
- (BOOL)closeButtonWithRequest:(id)a0;
- (BOOL)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (BOOL)closeButtonCallbackWithRequest:(id)a0;
- (void)addItemShortNameToRequest:(id)a0;
- (BOOL)allowAlternateSpeechToTitle;
- (BOOL)handleSyncToTrackedGestureItemWithEvent:(id)a0 request:(id)a1;

@end
