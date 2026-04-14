@interface SearchUICalendarStore : NSObject

+ (id)sharedCalendarStore;
+ (id)calendarItemFromEventIdentifierComponents:(id)a0;
+ (void)fetchCalendarItemFromEventIdentifierComponents:(id)a0 completionHandler:(id /* block */)a1;
+ (id)colorFromCalendarItem:(id)a0;
+ (id)calendarColorWithIdentifier:(id)a0;
+ (void)fetchCalendarColorWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
