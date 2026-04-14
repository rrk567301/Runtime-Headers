@class EKCalendar, EKUIGadget, NSEvent, EKViewController, NSMutableArray, EKCalendarItem;

@interface EKUICalendarPopUpButton : NSPopUpButton

@property (retain) NSMutableArray *allowedItemCache;
@property long long sourceCount;
@property BOOL populating;
@property BOOL repopulate;
@property (retain) NSEvent *delayedEvent;
@property (weak) EKViewController *viewController;
@property unsigned long long entityType;
@property (weak, nonatomic) EKCalendarItem *item;
@property BOOL showCalendarName;
@property BOOL showCalendarSwatch;
@property BOOL showButtonBorder;
@property (nonatomic) BOOL isReadOnly;
@property (readonly) EKCalendar *selectedCalendar;
@property (weak) EKUIGadget *gadget;
@property BOOL populated;

+ (Class)cellClass;
+ (id)_calendarForItem:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (BOOL)canBecomeKeyView;
- (BOOL)isTruncated;
- (id)initWithViewController:(id)a0;
- (id)_calendars;
- (void)reloadPopup;
- (void)_populatePopUp;
- (BOOL)_calendarMatchesCurrentItemCalendar:(id)a0;
- (void)_cacheSource:(id)a0 withCalendars:(id)a1;
- (void)_cacheCalendar:(id)a0;
- (void)_populatePopUpFromCache;
- (id)_menuItemForCalendar:(id)a0 withCachedElement:(id)a1;
- (void)_cacheValidCalendars;
- (void)updateIcon;

@end
