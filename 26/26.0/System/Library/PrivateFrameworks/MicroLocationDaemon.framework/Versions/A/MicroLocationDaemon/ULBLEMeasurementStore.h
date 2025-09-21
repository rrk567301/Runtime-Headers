@class NSString;

@interface ULBLEMeasurementStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<ULBLEMeasurementDO, std::allocator<ULBLEMeasurementDO>> { struct ULBLEMeasurementDO *x0; struct ULBLEMeasurementDO *x1; struct ULBLEMeasurementDO *x2; })_fetchBLEMeasurementByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (BOOL)deleteOrphanRecords;
- (struct vector<ULBLEMeasurementDO, std::allocator<ULBLEMeasurementDO>> { struct ULBLEMeasurementDO *x0; struct ULBLEMeasurementDO *x1; struct ULBLEMeasurementDO *x2; })fetchAllRecordsWithLimit:(unsigned int)a0;

@end
