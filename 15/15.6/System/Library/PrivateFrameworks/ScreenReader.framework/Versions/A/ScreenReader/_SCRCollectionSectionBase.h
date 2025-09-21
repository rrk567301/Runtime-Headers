@interface _SCRCollectionSectionBase : SCRList

- (char)_collectionShouldFocusThroughSingleChild;
- (char)_moveToContentSibling:(id)a0;
- (char)_moveToContentSiblingAbove;
- (char)_moveToContentSiblingBelow;
- (char)_moveToFirstContentSibling;
- (char)_moveToLastContentSibling;
- (char)_moveToNextContentSibling;
- (char)_moveToPreviousContentSibling;
- (char)_shouldUseCollectionSpecificFocusBehavior;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (char)handleLayoutChangeWithInfo:(id)a0;
- (void)handleSelectionChange:(id)a0;
- (char)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpShiftWithEvent:(id)a0 request:(id)a1;
- (char)shouldPromoteForMovingUIElement:(id)a0;
- (long long)unpromotableDescendantsCount;

@end
