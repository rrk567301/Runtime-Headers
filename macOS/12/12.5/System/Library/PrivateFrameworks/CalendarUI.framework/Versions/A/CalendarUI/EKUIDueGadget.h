@interface EKUIDueGadget : EKUIDateTimeGadget

+ (id)interestedChangeKeys;

- (id)labelString;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;
- (void)datePickerChangedToDate:(id)a0;

@end
