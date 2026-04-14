@interface EKUIReminderEndRepeatGadget : EKUIEndRepeatGadget

+ (BOOL)shouldShowAfter;

- (id)labelString;
- (BOOL)shouldDisplay;
- (double)pixelsBetweenLabelAndControl;

@end
