@interface EKUILabeledNoteGadget : EKUILabledTextFieldGadget

+ (id)interestedChangeKeys;

- (void)controlTextDidChange:(id)a0;
- (BOOL)isEditable;
- (id)placeholderString;
- (id)initWithViewController:(id)a0;
- (id)labelString;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;
- (double)pixelsBetweenLabelAndControl;

@end
