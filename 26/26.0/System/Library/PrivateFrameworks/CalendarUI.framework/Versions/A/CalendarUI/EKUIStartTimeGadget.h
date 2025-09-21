@interface EKUIStartTimeGadget : EKUIDateTimeGadget

+ (id)interestedChangeKeys;

- (id)iconSymbolName;
- (id)labelString;
- (id)dateAccessibilityIdentifier;
- (void)datePickerChangedToDate:(id)a0;
- (BOOL)disableDateChanges;
- (id)timeAccessibilityIdentifier;
- (void)updateWithChanges:(id)a0;

@end
