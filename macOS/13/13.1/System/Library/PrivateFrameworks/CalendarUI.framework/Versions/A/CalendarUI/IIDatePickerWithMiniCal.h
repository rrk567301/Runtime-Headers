@class NSView, NSDate, NSArray, IIClosableDatePicker, IIDatePicker, EKViewController, IIDatePickerPanel, NSPanel, NSString, IIDatePickerPanelContentView, NSTableView;
@protocol IIDatePickerWithMiniCalDelegate;

@interface IIDatePickerWithMiniCal : NSView <NSDatePickerCellDelegate, IIDatePickerDelegate, IIDatePickerPanelDelegate, NSTableViewDelegate, NSTableViewDataSource> {
    IIDatePickerPanel *_calPanel;
    NSPanel *_timeSuggestionPanel;
}

@property (weak) EKViewController *viewController;
@property (retain) IIDatePicker *textDatePicker;
@property (retain) IIDatePicker *textTimePicker;
@property (retain) IIClosableDatePicker *calDatePicker;
@property (retain) IIDatePicker *textDatePickerForPanel;
@property (readonly) IIDatePickerPanel *calPanel;
@property (retain) IIDatePickerPanelContentView *calPanelContentView;
@property (weak) NSView *nextGadget;
@property BOOL calendarDatePickerShown;
@property BOOL userDismissedCalendarPicker;
@property long long indexOfSelectedTimeSuggestion;
@property (retain) NSTableView *timeSuggestionTable;
@property (retain) NSArray *timeDescriptions;
@property (retain) NSDate *sourceDate;
@property BOOL openingCalendarPicker;
@property BOOL makeCalendarPickerKeyOnNextWindowUpdate;
@property (retain) NSArray *horizontalConstraints;
@property (weak) id<IIDatePickerWithMiniCalDelegate> delegate;
@property (readonly, nonatomic) NSPanel *timeSuggestionPanel;
@property double pixelsBetweenDateAndTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_timeDescriptionsForDate:(id)a0 inTimeZone:(id)a1;
+ (id)_durationDescriptions;
+ (id)_selectedDurationDescriptions;
+ (double)_maximumWidthFromAttributedStringArray:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)setTimeZone:(id)a0;
- (id)dateValue;
- (id)_calendar;
- (void)setBackgroundColor:(id)a0;
- (void)awakeFromNib;
- (void)setFont:(id)a0;
- (void)windowDidUpdate:(id)a0;
- (void)setNextKeyView:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (double)baselineOffsetFromBottom;
- (id)cell;
- (void)setTextColor:(id)a0;
- (void)setDateValue:(id)a0;
- (void)setMinDate:(id)a0;
- (void)datePickerCell:(id)a0 validateProposedDateValue:(id *)a1 timeInterval:(double *)a2;
- (void)setTouchBar:(id)a0;
- (id)initWithViewController:(id)a0;
- (void)setup;
- (void)clearDelegates;
- (void)_textDatePickerChanged:(id)a0;
- (void)_textDatePickerForPanelChanged:(id)a0;
- (void)_textTimePickerChanged:(id)a0;
- (void)_calPickerChanged:(id)a0;
- (void)_timeSuggestionPicked:(id)a0;
- (void)_inspectorWasScrolled:(id)a0;
- (void)_datePickerCellDidBecomeFirstResponder:(id)a0;
- (void)_datePickerCellDidResignFirstResponder:(id)a0;
- (BOOL)_datePickerCell:(id)a0 receivedMouseDown:(id)a1;
- (BOOL)_datePickerCell:(id)a0 receivedKeyDown:(id)a1;
- (void)datePickerPanelDidResignKeyWindow:(id)a0;
- (void)selectNextKeyViewHidingPanel:(id)a0;
- (void)selectPreviousKeyViewHidingPanel:(id)a0;
- (void)showElements:(long long)a0;
- (void)_updateAllPickersWithDate:(id)a0;
- (void)_displayCalendarPicker;
- (void)_openCalendarPickerWindowAndConfigureKeyViews;
- (void)makeCalendarPickerKey;
- (void)_hideCalendarPicker;
- (void)_hideCalendarPickerAndSelectDatePicker;
- (void)_displayTimeSuggestions;
- (void)_hideTimeSuggestions;
- (void)_updateSelectedTimeSuggestionCheckbox;
- (void)_setTimeToSuggestionAtIndex:(long long)a0;
- (void)_updateSuggestionPanelSize;

@end
