@interface EKUIReminderRecurrenceSummaryGadget : EKUILabledTextFieldGadget

- (id)placeholderString;
- (id)initWithViewController:(id)a0;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;
- (double)pixelsBetweenLabelAndControl;

@end
