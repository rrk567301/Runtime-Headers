@interface SCRComboBox : SCRTextField {
    BOOL _isPasswordSuggestionComboBox;
}

- (id)typeDescription;
- (BOOL)isComboBox;
- (id)defaultActionName;
- (void)appendExpandedStatusDescription:(id)a0;
- (BOOL)chainEvent:(id)a0 request:(id)a1;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)isControlElement;
- (BOOL)isPasswordSuggestionComboBox;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;

@end
