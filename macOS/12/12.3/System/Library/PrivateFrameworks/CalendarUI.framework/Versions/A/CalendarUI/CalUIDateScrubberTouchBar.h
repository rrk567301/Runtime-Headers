@class NSCalendar, NSView, NSScrubber, NSTouchBar, NSDate, NSString;
@protocol CalUIDateScrubberTouchBarDelegate;

@interface CalUIDateScrubberTouchBar : NSObject <NSScrubberDataSource, NSScrubberDelegate, CalUIDateItemViewDelegate, NSTouchBarProvider>

@property (weak) id<CalUIDateScrubberTouchBarDelegate> delegate;
@property (retain) NSTouchBar *touchBar;
@property (retain) NSView *scrubberContainer;
@property (retain, nonatomic) NSScrubber *activeScrubber;
@property (retain, nonatomic) NSDate *selectedDate;
@property (retain) NSScrubber *dateScrubberDaily;
@property (retain) NSScrubber *dateScrubberWeekly;
@property (retain) NSScrubber *dateScrubberMonthly;
@property (retain) NSScrubber *dateScrubberYearly;
@property (retain) NSCalendar *calendar;
@property (retain) NSDate *originDate;
@property long long daysPerWeek;
@property long long firstDayOfWeek;
@property BOOL scrubbersLoaded;
@property BOOL activeScrubberHasInteraction;
@property BOOL activeScrubberIsScrolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)numberOfItemsForScrubber:(id)a0;
- (void)didBeginInteractingWithScrubber:(id)a0;
- (void)didFinishInteractingWithScrubber:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)scrubber:(id)a0 viewForItemAtIndex:(long long)a1;
- (void)reload;
- (void)updateTouchBar;
- (id)createDailyDateScrubber;
- (id)createWeeklyDateScrubber;
- (id)createMonthlyDateScrubber;
- (id)createYearlyDateScrubber;
- (id)createTodayTouchBarItem;
- (void)_calendarDayDidChange:(id)a0;
- (void)scrubberWillStartLiveScroll:(id)a0;
- (void)scrubberDidEndLiveScroll:(id)a0;
- (id)_createDateScrubberWithNumberOfVisibleItems:(long long)a0;
- (void)goToToday;
- (void)_reloadScrubbers;
- (void)_switchToScrubberWithViewName:(id)a0;
- (unsigned long long)_unitForViewString:(id)a0;
- (unsigned long long)_unitForScrubber:(id)a0;
- (id)_scrubberForUnit:(unsigned long long)a0;
- (long long)_indexForDate:(id)a0 unit:(unsigned long long)a1;
- (void)_selectDateForScrubberWithUnit:(unsigned long long)a0;
- (id)_dateForIndex:(long long)a0 unit:(unsigned long long)a1;
- (void)_activeScrubberEndedAtIndex:(long long)a0;
- (id)startDateInUnit:(unsigned long long)a0 forDate:(id)a1;

@end
