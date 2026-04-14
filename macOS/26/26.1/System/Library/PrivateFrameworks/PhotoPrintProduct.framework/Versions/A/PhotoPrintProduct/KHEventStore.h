@class NSArray, EKEventStore;

@interface KHEventStore : NSObject

@property (readonly, nonatomic) EKEventStore *eventStore;
@property (readonly, copy, nonatomic) NSArray *allCalendars;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)shared;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)ensureCalendarStoreInitializationWithCompletion:(id /* block */)a0;
- (id)eventsFromCalendars:(id)a0 startDate:(id)a1 endDate:(id)a2;

@end
