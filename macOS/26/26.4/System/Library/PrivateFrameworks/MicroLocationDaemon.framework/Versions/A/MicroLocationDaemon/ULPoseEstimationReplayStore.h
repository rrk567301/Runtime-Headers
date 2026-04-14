@class NSString;

@interface ULPoseEstimationReplayStore : ULStore <ULStoreProtocol> {
    struct vector<ULPoseEstimationDO, std::allocator<ULPoseEstimationDO>> { struct ULPoseEstimationDO *__begin_; struct ULPoseEstimationDO *__end_; struct { struct ULPoseEstimationDO *__cap_; } ; } _buffer;
    struct uuid { unsigned char data[16]; } _currentLocationId;
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
- (unsigned int)count;
- (id).cxx_construct;
- (BOOL)deleteAllRecords;
- (BOOL)deleteRecordsOlderThan:(double)a0 orNewerThan:(double)a1;
- (struct vector<ULPoseEstimationDO, std::allocator<ULPoseEstimationDO>> { struct ULPoseEstimationDO *x0; struct ULPoseEstimationDO *x1; struct { struct ULPoseEstimationDO *x0; } x2; })efficientlyFetchPoseEstimationEntriesWithLOIGroupUUIDs:(struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct { struct uuid *x0; } x2; })a0 startDate:(id)a1 endDate:(id)a2 fetchLimit:(unsigned long long)a3 newest:(BOOL)a4 ascending:(BOOL)a5;
- (struct vector<ULPoseEstimationDO, std::allocator<ULPoseEstimationDO>> { struct ULPoseEstimationDO *x0; struct ULPoseEstimationDO *x1; struct { struct ULPoseEstimationDO *x0; } x2; })fetchAllPoseEstimationsWithLimit:(unsigned int)a0;
- (BOOL)flushStoreBuffer;
- (id)initWithDbStore:(struct ULDatabaseStoreInterface { void /* function */ **x0; } *)a0;
- (BOOL)insertDataObjects:(const void *)a0 atLoiUUID:(const struct uuid { unsigned char x0[16]; } *)a1;
- (BOOL)insertDataObjectsBuffered:(const void *)a0 atLoiUUID:(const struct uuid { unsigned char x0[16]; } *)a1;
- (BOOL)isBufferingEnabled;

@end
