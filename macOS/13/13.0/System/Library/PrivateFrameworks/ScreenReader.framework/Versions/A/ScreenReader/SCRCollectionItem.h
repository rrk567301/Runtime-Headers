@interface SCRCollectionItem : SCRGroup

@property (readonly, nonatomic) BOOL _collectionItemShouldDeferMovementToSection;

- (id)roleDescription;
- (id)onlyChild;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToFirstElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)toggleSingleSelectionWithRequest:(id)a0;
- (BOOL)setSingleSelectionWithRequest:(id)a0;
- (BOOL)toggleMultipleSelectionWithRequest:(id)a0;
- (BOOL)moveOutWithEvent:(id)a0 request:(id)a1;
- (id)_collectionItemSection;
- (BOOL)shouldAutoSyncKeyboardFocus;
- (void)autoDrillAddBorderCrossIfNecessary:(long long)a0 request:(id)a1 oldFocusedElement:(id)a2;

@end
