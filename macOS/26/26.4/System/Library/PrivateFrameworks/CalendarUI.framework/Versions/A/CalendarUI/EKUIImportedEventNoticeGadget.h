@interface EKUIImportedEventNoticeGadget : EKUISingleTextFieldGadget

- (BOOL)isEditable;
- (id)summaryString;
- (id)initWithViewController:(id)a0;
- (id)placeholderText;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
