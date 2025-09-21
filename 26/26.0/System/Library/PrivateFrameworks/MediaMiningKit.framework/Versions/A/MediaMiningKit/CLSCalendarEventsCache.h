@class NSMutableSet;

@interface CLSCalendarEventsCache : NSObject

@property (readonly, nonatomic) NSMutableSet *years;

- (id)debugDescription;
- (id)eventsForStartDate:(id)a0 endDate:(id)a1;
- (id)init;
- (void)insertEvent:(id)a0;
- (void).cxx_destruct;
- (void)_enumerateDaysFromStartDate:(id)a0 toEndDate:(id)a1 usingBlock:(id /* block */)a2;
- (id)_storeDayForDate:(id)a0 createIfNeeded:(BOOL)a1;
- (void)enumerateEventsFromStartDate:(id)a0 toEndDate:(id)a1 usingBlock:(id /* block */)a2;
- (id)eventsForDate:(id)a0;
- (BOOL)hasEventsFromStartDate:(id)a0 toEndDate:(id)a1;

@end
