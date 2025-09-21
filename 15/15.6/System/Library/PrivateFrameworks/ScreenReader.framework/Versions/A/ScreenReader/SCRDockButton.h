@interface SCRDockButton : SCRElement

- (id)description;
- (char)close;
- (id)windowType;
- (id)_windowTitle;
- (char)canClose;
- (char)closeButtonCallbackWithRequest:(id)a0;
- (id)stringForCommand:(id)a0 withExtension:(id)a1;
- (id)_windowDescription;
- (void)addItemDescriptionForBrailleToRequest:(id)a0;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (void)addItemShortNameToRequest:(id)a0;
- (char)allowAlternateSpeechToTitle;
- (char)closeButtonWithRequest:(id)a0;
- (char)handleSyncToTrackedGestureItemWithEvent:(id)a0 request:(id)a1;
- (char)handleTaggedOperationWithEvent:(id)a0 request:(id)a1;
- (char)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (char)monitorItemDescriptionChanges;

@end
