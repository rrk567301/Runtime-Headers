@interface SCRSection : _SCRCollectionSectionBase

- (id)onlyChild;
- (unsigned long long)indexOfElement:(id)a0;
- (char)_moveToContentSibling:(id)a0;
- (void)addItemDescriptionForEndInteractionToRequest:(id)a0;
- (void)addItemDescriptionForFallbackToRequest:(id)a0;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (char)addSelectionDescriptionToRequest:(id)a0;
- (char)allowFocusThroughSingleChild;
- (char)childrenShouldAddIndexToDescription;
- (unsigned long long)directInteractionArrowCaptureMask;
- (id)elementToSpeakAfterMove;
- (char)focusInto:(id)a0 event:(id)a1;
- (char)moveOutWithEvent:(id)a0 request:(id)a1;
- (char)needToRebuildChildren;
- (unsigned long long)numberOfChildren:(char)a0;
- (void)setBrailleLineWithFocusedElement:(id)a0 forceRebuild:(char)a1;
- (char)setSingleSelectionWithRequest:(id)a0;
- (id)uiElementForAccessibilitySelectedChildren;

@end
