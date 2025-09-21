@interface EKUIStartTimeGadget : EKUIDateTimeGadget

+ (id)interestedChangeKeys;

- (id)labelString;
- (id)dateAccessibilityIdentifier;
- (void)datePickerChangedToDate:(id)a0;
- (char)disableDateChanges;
- (id)timeAccessibilityIdentifier;
- (void)updateWithChanges:(id)a0;

@end
