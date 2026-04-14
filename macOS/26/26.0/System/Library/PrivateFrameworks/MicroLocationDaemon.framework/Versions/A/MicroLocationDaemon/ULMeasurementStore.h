@class NSString;

@interface ULMeasurementStore : ULStore <ULStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<ULMeasurementDO, std::allocator<ULMeasurementDO>> { struct ULMeasurementDO *x0; struct ULMeasurementDO *x1; struct ULMeasurementDO *x2; })_fetchMeasurementEntriesByAndPredicates:(id)a0 sortDescriptors:(id)a1 andLimit:(unsigned long long)a2;
- (BOOL)batchTransferRecordsUsingBatchSize:(unsigned long long)a0 andLimit:(unsigned long long)a1 usingDistinctRecords:(BOOL)a2 intoTargetStore:(id)a3;
- (BOOL)deleteMeasurementsFromRecordingUUIDs:(const void *)a0;
- (BOOL)deleteRecordsOlderThan:(double)a0 orNewerThan:(double)a1;
- (struct vector<ULMeasurementDO, std::allocator<ULMeasurementDO>> { struct ULMeasurementDO *x0; struct ULMeasurementDO *x1; struct ULMeasurementDO *x2; })fetchAllLocalizingMeasurementsWithLimit:(unsigned long long)a0;
- (struct vector<ULMeasurementDO, std::allocator<ULMeasurementDO>> { struct ULMeasurementDO *x0; struct ULMeasurementDO *x1; struct ULMeasurementDO *x2; })fetchAllRecordsWithLimit:(unsigned int)a0;
- (struct vector<ULMeasurementDO, std::allocator<ULMeasurementDO>> { struct ULMeasurementDO *x0; struct ULMeasurementDO *x1; struct ULMeasurementDO *x2; })fetchLearningMeasurementsAtLoiGroupId:(const struct uuid { unsigned char x0[16]; } *)a0 fromTime:(double)a1 toTime:(double)a2;
- (struct vector<ULMeasurementDO, std::allocator<ULMeasurementDO>> { struct ULMeasurementDO *x0; struct ULMeasurementDO *x1; struct ULMeasurementDO *x2; })fetchMeasurementsForRecordingUUIDs:(const void *)a0;
- (BOOL)insertDataObjects:(const void *)a0;
- (unsigned int)numLocalizationScansFromTime:(double)a0 toTime:(double)a1;
- (unsigned int)numRecordingScansFromTime:(double)a0 toTime:(double)a1;

@end
