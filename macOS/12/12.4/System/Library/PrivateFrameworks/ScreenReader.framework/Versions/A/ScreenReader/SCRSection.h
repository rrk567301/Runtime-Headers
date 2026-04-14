@interface SCRSection : _SCRCollectionSectionBase

- (id)onlyChild;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (BOOL)allowFocusThroughSingleChild;
- (void)setBrailleLineWithFocusedElement:(id)a0 forceRebuild:(BOOL)a1;
- (BOOL)moveOutWithEvent:(id)a0 request:(id)a1;
- (BOOL)addSelectionDescriptionToRequest:(id)a0;
- (unsigned long long)directInteractionArrowCaptureMask;
- (BOOL)childrenShouldAddIndexToDescription;
- (unsigned long long)numberOfChildren:(BOOL)a0;
- (BOOL)needToRebuildChildren;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (BOOL)_moveToContentSibling:(id)a0;
- (id)uiElementForAccessibilitySelectedChildren;
- (unsigned long long)indexOfElement:(id)a0;
- (BOOL)setSingleSelectionWithRequest:(id)a0;
- (void)addItemDescriptionForFallbackToRequest:(id)a0;
- (void)addItemDescriptionForEndInteractionToRequest:(id)a0;
- (id)elementToSpeakAfterMove;

@end
