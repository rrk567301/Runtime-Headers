@class NSString, NSMutableDictionary, NSNumber, NSObject;
@protocol CCDatabaseReadWriteAccess;

@interface CCDatabaseUpdater : NSObject {
    NSObject<CCDatabaseReadWriteAccess> *_database;
    NSString *_requestDescription;
    NSNumber *_startTimeMicros;
    NSNumber *_itemTypeNumber;
    NSString *_encodedDescriptors;
    NSNumber *_versionNumber;
    NSMutableDictionary *_commandCache;
    NSNumber *_localHighestContentSequenceNumber;
    NSNumber *_localHighestMetaContentSequenceNumber;
    NSString *_deviceId;
    unsigned char _deviceOptions;
}

@property (readonly, nonatomic) unsigned int priorLocalInstanceCount;
@property (readonly, nonatomic) unsigned int modifiedRowCount;
@property (readonly, nonatomic) unsigned long long updateVersion;
@property (readonly, nonatomic) unsigned long long priorVersion;
@property (readonly, nonatomic) NSNumber *updateValidityHash;
@property (readonly, nonatomic) NSNumber *setHash;
@property (readonly, nonatomic) NSNumber *priorValidityHash;
@property (readonly, nonatomic) unsigned int localInstanceAddedCount;
@property (readonly, nonatomic) unsigned int localInstanceUpdatedCount;
@property (readonly, nonatomic) unsigned int localInstanceRemovedCount;
@property (readonly, nonatomic) unsigned int sharedItemAddedCount;
@property (readonly, nonatomic) unsigned int sharedItemRemovedCount;
@property (readonly, nonatomic) unsigned int sharedItemProvenanceUpdatedCount;
@property (readonly, nonatomic) NSNumber *deviceRowId;

+ (BOOL)insertResourceVersion:(id)a0 database:(id)a1;
+ (BOOL)_writeRecordWithKey:(id)a0 stringValue:(id)a1 integerValue:(id)a2 dataValue:(id)a3 onConflictType:(long long)a4 database:(id)a5;
+ (BOOL)compactContiguousRunsOfDeletesInDatabase:(id)a0 deletedCount:(unsigned long long *)a1 shouldDefer:(id /* block */)a2;
+ (BOOL)insertOrUpdateLastDeltaDate:(id)a0 database:(id)a1;
+ (BOOL)insertOrUpdateLastMaintenanceDate:(id)a0 database:(id)a1;
+ (BOOL)insertOrUpdateLocalDeviceIdentifier:(id)a0 database:(id)a1;
+ (BOOL)insertOrUpdateRowsModified:(unsigned long long)a0 database:(id)a1;
+ (id)selectLocalHighestContentSequenceNumberInDatabase:(id)a0 error:(id *)a1;
+ (id)selectLocalHighestMetaContentSequenceNumberInDatabase:(id)a0 error:(id *)a1;
+ (id)selectRowsModifiedCountInDatabase:(id)a0 error:(id *)a1;
+ (id)selectSetValidityHashInDatabase:(id)a0 error:(id *)a1;
+ (id)selectSetVersionInDatabase:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)finish:(BOOL *)a0;
- (BOOL)deleteAllLocalInstances;
- (BOOL)deleteContentRecordsNoLongerReferencedByAnyProvenanceRecord;
- (BOOL)deleteSourceItemIdHash:(id)a0;
- (BOOL)enumerateUnmodifiedLocalInstancesUsingBlock:(id /* block */)a0;
- (id)initWithDatabase:(id)a0 device:(id)a1 request:(id)a2 startTimeMicros:(long long)a3;
- (BOOL)insertContent:(id)a0 contentHash:(id)a1 sequenceNumber:(id)a2 onDeviceRowId:(id)a3;
- (BOOL)insertItemWithSourceItemIdHash:(id)a0 instanceHash:(id)a1 contentHash:(id)a2 metaContent:(id)a3 content:(id)a4 isDuplicate:(BOOL *)a5;
- (BOOL)selectProvenanceWithContentSequenceNumber:(id)a0 onDeviceRowId:(id)a1 outProvenanceRowId:(id *)a2;
- (BOOL)selectSourceItemIdHash:(id)a0 outLocalInstanceRowId:(id *)a1 outProvenanceRowId:(id *)a2 outInstanceHash:(id *)a3 outContentHash:(id *)a4 outContentSequenceNumber:(id *)a5 isDuplicate:(BOOL *)a6;
- (BOOL)tombstoneContentSequenceNumbersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forDeviceRowId:(id)a1;
- (BOOL)updateContent:(id)a0 andMetaContent:(id)a1 localInstanceRowId:(id)a2 priorProvenanceRowId:(id)a3 contentHash:(id)a4 instanceHash:(id)a5 isDuplicate:(BOOL *)a6;
- (BOOL)updateMetaContent:(id)a0 localInstanceRowId:(id)a1 provenanceRowId:(id)a2 priorInstanceHash:(id)a3 instanceHash:(id)a4 contentHash:(id)a5 contentSequenceNumber:(id)a6 isDuplicate:(BOOL *)a7;
- (BOOL)_registerDevice;
- (BOOL)_deleteSourceItemIdHash:(id)a0 outProvenanceRowId:(id *)a1;
- (BOOL)_enumerateLocalInstancesSelectingOnlyUnmodified:(BOOL)a0 usingBlock:(id /* block */)a1;
- (id)_incrementLocalHighestContentSequenceNumber;
- (id)_incrementLocalHighestMetaContentSequenceNumber;
- (BOOL)_insertContent:(id)a0 contentHash:(id)a1 outSequenceNumber:(id *)a2;
- (BOOL)_insertContentIfNotExists:(id)a0 contentHash:(id)a1;
- (BOOL)_insertDeviceReturningRowId:(id *)a0;
- (BOOL)_insertLocalInstanceForItemWithSourceItemIdHash:(id)a0 provenanceRowId:(id)a1;
- (BOOL)_insertMetaContent:(id)a0 instanceHash:(id)a1 outSequenceNumber:(id *)a2 outIsDuplicate:(BOOL *)a3;
- (BOOL)_insertNewProvenanceAndTombstonePriorProvenanceRow:(id)a0 outInsertedProvenanceRowId:(id *)a1 instanceHash:(id)a2 contentHash:(id)a3 contentSequenceNumber:(id)a4 metaContentSequenceNumber:(id)a5 contentChanged:(BOOL)a6;
- (BOOL)_insertProvenanceForItemWithContentHash:(id)a0 contentSequenceNumber:(id)a1 metaContentSequenceNumber:(id)a2 instanceHash:(id)a3 onDeviceRowId:(id)a4 insertedRowId:(id *)a5;
- (BOOL)_registerSetVersionAndValidity;
- (BOOL)_selectDeviceRowId:(id *)a0 options:(unsigned char *)a1;
- (BOOL)_selectLocalDeviceProvenenceWithContentHash:(id)a0 outSequenceNumber:(id *)a1;
- (BOOL)_selectLocalInstanceCount:(id *)a0;
- (BOOL)_selectMetaContentWithInstanceHash:(id)a0 outRecord:(id *)a1;
- (BOOL)_selectProvenanceWithContentHash:(id)a0 outLocalInstancePresent:(BOOL *)a1 outRemoteContentPresent:(BOOL *)a2;
- (BOOL)_selectProvenenceWithRowId:(id)a0 outInstanceHash:(id *)a1 outContentHash:(id *)a2;
- (BOOL)_tombstoneMetaContentWithProvenanceRowId:(id)a0 tombstoneContentIfNoLongerPresent:(BOOL)a1;
- (BOOL)_updateLastDelta;
- (BOOL)_updateLocalHighestSequenceNumbers;
- (BOOL)_updateLocalInstanceRowId:(id)a0 provenanceRowId:(id)a1;
- (BOOL)_updateSetVersionAndValidity;

@end
