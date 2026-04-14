@interface _SCRCollectionSectionBase : SCRList

- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (void)handleSelectionChange:(id)a0;
- (BOOL)interactUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)shouldPromoteForMovingUIElement:(id)a0;
- (BOOL)_shouldUseCollectionSpecificFocusBehavior;
- (long long)unpromotableDescendantsCount;
- (BOOL)_moveToContentSibling:(id)a0;
- (BOOL)_moveToNextContentSibling;
- (BOOL)_moveToPreviousContentSibling;
- (BOOL)_moveToContentSiblingAbove;
- (BOOL)_moveToContentSiblingBelow;
- (BOOL)_moveToFirstContentSibling;
- (BOOL)_moveToLastContentSibling;
- (BOOL)handleLayoutChangeWithInfo:(id)a0;
- (BOOL)_collectionShouldFocusThroughSingleChild;

@end
