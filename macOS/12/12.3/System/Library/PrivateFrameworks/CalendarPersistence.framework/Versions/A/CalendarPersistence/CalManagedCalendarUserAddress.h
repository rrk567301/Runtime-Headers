@class NSURL, CalManagedCalDAVCalendar, CalManagedPrincipal;

@interface CalManagedCalendarUserAddress : CalManagedObject

@property (retain) CalManagedPrincipal *principal;
@property (retain) CalManagedCalDAVCalendar *calendar;
@property (retain) NSURL *address;
@property long long preferred;

+ (id)entityName;
+ (id)preferredAddressURLforAddresses:(id)a0;
+ (id)_toCalDAVCalendarUserAddress:(id)a0;

- (void)willRefresh:(BOOL)a0;
- (id)enclosingSource;

@end
