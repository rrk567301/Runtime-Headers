@interface SCRContentArea : SCRTextField

- (id)typeDescription;
- (void)setFocusedChild:(id)a0;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (void)addItemNameContentToRequest:(id)a0;
- (void)addElementSummaryToRequest:(id)a0;
- (BOOL)moveToFirstElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)canNavigateToChildren;
- (void)addItemDescriptionForFallbackToRequest:(id)a0;
- (void)addItemDescriptionForEndInteractionToRequest:(id)a0;
- (void)handleTextChangeWithUserInfo:(id)a0;
- (BOOL)keyboardHandler:(id)a0 request:(id)a1;
- (BOOL)isKeyboardChild;
- (void)_updateFocusedChildFromSelectionChange;
- (void)_moveToChildElement:(id)a0 request:(id)a1;

@end
