@interface EKUIAllDayGadget : EKUILabeledCheckboxGadget

+ (id)interestedChangeKeys;

- (id)accessibilityIdentifier;
- (char)isChecked;
- (char)isEditable;
- (id)labelString;
- (char)canBeChecked;
- (char)shouldDisplay;
- (char)shouldDisplayWhenNotEditable;
- (void)updateEvent;

@end
