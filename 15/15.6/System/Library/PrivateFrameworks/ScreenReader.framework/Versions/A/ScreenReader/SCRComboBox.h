@interface SCRComboBox : SCRTextField {
    char _isPasswordSuggestionComboBox;
}

- (id)typeDescription;
- (id)defaultActionName;
- (char)isComboBox;
- (void)_elementWasDestroyed:(id)a0;
- (char)addLinkedUIElementDescriptionToRequest:(id)a0;
- (char)canHandleEchoContentChange;
- (char)canHandleTextSelectionChange;
- (char)canHandleTextValueChange;
- (char)canHandleValueChange;
- (char)chainEvent:(id)a0 request:(id)a1;
- (char)handleEvent:(id)a0 request:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (char)isControlElement;
- (char)isPasswordSuggestionComboBox;
- (char)performDefaultActionWithRequest:(id)a0 allowClick:(char)a1;

@end
