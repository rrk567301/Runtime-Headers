@class NSString;

@interface ULOdometryStore : ULStore <ULStoreProtocol> {
    struct vector<ULOdometryDO, std::allocator<ULOdometryDO>> { struct ULOdometryDO *__begin_; struct ULOdometryDO *__end_; struct { struct ULOdometryDO *__cap_; } ; } _dataObjectBuffer;
    struct uuid { unsigned char data[16]; } _currentLoiUUID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)bufferMaxSize;
+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)deleteRecordsOlderThan:(double)a0 orNewerThan:(double)a1;
- (struct vector<ULOdometryDO, std::allocator<ULOdometryDO>> { struct ULOdometryDO *x0; struct ULOdometryDO *x1; struct { struct ULOdometryDO *x0; } x2; })efficientlyFetchOdometryEntriesWithLOIGroupUUIDs:(struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct { struct uuid *x0; } x2; })a0 odometrySource:(long long)a1 startDate:(id)a2 endDate:(id)a3 fetchLimit:(unsigned long long)a4 newest:(BOOL)a5 ascending:(BOOL)a6;
- (struct vector<ULOdometryDO, std::allocator<ULOdometryDO>> { struct ULOdometryDO *x0; struct ULOdometryDO *x1; struct { struct ULOdometryDO *x0; } x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (BOOL)flushStoreBuffer;
- (struct optional<std::chrono::time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>>> { union { char x0; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x1; } x0; BOOL x1; })getMostRecentOdometryTimeForLoiGroupId:(const struct uuid { unsigned char x0[16]; } *)a0 odometrySource:(long long)a1;
- (id)initWithDbStore:(struct ULDatabaseStoreInterface { void /* function */ **x0; } *)a0;
- (BOOL)insertDataObjects:(const void *)a0 atLoiUUID:(const struct uuid { unsigned char x0[16]; } *)a1;
- (BOOL)insertDataObjectsBuffered:(const void *)a0 atLoiUUID:(const struct uuid { unsigned char x0[16]; } *)a1;

@end
