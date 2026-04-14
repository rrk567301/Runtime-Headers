@interface EKUIImportedEventNoticeGadget : EKUISingleTextFieldGadget

- (BOOL)isEditable;
- (id)initWithViewController:(id)a0;
- (id)summaryString;
- (id)placeholderText;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
