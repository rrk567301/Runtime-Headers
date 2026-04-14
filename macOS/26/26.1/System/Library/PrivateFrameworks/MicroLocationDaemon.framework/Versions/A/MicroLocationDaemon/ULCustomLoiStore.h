@class NSString;

@interface ULCustomLoiStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct uuid *x2; })getAllCustomLoiIdsForServiceId:(const struct uuid { unsigned char x0[16]; } *)a0;
- (struct vector<ULCustomLoiDO, std::allocator<ULCustomLoiDO>> { struct ULCustomLoiDO *x0; struct ULCustomLoiDO *x1; struct ULCustomLoiDO *x2; })_fetchCustomLoisByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (BOOL)addServiceToCustomLoiMapping:(const struct uuid { unsigned char x0[16]; } *)a0 loiId:(const struct uuid { unsigned char x0[16]; } *)a1;
- (BOOL)deleteOrphanRecords;
- (struct vector<ULCustomLoiDO, std::allocator<ULCustomLoiDO>> { struct ULCustomLoiDO *x0; struct ULCustomLoiDO *x1; struct ULCustomLoiDO *x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct uuid *x2; })getAllDistinctCustomLoiIds;
- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct uuid *x2; })getAllServicesEnabledAtCustomLoiId:(const struct uuid { unsigned char x0[16]; } *)a0;
- (BOOL)insertDataObjects:(const void *)a0 forServiceUUID:(const struct uuid { unsigned char x0[16]; } *)a1 atLoiUUID:(const struct uuid { unsigned char x0[16]; } *)a2;
- (BOOL)removeServiceToCustomLoiMapping:(const struct uuid { unsigned char x0[16]; } *)a0 loiId:(const struct uuid { unsigned char x0[16]; } *)a1;

@end
