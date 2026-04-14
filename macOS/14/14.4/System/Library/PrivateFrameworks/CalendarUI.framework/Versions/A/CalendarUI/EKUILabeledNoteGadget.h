@interface EKUILabeledNoteGadget : EKUILabledTextFieldGadget

+ (id)interestedChangeKeys;

- (void)controlTextDidChange:(id)a0;
- (BOOL)isEditable;
- (id)placeholderString;
- (id)labelString;
- (id)initWithViewController:(id)a0;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
