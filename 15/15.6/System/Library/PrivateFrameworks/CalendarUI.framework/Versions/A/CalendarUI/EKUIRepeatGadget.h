@interface EKUIRepeatGadget : EKUILabeledGadget

+ (id)interestedChangeKeys;

- (double)pixelsBetweenLabelAndControl;
- (char)shouldDisplay;
- (char)shouldDisplayWhenNotEditable;
- (void)showCustomRecurrencePicker;
- (void)updateItemWithRecurrenceRule:(id)a0;

@end
