@class CalUIReminderTimeWheelViewController, NSCustomTouchBarItem, NSCalendar, NSScrubber, NSTouchBar, NSDate, NSString;
@protocol CalUIReminderDatePickerTouchBarDelegate;

@interface CalUIReminderDatePickerTouchBar : NSObject <CalUIReminderTimeWheelViewControllerDelegate, NSScrubberDataSource, NSScrubberDelegate, NSTouchBarProvider>

@property (weak) id<CalUIReminderDatePickerTouchBarDelegate> delegate;
@property (retain) NSTouchBar *touchBar;
@property (retain) NSCustomTouchBarItem *timeWheelTouchBarItem;
@property (retain) NSCalendar *calendar;
@property (retain) NSDate *originDate;
@property (retain) NSScrubber *dayScrubber;
@property (retain) CalUIReminderTimeWheelViewController *timeWheel;
@property BOOL timeWheelIsLiveScrolling;
@property BOOL suppressScrollingDateChangeUpdates;
@property BOOL isUpdatingDayScrubber;
@property (retain) NSDate *reminderDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)numberOfItemsForScrubber:(id)a0;
- (void)scrubber:(id)a0 didSelectItemAtIndex:(long long)a1;
- (id)initWithDelegate:(id)a0;
- (id)scrubber:(id)a0 viewForItemAtIndex:(long long)a1;
- (void)updateTouchBar;
- (void)timeWheelWillBeginScroll:(id)a0;
- (void)timeWheelDidEndScroll:(id)a0;
- (void)timeWheel:(id)a0 didSelectDate:(id)a1 finalized:(BOOL)a2;
- (id)_makeDayScrubber;
- (id)_makeTimeWheelViewController;
- (void)cancelRemainingScrollDateChangeUpdates;
- (id)_dateForIndex:(long long)a0;
- (long long)_indexForDate:(id)a0;

@end
