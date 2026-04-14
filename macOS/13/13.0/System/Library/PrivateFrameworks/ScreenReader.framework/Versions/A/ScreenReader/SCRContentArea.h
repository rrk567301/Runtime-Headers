@interface SCRContentArea : SCRTextField

@property (nonatomic) BOOL supportsAccessibilityTextInsertionAndDeletion;

- (id)typeDescription;
- (void)_selectionDidChange:(id)a0;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)setFocusedChild:(id)a0;
- (BOOL)moveToFirstElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)canNavigateToChildren;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (void)addItemDescriptionForFallbackToRequest:(id)a0;
- (void)addItemDescriptionForEndInteractionToRequest:(id)a0;
- (void)addItemNameContentToRequest:(id)a0;
- (void)prepareBrailleItemDescriptionForRequest:(id)a0 hasBrailleFocus:(BOOL)a1;
- (void)addElementSummaryToRequest:(id)a0;
- (void)handleTextChangeWithUserInfo:(id)a0;
- (BOOL)keyboardHandler:(id)a0 request:(id)a1;
- (id)_adjustCategoryOrderArray:(id)a0;
- (void)_updateFocusedChildFromSelectionChange;
- (void)_sendBrailleLineWithCurrentSelectionForRange:(id)a0;
- (BOOL)isKeyboardChild;
- (BOOL)moveToNextChildElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToPreviousChildElementWithEvent:(id)a0 request:(id)a1;
- (void)_moveToChildElement:(id)a0 request:(id)a1;
- (id)currentSelectionElement;

@end
