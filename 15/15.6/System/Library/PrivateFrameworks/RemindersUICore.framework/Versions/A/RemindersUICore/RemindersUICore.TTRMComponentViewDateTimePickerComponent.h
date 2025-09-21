@interface RemindersUICore.TTRMComponentViewDateTimePickerComponent : NSObject <TTRMDatePickerWithMiniCalDelegate> {
    void /* unknown type, empty encoding */ elements;
    void /* unknown type, empty encoding */ enabledState;
    void /* unknown type, empty encoding */ datePickerView;
    void /* unknown type, empty encoding */ dateComponentsAction;
}

- (id)init;
- (void).cxx_destruct;
- (id)startDate;
- (char)datePickerShouldDisplayMiniCal:(id)a0;
- (double)additionalVerticalOffsetForPickerPopover;
- (void)datePickerDidResignFirstResponder:(id)a0;
- (char)datePickerShouldDisplayTimeSuggestions:(id)a0;
- (void)datePickerWithMiniCalChanged:(id)a0;

@end
