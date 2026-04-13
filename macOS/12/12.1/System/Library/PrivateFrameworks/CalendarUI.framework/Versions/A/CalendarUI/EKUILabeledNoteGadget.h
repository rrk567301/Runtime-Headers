@interface EKUILabeledNoteGadget : EKUILabledTextFieldGadget

+ (id)interestedChangeKeys;

- (BOOL)isEditable;
- (void)controlTextDidChange:(id)a0;
- (id)placeholderString;
- (id)labelString;
- (id)initWithViewController:(id)a0;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;
- (double)pixelsBetweenLabelAndControl;

@end
