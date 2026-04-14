@class NSString;

@interface ULControlEventReplayStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<ULControlEventDO, std::allocator<ULControlEventDO>> { struct ULControlEventDO *x0; struct ULControlEventDO *x1; struct { struct ULControlEventDO *x0; } x2; })_fetchControlEventsByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (struct vector<ULControlEventDO, std::allocator<ULControlEventDO>> { struct ULControlEventDO *x0; struct ULControlEventDO *x1; struct { struct ULControlEventDO *x0; } x2; })fetchControlEventsByType:(long long)a0 fromTime:(struct optional<const double> { union { char x0; double x1; } x0; BOOL x1; })a1 toTime:(struct optional<const double> { union { char x0; double x1; } x0; BOOL x1; })a2 limit:(unsigned long long)a3;
- (struct vector<ULControlEventDO, std::allocator<ULControlEventDO>> { struct ULControlEventDO *x0; struct ULControlEventDO *x1; struct { struct ULControlEventDO *x0; } x2; })fetchControlEventsFromTime:(struct optional<const double> { union { char x0; double x1; } x0; BOOL x1; })a0 toTime:(struct optional<const double> { union { char x0; double x1; } x0; BOOL x1; })a1 limit:(unsigned long long)a2;
- (struct optional<ULControlEventDO> { union { char x0; struct ULControlEventDO { long long x0; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x1; } x1; } x0; BOOL x1; })fetchMostRecentControlEventBeforeTime:(double)a0;
- (BOOL)insertDataObjects:(const void *)a0;

@end
