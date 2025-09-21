@interface EKUIEndTimeGadget : EKUIDateTimeGadget

- (id)labelString;
- (id)dateAccessibilityIdentifier;
- (void)datePickerChangedToDate:(id)a0;
- (char)datePickerShouldDisplayTimeSuggestions:(id)a0;
- (char)disableDateChanges;
- (char)shouldDisplayWhenNotEditable;
- (id)timeAccessibilityIdentifier;
- (void)updateWithChanges:(id)a0;

@end
