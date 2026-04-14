@class NSString;

@interface ULHomeSlamAnalyticEventStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct optional<ULHomeSlamAnalyticEventDO> { union { char x0; struct ULHomeSlamAnalyticEventDO { struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x0; short x1; } x1; } x0; BOOL x1; })fetchFirstEvent;
- (struct vector<ULHomeSlamAnalyticEventDO, std::allocator<ULHomeSlamAnalyticEventDO>> { struct ULHomeSlamAnalyticEventDO *x0; struct ULHomeSlamAnalyticEventDO *x1; struct ULHomeSlamAnalyticEventDO *x2; })_fetchAnalyticEventsByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (struct vector<ULHomeSlamAnalyticEventDO, std::allocator<ULHomeSlamAnalyticEventDO>> { struct ULHomeSlamAnalyticEventDO *x0; struct ULHomeSlamAnalyticEventDO *x1; struct ULHomeSlamAnalyticEventDO *x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (struct vector<ULHomeSlamAnalyticEventDO, std::allocator<ULHomeSlamAnalyticEventDO>> { struct ULHomeSlamAnalyticEventDO *x0; struct ULHomeSlamAnalyticEventDO *x1; struct ULHomeSlamAnalyticEventDO *x2; })fetchAnalyticEventsASCFromTime:(double)a0 toTime:(double)a1;
- (struct optional<ULHomeSlamAnalyticEventDO> { union { char x0; struct ULHomeSlamAnalyticEventDO { struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x0; short x1; } x1; } x0; BOOL x1; })fetchLatestAnalyticEventType:(const void *)a0 beforeTime:(double)a1;
- (BOOL)insertDataObjects:(const void *)a0;

@end
