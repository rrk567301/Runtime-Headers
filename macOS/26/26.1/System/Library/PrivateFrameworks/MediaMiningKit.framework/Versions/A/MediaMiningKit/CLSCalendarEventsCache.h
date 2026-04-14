@class NSMutableSet;

@interface CLSCalendarEventsCache : NSObject

@property (readonly, nonatomic) NSMutableSet *years;

- (void).cxx_destruct;
- (id)eventsForStartDate:(id)a0 endDate:(id)a1;
- (id)debugDescription;
- (void)insertEvent:(id)a0;
- (id)init;
- (void)_enumerateDaysFromStartDate:(id)a0 toEndDate:(id)a1 usingBlock:(id /* block */)a2;
- (id)_storeDayForDate:(id)a0 createIfNeeded:(BOOL)a1;
- (void)enumerateEventsFromStartDate:(id)a0 toEndDate:(id)a1 usingBlock:(id /* block */)a2;
- (id)eventsForDate:(id)a0;
- (BOOL)hasEventsFromStartDate:(id)a0 toEndDate:(id)a1;

@end
