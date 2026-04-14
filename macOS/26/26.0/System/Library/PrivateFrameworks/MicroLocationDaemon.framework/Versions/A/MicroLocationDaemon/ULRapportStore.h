@class NSString;

@interface ULRapportStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<ULRapportDO, std::allocator<ULRapportDO>> { struct ULRapportDO *x0; struct ULRapportDO *x1; struct ULRapportDO *x2; })_fetchRapportsByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (BOOL)deleteOrphanRecords;
- (struct vector<ULRapportDO, std::allocator<ULRapportDO>> { struct ULRapportDO *x0; struct ULRapportDO *x1; struct ULRapportDO *x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (struct vector<ULRapportDO, std::allocator<ULRapportDO>> { struct ULRapportDO *x0; struct ULRapportDO *x1; struct ULRapportDO *x2; })fetchRapportEntriesAtLoiFromTime:(double)a0 toTime:(double)a1 loiGroupId:(const void *)a2;
- (BOOL)insertDataObjects:(const void *)a0 atLoiUUID:(const struct uuid { unsigned char x0[16]; } *)a1;

@end
