@interface EKUIPrivateGadget : EKUILabeledCheckboxGadget

+ (id)interestedChangeKeys;

- (BOOL)isEditable;
- (id)accessibilityIdentifier;
- (BOOL)isChecked;
- (id)labelString;
- (BOOL)canBeChecked;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)updateEvent;

@end
