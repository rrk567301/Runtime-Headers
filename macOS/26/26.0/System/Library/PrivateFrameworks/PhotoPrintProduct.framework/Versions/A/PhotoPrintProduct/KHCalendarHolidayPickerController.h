@class NSTextField, KHCalendarProjectLayoutsDataSource, NSScrollView, NSArray, NSString, NSPopUpButton, NSMutableArray, NSButton, KHHolidayStore, NSTableView;

@interface KHCalendarHolidayPickerController : UXViewController <NSTableViewDataSource, NSTableViewDelegate>

@property (retain) NSButton *birthdaysOptionButton;
@property (retain) NSTextField *holidaysLabel;
@property (retain) NSPopUpButton *holidaysMenuButton;
@property (retain) NSTextField *showCalendarsLabel;
@property (retain) NSScrollView *holidayTableContainer;
@property (retain) NSTableView *holidayTableView;
@property (copy) NSArray *calendars;
@property (retain) NSMutableArray *enabledCalendarUUIDs;
@property (weak) KHCalendarProjectLayoutsDataSource *dataSource;
@property (retain) KHHolidayStore *holidayStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)_setupHolidaysMenu;
- (void)_warmupCalendarEvents;
- (BOOL)cacheContainsCalendar:(id)a0;
- (void)calendarTableItemAction:(id)a0;
- (void)holidayCountryChangedAction:(id)a0;
- (id)initWithProjectDatasource:(id)a0;
- (void)refreshCalendarLayouts;
- (void)toggleBirthdays:(id)a0;

@end
