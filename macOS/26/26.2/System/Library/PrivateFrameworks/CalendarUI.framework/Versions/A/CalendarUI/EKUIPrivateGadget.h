@interface EKUIPrivateGadget : EKUILabeledCheckboxGadget

+ (id)interestedChangeKeys;

- (id)accessibilityIdentifier;
- (BOOL)isEditable;
- (BOOL)isChecked;
- (id)labelString;
- (BOOL)canBeChecked;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)updateEvent;

@end
