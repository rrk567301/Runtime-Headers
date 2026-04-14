@class NSString;

@interface ULLabelStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (BOOL)deleteOrphanRecords;
- (BOOL)deleteSimilarityListLabelsOlderThan:(double)a0 orNewerThan:(double)a1;
- (struct vector<ULLabelDOAndObjectID, std::allocator<ULLabelDOAndObjectID>> { struct ULLabelDOAndObjectID *x0; struct ULLabelDOAndObjectID *x1; struct ULLabelDOAndObjectID *x2; })fetchAllLabelsAndObjectIDsASCWithLOIGroupUUID:(const struct uuid { unsigned char x0[16]; } *)a0;
- (struct vector<ULLabelDO, std::allocator<ULLabelDO>> { struct ULLabelDO *x0; struct ULLabelDO *x1; struct ULLabelDO *x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (struct vector<ULLabelDOAndObjectID, std::allocator<ULLabelDOAndObjectID>> { struct ULLabelDOAndObjectID *x0; struct ULLabelDOAndObjectID *x1; struct ULLabelDOAndObjectID *x2; })fetchLabelsWithLOIGroupUUID:(const struct uuid { unsigned char x0[16]; } *)a0 andContextLayers:(const void *)a1 limit:(unsigned int)a2 ascending:(BOOL)a3;
- (BOOL)insertDataObjects:(const void *)a0 atLoiUUID:(const struct uuid { unsigned char x0[16]; } *)a1;
- (BOOL)insertDataObjects:(const void *)a0 forScanningEventUUID:(const struct uuid { unsigned char x0[16]; } *)a1 andServiceUUID:(const struct uuid { unsigned char x0[16]; } *)a2;

@end
