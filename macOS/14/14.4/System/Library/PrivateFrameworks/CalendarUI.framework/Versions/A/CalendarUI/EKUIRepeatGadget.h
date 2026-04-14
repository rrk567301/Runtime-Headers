@interface EKUIRepeatGadget : EKUILabeledGadget

+ (id)interestedChangeKeys;

- (BOOL)isEditable;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)showCustomRecurrencePicker;
- (void)updateItemWithRecurrenceRule:(id)a0;

@end
