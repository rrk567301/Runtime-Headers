@class NSTextField, CalUIPopupWindowState, NSView, NSTabView, NSStackView, NSPopUpButton, EKCalendarItem, NSWindow, CalUIVoiceOverFriendlyMatrix, NSButton, NSMutableArray;

@interface CalUICustomRecurrenceWindowController : NSWindowController {
    NSView *_parentView;
    NSView *_containerView;
}

@property (weak) EKCalendarItem *calendarItem;
@property (retain) NSWindow *customRepeatPanel;
@property (weak) NSPopUpButton *recurrenceFrequency;
@property (weak) NSTabView *recurrenceTabView;
@property (weak) NSTextField *dailyRecurrenceInterval;
@property (weak) NSTextField *weeklyRecurrenceInterval;
@property (weak) CalUIVoiceOverFriendlyMatrix *weeklyDaySelectionMatrix;
@property (weak) NSTextField *monthlyRecurrenceInterval;
@property (weak) CalUIVoiceOverFriendlyMatrix *monthlyRuleMatrix;
@property (weak) CalUIVoiceOverFriendlyMatrix *monthlyDayMatrix;
@property (weak) NSPopUpButton *monthlyWeekNumber;
@property (weak) NSPopUpButton *monthlyDayNumber;
@property (weak) NSStackView *monthlyWeekDayNumberStackView;
@property (weak) NSTextField *yearlyRecurrenceInterval;
@property (weak) CalUIVoiceOverFriendlyMatrix *yearlyMonthMatrix;
@property (weak) NSButton *yearlyByDaySwitch;
@property (weak) NSPopUpButton *yearlyWeekNumber;
@property (weak) NSPopUpButton *yearlyDayNumber;
@property (weak) NSStackView *yearlyWeekDayNumberStackView;
@property (retain) NSMutableArray *tabHeights;
@property long long firstDayOfWeek;
@property (retain) CalUIPopupWindowState *windowState;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (id)initWithView:(id)a0;
- (BOOL)showPopup;
- (void)okClicked:(id)a0;
- (void)cancelClicked:(id)a0;
- (void)updateFirstDayOfWeek:(long long)a0;
- (void)prepareToPopupOnView:(id)a0;
- (void)updateWithCalendarItem:(id)a0;
- (id)recurrenceRuleFromShowingPopup;
- (void)_initializeControls;
- (void)updateStateWithCalendarItem:(id)a0;
- (void)updateWindowWithState:(id)a0;
- (void)updateStateWithRecurrenceRule:(id)a0 startDate:(id)a1 timeZone:(id)a2 supportsMultipleDaysAndMonths:(BOOL)a3 supportsYearlyIntervalChange:(BOOL)a4;
- (void)resetWindow;
- (void)updateDailyPaneWithWindowState:(id)a0;
- (void)updateWeeklyPaneWithWindowState:(id)a0;
- (void)updateMonthlyPaneWithWindowState:(id)a0;
- (void)updateYearlyPaneWithWindowState:(id)a0;
- (void)switchToPaneAtIndex:(long long)a0;
- (long long)_recurrenceFrequencyWithState:(id)a0;
- (id)_selectedDaysOfTheWeekWithState:(id)a0;
- (id)_selectedDaysOfTheMonthWithState:(id)a0;
- (id)_selectedMonthsOfTheYearWithState:(id)a0;
- (id)_setPositionsWithState:(id)a0;
- (long long)_intervalValueWithState:(id)a0;
- (long long)_runAndAttach;
- (void)updateStateFromWindow;
- (id)recurrenceRuleWithWindowState:(id)a0;
- (id)_attach;
- (void)_openWithAnimation:(BOOL)a0;
- (void)_resetFrameFromViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForDeltaHeight:(double)a0;
- (long long)_weekNumberFromSelectedIndex:(long long)a0;
- (id)_byDayArray:(int)a0 weekItemSelected:(int)a1;
- (BOOL)_cell:(id)a0 isLastSelectedInMatrix:(id)a1;
- (void)setOptionsEnabling;
- (BOOL)isCustomRecurrenceValid;
- (void)updateStateWithRecurrenceRule:(id)a0;
- (void)frequencyChanged:(id)a0;
- (void)weeklyMatrixClicked:(id)a0;
- (void)monthlyRuleChanged:(id)a0;
- (void)monthlyMatrixClicked:(id)a0;
- (void)yearlyByDayChanged:(id)a0;
- (void)yearlyMatrixClicked:(id)a0;

@end
