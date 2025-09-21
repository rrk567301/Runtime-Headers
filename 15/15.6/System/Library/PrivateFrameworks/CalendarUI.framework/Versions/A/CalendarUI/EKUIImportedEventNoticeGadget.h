@interface EKUIImportedEventNoticeGadget : EKUISingleTextFieldGadget

- (char)isEditable;
- (id)initWithViewController:(id)a0;
- (id)placeholderText;
- (id)summaryString;
- (char)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
