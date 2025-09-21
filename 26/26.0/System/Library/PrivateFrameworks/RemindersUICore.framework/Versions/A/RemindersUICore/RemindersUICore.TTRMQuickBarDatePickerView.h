@interface RemindersUICore.TTRMQuickBarDatePickerView : RemindersUICore.TTRMQuickBarEntryView <TTRMDatePickerWithMiniCalDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ datePicker;
    void /* unknown type, empty encoding */ showsDatePickerOnReceivingDateComponents;
    void /* unknown type, empty encoding */ calendarPanelObserver;
    void /* unknown type, empty encoding */ internalDateComponents;
    void /* unknown type, empty encoding */ internalEditingState;
}

- (void)viewWillMoveToWindow:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)startDate;
- (void).cxx_destruct;
- (BOOL)datePickerShouldDisplayMiniCal:(id)a0;
- (double)additionalVerticalOffsetForPickerPopover;
- (void)datePickerDidResignFirstResponder:(id)a0;
- (BOOL)datePickerShouldDisplayTimeSuggestions:(id)a0;
- (void)datePickerWithMiniCalChanged:(id)a0;
- (void)backgroundClickAction:(id)a0;
- (void)clearButtonAction:(id)a0;

@end
