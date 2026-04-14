@interface EKUIEndTimeGadget : EKUIDateTimeGadget

- (id)labelString;
- (id)dateAccessibilityIdentifier;
- (void)datePickerChangedToDate:(id)a0;
- (BOOL)datePickerShouldDisplayTimeSuggestions:(id)a0;
- (BOOL)shouldDisplayWhenNotEditable;
- (id)timeAccessibilityIdentifier;
- (void)updateWithChanges:(id)a0;

@end
