@class CalUICustomRecurrenceWindowController;

@interface EKUIRepeatGadget : EKUILabeledGadget {
    CalUICustomRecurrenceWindowController *_customRecurrenceController;
}

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (id)iconSymbolName;
- (void)updateCalendarAppFirstDayOfWeek;
- (long long)_firstDayOfWeek;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)showCustomRecurrencePicker;
- (void)updateItemWithRecurrenceRule:(id)a0;

@end
