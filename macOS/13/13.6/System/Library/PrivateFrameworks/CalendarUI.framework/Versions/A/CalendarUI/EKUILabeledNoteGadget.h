@interface EKUILabeledNoteGadget : EKUILabledTextFieldGadget

+ (id)interestedChangeKeys;

- (void)controlTextDidChange:(id)a0;
- (id)initWithViewController:(id)a0;
- (BOOL)isEditable;
- (id)placeholderString;
- (id)labelString;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
