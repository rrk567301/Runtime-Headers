@interface EKUIEndTimeGadget : EKUIDateTimeGadget

- (id)labelString;
- (void)updateWithChanges:(id)a0;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)datePickerChangedToDate:(id)a0;
- (BOOL)datePickerShouldDisplayTimeSuggestions:(id)a0;
- (id)dateAccessibilityIdentifier;
- (id)timeAccessibilityIdentifier;

@end
