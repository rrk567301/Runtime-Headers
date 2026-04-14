@interface EKUIAllDayGadget : EKUILabeledCheckboxGadget

+ (id)interestedChangeKeys;

- (BOOL)isEditable;
- (BOOL)isChecked;
- (id)labelString;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)updateEvent;
- (BOOL)canBeChecked;

@end
