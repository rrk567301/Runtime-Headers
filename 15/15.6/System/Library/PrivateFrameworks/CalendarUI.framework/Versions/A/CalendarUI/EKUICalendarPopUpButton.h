@class EKCalendar, EKUIGadget, NSString, EKViewController, NSMutableArray, EKCalendarItem;

@interface EKUICalendarPopUpButton : NSPopUpButton <NSMenuDelegate>

@property (retain) NSMutableArray *allowedItemCache;
@property long long sourceCount;
@property (weak) EKViewController *viewController;
@property unsigned long long entityType;
@property (nonatomic) char menuIsOpen;
@property (nonatomic) char needsUpdateAfterDismiss;
@property (weak, nonatomic) EKCalendarItem *item;
@property char showCalendarName;
@property char showCalendarSwatch;
@property char showButtonBorder;
@property (nonatomic) char isReadOnly;
@property (readonly) EKCalendar *selectedCalendar;
@property (weak) EKUIGadget *gadget;
@property char populated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClass;
+ (id)_calendarForItem:(id)a0;

- (void).cxx_destruct;
- (char)canBecomeKeyView;
- (void)menuDidClose:(id)a0;
- (void)menuWillOpen:(id)a0;
- (void)mouseDown:(id)a0;
- (char)isTruncated;
- (id)initWithViewController:(id)a0;
- (void)_cacheCalendar:(id)a0;
- (void)_cacheSource:(id)a0 withCalendars:(id)a1;
- (void)_cacheValidCalendars;
- (char)_calendarMatchesCurrentItemCalendar:(id)a0;
- (id)_calendars;
- (id)_menuItemForCalendar:(id)a0 withCachedElement:(id)a1;
- (void)_populatePopUp;
- (void)_populatePopUpFromCache;
- (char)_shouldShowSource:(id)a0;
- (void)reloadPopup:(id)a0;
- (void)updateIcon;

@end
