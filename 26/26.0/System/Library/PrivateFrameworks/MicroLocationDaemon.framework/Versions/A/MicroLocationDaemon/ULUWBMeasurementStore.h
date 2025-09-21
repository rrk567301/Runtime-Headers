@class NSString;

@interface ULUWBMeasurementStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<ULUWBMeasurementDO, std::allocator<ULUWBMeasurementDO>> { struct ULUWBMeasurementDO *x0; struct ULUWBMeasurementDO *x1; struct ULUWBMeasurementDO *x2; })_fetchUWBMeasurementByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (BOOL)deleteOrphanRecords;
- (struct vector<ULUWBMeasurementDO, std::allocator<ULUWBMeasurementDO>> { struct ULUWBMeasurementDO *x0; struct ULUWBMeasurementDO *x1; struct ULUWBMeasurementDO *x2; })fetchAllRecordsWithLimit:(unsigned int)a0;

@end
