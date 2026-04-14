@interface CreditCardNumberTextField : SensitiveDetailTextField

- (BOOL)becomeFirstResponder;
- (void)textDidEndEditing:(id)a0;
- (id)sensitiveStringValue;
- (id)_obscuredStringValue;
- (void)setSensitiveStringValue:(id)a0;
- (id)_creditCardFormatter;

@end
