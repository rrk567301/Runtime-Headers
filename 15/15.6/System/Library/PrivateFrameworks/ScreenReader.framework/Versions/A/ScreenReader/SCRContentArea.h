@interface SCRContentArea : SCRTextField

@property (nonatomic) char supportsAccessibilityTextInsertionAndDeletion;

- (id)typeDescription;
- (void)_selectionDidChange:(id)a0;
- (char)isKeyboardChild;
- (id)_adjustCategoryOrderArray:(id)a0;
- (void)_moveToChildElement:(id)a0 request:(id)a1;
- (void)_sendBrailleLineWithCurrentSelectionForRange:(id)a0;
- (void)_updateFocusedChildFromSelectionChange;
- (void)addElementSummaryToRequest:(id)a0;
- (void)addItemDescriptionForEndInteractionToRequest:(id)a0;
- (void)addItemDescriptionForFallbackToRequest:(id)a0;
- (void)addItemNameContentToRequest:(id)a0;
- (char)canNavigateToChildren;
- (id)currentSelectionElement;
- (void)handleTextChangeWithUserInfo:(id)a0;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (char)keyboardHandler:(id)a0 request:(id)a1;
- (char)moveToFirstElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToLastElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToNextChildElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToPreviousChildElementWithEvent:(id)a0 request:(id)a1;
- (void)prepareBrailleItemDescriptionForRequest:(id)a0 hasBrailleFocus:(char)a1;
- (void)setFocusedChild:(id)a0;
- (void)setIsEventHandler:(char)a0 isKeyboardHandler:(char)a1;

@end
