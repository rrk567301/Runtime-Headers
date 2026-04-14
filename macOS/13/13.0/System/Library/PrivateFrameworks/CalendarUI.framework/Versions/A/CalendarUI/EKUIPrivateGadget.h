@interface EKUIPrivateGadget : EKUILabeledCheckboxGadget

+ (id)interestedChangeKeys;

- (id)accessibilityIdentifier;
- (BOOL)isEditable;
- (BOOL)isChecked;
- (id)labelString;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)updateEvent;
- (BOOL)canBeChecked;

@end
