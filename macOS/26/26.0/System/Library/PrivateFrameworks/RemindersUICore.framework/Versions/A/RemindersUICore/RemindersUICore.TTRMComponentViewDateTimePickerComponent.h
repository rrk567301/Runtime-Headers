@interface RemindersUICore.TTRMComponentViewDateTimePickerComponent : NSObject <TTRMDatePickerWithMiniCalDelegate> {
    void /* unknown type, empty encoding */ elements;
    void /* unknown type, empty encoding */ enabledState;
    void /* unknown type, empty encoding */ datePickerView;
    void /* unknown type, empty encoding */ dateComponentsAction;
}

- (id)init;
- (id)startDate;
- (void).cxx_destruct;
- (BOOL)datePickerShouldDisplayMiniCal:(id)a0;
- (double)additionalVerticalOffsetForPickerPopover;
- (void)datePickerDidResignFirstResponder:(id)a0;
- (BOOL)datePickerShouldDisplayTimeSuggestions:(id)a0;
- (void)datePickerWithMiniCalChanged:(id)a0;

@end
