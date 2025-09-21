@class NSString;

@interface ULScanningEventStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<ULScanningEventDO, std::allocator<ULScanningEventDO>> { struct ULScanningEventDO *x0; struct ULScanningEventDO *x1; struct ULScanningEventDO *x2; })_fetchScanningEventsByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (BOOL)addPhotoFeatures:(struct ULPhotoFeaturesDO { struct vector<float, std::allocator<float>> { float *x0; float *x1; float *x2; } x0; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x1; })a0 forScanningEvent:(struct uuid { unsigned char x0[16]; })a1;
- (unsigned int)countScanningEventsForLoiGroupId:(const struct uuid { unsigned char x0[16]; } *)a0;
- (unsigned int)countScanningEventsFromTime:(double)a0 toTime:(double)a1 atLoiGroupId:(const struct uuid { unsigned char x0[16]; } *)a2;
- (BOOL)deleteOrphanRecords;
- (struct vector<ULScanningEventDO, std::allocator<ULScanningEventDO>> { struct ULScanningEventDO *x0; struct ULScanningEventDO *x1; struct ULScanningEventDO *x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct uuid *x2; })fetchDistinctScanningEventsUUIDsFromTime:(double)a0 toTime:(double)a1 atLoiGroupId:(const struct uuid { unsigned char x0[16]; } *)a2 withLimit:(unsigned int)a3;
- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct uuid *x2; })fetchDistinctScanningEventsUUIDsFromTime:(double)a0 toTime:(double)a1 withScanType:(struct optional<ULScanningEventDO::ScanType> { union { char x0; short x1; } x0; BOOL x1; })a2 Limit:(unsigned int)a3;
- (id)fetchScanningEventManagedObjectWithUUID:(const struct uuid { unsigned char x0[16]; } *)a0 withManagedObjectContext:(id)a1;
- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct uuid *x2; })fetchScanningEventUUIDsWithLOIGroupUUID:(const struct uuid { unsigned char x0[16]; } *)a0 scanType:(struct optional<ULScanningEventDO::ScanType> { union { char x0; short x1; } x0; BOOL x1; })a1 motionState:(struct optional<ULScanningEventDO::MotionState> { union { char x0; short x1; } x0; BOOL x1; })a2 scansWithPhotoFeatures:(struct optional<bool> { union { char x0; BOOL x1; } x0; BOOL x1; })a3 startDate:(id)a4 endDate:(id)a5 onlyScansWithLabels:(BOOL)a6 fetchLimit:(unsigned long long)a7 newest:(BOOL)a8 ascending:(BOOL)a9;
- (struct vector<ULScanningEventDO, std::allocator<ULScanningEventDO>> { struct ULScanningEventDO *x0; struct ULScanningEventDO *x1; struct ULScanningEventDO *x2; })fetchScanningEventsForUUIDs:(const void *)a0;
- (struct vector<ULScanningEventDO, std::allocator<ULScanningEventDO>> { struct ULScanningEventDO *x0; struct ULScanningEventDO *x1; struct ULScanningEventDO *x2; })fetchScanningEventsWithLOIGroupUUID:(const struct uuid { unsigned char x0[16]; } *)a0 scanType:(struct optional<ULScanningEventDO::ScanType> { union { char x0; short x1; } x0; BOOL x1; })a1 startDate:(id)a2 endDate:(id)a3 fetchLimit:(unsigned long long)a4 ascending:(BOOL)a5;
- (struct vector<std::pair<ULScanningEventDO, std::vector<NSManagedObjectID *>>, std::allocator<std::pair<ULScanningEventDO, std::vector<NSManagedObjectID *>>>> { void *x0; void *x1; void *x2; })fetchScanningEventsWithLabelObjectIDsForUUIDs:(const void *)a0;
- (struct optional<std::chrono::time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>>> { union { char x0; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x1; } x0; BOOL x1; })getMostRecentScanTimeForLoiGroupId:(const struct uuid { unsigned char x0[16]; } *)a0;
- (struct optional<std::chrono::time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>>> { union { char x0; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x1; } x0; BOOL x1; })getOldestScanTimestamp;
- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct uuid *x2; })getScanningEventUUIDsAtLoiGroupId:(const void *)a0 withScanType:(struct optional<ULScanningEventDO::ScanType> { union { char x0; short x1; } x0; BOOL x1; })a1 startDate:(id)a2 endDate:(id)a3 onlyScansWithLabels:(BOOL)a4 Limit:(unsigned int)a5;
- (BOOL)insertDataObjects:(const void *)a0 atLoiUUID:(const struct uuid { unsigned char x0[16]; } *)a1;
- (struct vector<ULScanningEventDO, std::allocator<ULScanningEventDO>> { struct ULScanningEventDO *x0; struct ULScanningEventDO *x1; struct ULScanningEventDO *x2; })oneByOneFetchScanningEventsWithLOIGroupUUID:(const struct uuid { unsigned char x0[16]; } *)a0 scanType:(struct optional<ULScanningEventDO::ScanType> { union { char x0; short x1; } x0; BOOL x1; })a1 motionState:(struct optional<ULScanningEventDO::MotionState> { union { char x0; short x1; } x0; BOOL x1; })a2 scansWithPhotoFeatures:(struct optional<bool> { union { char x0; BOOL x1; } x0; BOOL x1; })a3 startDate:(id)a4 endDate:(id)a5 onlyScansWithLabels:(BOOL)a6 fetchLimit:(unsigned long long)a7 newest:(BOOL)a8 ascending:(BOOL)a9;
- (struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; void *x2; })selectAllScanningLOITypesFromTime:(double)a0 withLimit:(unsigned long long)a1;

@end
