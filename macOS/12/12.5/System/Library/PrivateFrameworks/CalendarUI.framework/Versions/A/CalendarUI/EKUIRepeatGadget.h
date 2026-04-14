@interface EKUIRepeatGadget : EKUILabeledGadget

+ (id)interestedChangeKeys;

- (BOOL)isEditable;
- (BOOL)shouldDisplay;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)showCustomRecurrencePicker;
- (void)updateItemWithRecurrenceRule:(id)a0;

@end
