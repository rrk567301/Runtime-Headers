@class CalUICustomRecurrenceWindowController;

@interface EKUIRepeatGadget : EKUILabeledGadget {
    CalUICustomRecurrenceWindowController *_customRecurrenceController;
}

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (id)iconSymbolName;
- (long long)_firstDayOfWeek;
- (void)updateCalendarAppFirstDayOfWeek;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)showCustomRecurrencePicker;
- (void)updateItemWithRecurrenceRule:(id)a0;

@end
