@interface SCRWebAreaNoEchoComboBox : SCRComboBox

- (id)typeDescription;
- (BOOL)isComboBox;
- (BOOL)canHandleEchoContentChange;
- (BOOL)canHandleTextSelectionChange;
- (BOOL)canHandleTextValueChange;
- (BOOL)canHandleValueChange;

@end
