@class CalManagedCalendarItem, CalManagedCalDAVCalendar, NSString;

@interface CalendarItemMigratePlan : NSObject

@property int type;
@property (retain) CalManagedCalendarItem *localItem;
@property (retain) CalManagedCalendarItem *remoteItem;
@property (retain) CalManagedCalDAVCalendar *remoteCalendar;
@property (retain) NSString *updatedETag;
@property (retain) NSString *updatedFilename;

- (void).cxx_destruct;
- (void)faultOutItemsInContext:(id)a0;

@end
