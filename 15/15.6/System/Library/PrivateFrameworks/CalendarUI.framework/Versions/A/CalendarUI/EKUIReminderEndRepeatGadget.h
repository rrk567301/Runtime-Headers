@interface EKUIReminderEndRepeatGadget : EKUIEndRepeatGadget

+ (char)shouldShowAfter;

- (id)labelString;
- (double)pixelsBetweenLabelAndControl;
- (char)shouldDisplay;

@end
