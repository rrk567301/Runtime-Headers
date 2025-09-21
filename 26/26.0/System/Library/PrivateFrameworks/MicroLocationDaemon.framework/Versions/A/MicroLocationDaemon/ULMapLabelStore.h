@class NSString;

@interface ULMapLabelStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (id)_createLabelMOFromDO:(const void *)a0 forScanningEventUUID:(const struct uuid { unsigned char x0[16]; } *)a1 andServiceUUID:(const struct uuid { unsigned char x0[16]; } *)a2;
- (id)_createMapLabelMOFromDO:(const void *)a0 withLabelMO:(id)a1 modelMO:(id)a2;
- (id)_fetchLabelMOWithObjectID:(id)a0 withManagedObjectContext:(id)a1;
- (struct vector<ULMapLabelDO, std::allocator<ULMapLabelDO>> { struct ULMapLabelDO *x0; struct ULMapLabelDO *x1; struct ULMapLabelDO *x2; })_fetchMapLabelByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (id)_fetchRelatedModelMOWithUUID:(const struct uuid { unsigned char x0[16]; } *)a0;
- (BOOL)deleteOrphanRecords;
- (struct vector<ULMapLabelDO, std::allocator<ULMapLabelDO>> { struct ULMapLabelDO *x0; struct ULMapLabelDO *x1; struct ULMapLabelDO *x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (struct vector<ULMapLabelDO, std::allocator<ULMapLabelDO>> { struct ULMapLabelDO *x0; struct ULMapLabelDO *x1; struct ULMapLabelDO *x2; })fetchInternalMapLabelsForModel:(const struct uuid { unsigned char x0[16]; } *)a0 limit:(unsigned int)a1 ascending:(BOOL)a2;
- (struct vector<ULMapLabelDO, std::allocator<ULMapLabelDO>> { struct ULMapLabelDO *x0; struct ULMapLabelDO *x1; struct ULMapLabelDO *x2; })fetchMapLabelsForModel:(const struct uuid { unsigned char x0[16]; } *)a0 andContextLayers:(const void *)a1 limit:(unsigned int)a2 ascending:(BOOL)a3;
- (struct vector<ULMapLabelDO, std::allocator<ULMapLabelDO>> { struct ULMapLabelDO *x0; struct ULMapLabelDO *x1; struct ULMapLabelDO *x2; })fetchMapLabelsForModel:(const struct uuid { unsigned char x0[16]; } *)a0 forService:(const struct uuid { unsigned char x0[16]; } *)a1 limit:(unsigned int)a2 ascending:(BOOL)a3;
- (BOOL)insertDataObjects:(const void *)a0 forLabelObjectID:(id)a1 andModelUUID:(const struct uuid { unsigned char x0[16]; } *)a2;
- (BOOL)insertLabelDOAndMapLabelDO:(const void *)a0 forScanningEventUUID:(const struct uuid { unsigned char x0[16]; } *)a1;
- (BOOL)insertMapLabelsWithRelatedLabelsObjectIDs:(const void *)a0;

@end
