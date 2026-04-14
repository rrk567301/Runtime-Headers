@interface EKUIRepeatGadget : EKUILabeledGadget

+ (id)interestedChangeKeys;

- (BOOL)isEditable;
- (BOOL)shouldDisplay;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)updateItemWithRecurrenceRule:(id)a0;
- (void)showCustomRecurrencePicker;

@end
