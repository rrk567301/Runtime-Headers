@interface SCRDockButton : SCRElement

- (BOOL)close;
- (id)description;
- (id)windowType;
- (id)_windowTitle;
- (BOOL)canClose;
- (id)stringForCommand:(id)a0 withExtension:(id)a1;
- (BOOL)closeButtonCallbackWithRequest:(id)a0;
- (id)_windowDescription;
- (void)addItemDescriptionForBrailleToRequest:(id)a0;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (void)addItemShortNameToRequest:(id)a0;
- (BOOL)allowAlternateSpeechToTitle;
- (BOOL)closeButtonWithRequest:(id)a0;
- (BOOL)handleSyncToTrackedGestureItemWithEvent:(id)a0 request:(id)a1;
- (BOOL)handleTaggedOperationWithEvent:(id)a0 request:(id)a1;
- (BOOL)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (BOOL)monitorItemDescriptionChanges;

@end
