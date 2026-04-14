@class NSString;

@interface ULAssociatedStateStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<ULAssociatedStateDO, std::allocator<ULAssociatedStateDO>> { struct ULAssociatedStateDO *x0; struct ULAssociatedStateDO *x1; struct ULAssociatedStateDO *x2; })_fetchAssociatedStatesByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (BOOL)deleteOrphanRecords;
- (struct vector<ULAssociatedStateDO, std::allocator<ULAssociatedStateDO>> { struct ULAssociatedStateDO *x0; struct ULAssociatedStateDO *x1; struct ULAssociatedStateDO *x2; })fetchAllAssociatedStateBetweenTimes:(double)a0 toTime:(double)a1 atLoiGroupId:(const struct uuid { unsigned char x0[16]; } *)a2;
- (struct vector<ULAssociatedStateDO, std::allocator<ULAssociatedStateDO>> { struct ULAssociatedStateDO *x0; struct ULAssociatedStateDO *x1; struct ULAssociatedStateDO *x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct uuid *x2; })getAllDistinctAssociatedStateLoiIds;
- (BOOL)insertDataObjects:(const void *)a0 atLoiUUID:(const struct uuid { unsigned char x0[16]; } *)a1;

@end
