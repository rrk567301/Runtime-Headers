@interface SCRContentArea : SCRTextField

@property (nonatomic) BOOL supportsAccessibilityTextInsertionAndDeletion;

- (id)typeDescription;
- (void)_selectionDidChange:(id)a0;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)setFocusedChild:(id)a0;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (void)addItemNameContentToRequest:(id)a0;
- (void)addElementSummaryToRequest:(id)a0;
- (BOOL)moveToPreviousChildElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToNextChildElementWithEvent:(id)a0 request:(id)a1;
- (void)prepareBrailleItemDescriptionForRequest:(id)a0 hasBrailleFocus:(BOOL)a1;
- (BOOL)moveToFirstElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)canNavigateToChildren;
- (void)addItemDescriptionForFallbackToRequest:(id)a0;
- (void)addItemDescriptionForEndInteractionToRequest:(id)a0;
- (void)handleTextChangeWithUserInfo:(id)a0;
- (BOOL)keyboardHandler:(id)a0 request:(id)a1;
- (id)_adjustCategoryOrderArray:(id)a0;
- (void)_sendBrailleLineWithCurrentSelectionForRange:(id)a0;
- (BOOL)isKeyboardChild;
- (void)_updateFocusedChildFromSelectionChange;
- (id)currentSelectionElement;
- (void)_moveToChildElement:(id)a0 request:(id)a1;

@end
