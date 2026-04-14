@class NSSegmentedControl, NSLayoutConstraint, NSDate, NSString, NSTouchBar, CalUIEventTimeViewController, NSButton;
@protocol CalUIDatePickerTouchBarDelegate;

@interface CalUIDatePickerTouchBar : NSObject <CalUIEventTimeViewControllerDelegate, NSTouchBarProvider>

@property (weak) id<CalUIDatePickerTouchBarDelegate> delegate;
@property (retain) NSTouchBar *touchBar;
@property (retain) CalUIEventTimeViewController *eventTimeController;
@property (retain) NSButton *allDayButton;
@property (retain) NSSegmentedControl *dateSelector;
@property (retain) NSLayoutConstraint *datePickerWidthConstraint;
@property (nonatomic) long long barStyle;
@property BOOL hasDuration;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property BOOL allDay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)updateTouchBar;
- (void)dateTimeFormatChanged;
- (void)eventTimeIsChanging;
- (void)eventTimeDidChange;
- (void)toggleEventAllDay;
- (void)dateSelectorButtonClicked:(id)a0;
- (long long)beginningWorkHour;
- (long long)endingWorkHour;
- (id)createEventTimeViewController;
- (id)createAllDayButton;
- (id)createDateSelector;
- (void)_updateDatePickerController;

@end
