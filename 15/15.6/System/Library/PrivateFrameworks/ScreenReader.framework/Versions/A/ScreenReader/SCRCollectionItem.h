@interface SCRCollectionItem : SCRGroup

@property (readonly, nonatomic) char _collectionItemShouldDeferMovementToSection;

- (id)roleDescription;
- (id)onlyChild;
- (id)_collectionItemSection;
- (char)allowFocusThroughSingleChild;
- (void)autoDrillAddBorderCrossIfNecessary:(long long)a0 request:(id)a1 oldFocusedElement:(id)a2;
- (char)includeChildrenActions;
- (char)moveOutWithEvent:(id)a0 request:(id)a1;
- (char)moveToFirstElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToLastElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (char)setSingleSelectionWithRequest:(id)a0;
- (char)shouldAutoSyncKeyboardFocus;
- (char)toggleMultipleSelectionWithRequest:(id)a0;
- (char)toggleSingleSelectionWithRequest:(id)a0;

@end
