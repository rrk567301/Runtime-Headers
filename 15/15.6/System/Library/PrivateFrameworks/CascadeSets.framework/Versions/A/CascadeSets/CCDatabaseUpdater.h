@class NSString, NSMutableDictionary, CCDeviceRecord, NSNumber, NSObject;
@protocol CCDatabaseReadWriteAccess;

@interface CCDatabaseUpdater : NSObject {
    NSObject<CCDatabaseReadWriteAccess> *_database;
    NSString *_requestDescription;
    NSNumber *_startTimeMicros;
    NSMutableDictionary *_commandCache;
    NSNumber *_cachedLocalHighestContentSequenceNumber;
    NSNumber *_cachedLocalHighestMetaContentSequenceNumber;
    NSNumber *_cachedLocalHighestAttestationGeneration;
}

@property (readonly, nonatomic) unsigned int modifiedRowCount;
@property (readonly, nonatomic) unsigned int localInstanceAddedCount;
@property (readonly, nonatomic) unsigned int localInstanceUpdatedCount;
@property (readonly, nonatomic) unsigned int localInstanceRemovedCount;
@property (readonly, nonatomic) unsigned int sharedItemAddedCount;
@property (readonly, nonatomic) unsigned int sharedItemRemovedCount;
@property (readonly, nonatomic) unsigned int sharedItemProvenanceUpdatedCount;
@property (readonly, nonatomic) CCDeviceRecord *localDeviceRecord;
@property (readonly, nonatomic) NSNumber *priorLocalInstanceCount;
@property (readonly, nonatomic) NSNumber *updatedLocalSourceVersion;
@property (readonly, nonatomic) NSNumber *priorLocalSourceVersion;
@property (readonly, nonatomic) NSNumber *updatedLocalSourceValidityHash;
@property (readonly, nonatomic) NSNumber *priorLocalSourceValidityHash;

+ (id)updaterForDonateRequest:(id)a0 toDatabase:(id)a1;
+ (char)_writeRecordWithKey:(id)a0 stringValue:(id)a1 integerValue:(id)a2 dataValue:(id)a3 onConflictType:(long long)a4 database:(id)a5;
+ (char)insertOrUpdateLastDeltaDate:(id)a0 database:(id)a1;
+ (char)insertOrUpdateLastMaintenanceDate:(id)a0 database:(id)a1;
+ (char)insertOrUpdateRowsModified:(unsigned long long)a0 database:(id)a1;
+ (id)selectLocalSourceValidityHashInDatabase:(id)a0 error:(id *)a1;
+ (id)selectLocalSourceVersionInDatabase:(id)a0 error:(id *)a1;
+ (id)selectRowsModifiedCountInDatabase:(id)a0 error:(id *)a1;
+ (id)updaterForDatabase:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (char)finish:(char *)a0;
- (char)deleteAllLocalInstances;
- (char)deleteContentRecordsNoLongerReferencedByAnyProvenanceRecord;
- (char)deleteSourceItemIdHash:(id)a0;
- (char)enumerateUnmodifiedLocalInstancesUsingBlock:(id /* block */)a0;
- (char)insertContent:(id)a0 contentHash:(id)a1 sequenceNumber:(id)a2 onDeviceRowId:(id)a3;
- (char)insertItemWithSourceItemIdHash:(id)a0 instanceHash:(id)a1 contentHash:(id)a2 metaContent:(id)a3 content:(id)a4 isDuplicate:(char *)a5;
- (char)registerRemoteDeviceSite:(id)a0 isAttestation:(char)a1 returningRowId:(id *)a2;
- (id)selectAllDeviceRecords;
- (char)selectProvenanceWithContentSequenceNumber:(id)a0 onDeviceRowId:(id)a1 outProvenanceRowId:(id *)a2;
- (char)selectSourceItemIdHash:(id)a0 outLocalInstanceRowId:(id *)a1 outProvenanceRowId:(id *)a2 outInstanceHash:(id *)a3 outContentHash:(id *)a4 outContentSequenceNumber:(id *)a5 isDuplicate:(char *)a6;
- (char)tombstoneContentSequenceNumbersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forDeviceRowId:(id)a1;
- (char)updateContent:(id)a0 andMetaContent:(id)a1 localInstanceRowId:(id)a2 priorProvenanceRowId:(id)a3 contentHash:(id)a4 instanceHash:(id)a5 isDuplicate:(char *)a6;
- (char)updateMetaContent:(id)a0 localInstanceRowId:(id)a1 provenanceRowId:(id)a2 priorInstanceHash:(id)a3 instanceHash:(id)a4 contentHash:(id)a5 contentSequenceNumber:(id)a6 isDuplicate:(char *)a7;
- (id)_incrementCachedIntegerWithKey:(id)a0;
- (char)compactContiguousRunsOfDeletes:(id /* block */)a0;
- (char)_deleteDeviceRowId:(id)a0;
- (char)_deleteSourceItemIdHash:(id)a0 outProvenanceRowId:(id *)a1;
- (char)_enumerateLocalInstancesSelectingOnlyUnmodified:(char)a0 usingBlock:(id /* block */)a1;
- (char)_expireAndTombstoneAllProvenanceForDeviceRowId:(id)a0;
- (char)_expireDeviceRowId:(id)a0;
- (char)_insertContent:(id)a0 contentHash:(id)a1 outExists:(char *)a2;
- (char)_insertContent:(id)a0 contentHash:(id)a1 outSequenceNumber:(id *)a2;
- (char)_insertDeviceSite:(id)a0 returningRowId:(id *)a1;
- (char)_insertLocalInstanceForItemWithSourceItemIdHash:(id)a0 provenanceRowId:(id)a1;
- (char)_insertMetaContent:(id)a0 instanceHash:(id)a1 outSequenceNumber:(id *)a2 outIsDuplicate:(char *)a3;
- (char)_insertNewProvenanceAndTombstonePriorProvenanceRow:(id)a0 outInsertedProvenanceRowId:(id *)a1 instanceHash:(id)a2 contentHash:(id)a3 contentSequenceNumber:(id)a4 metaContentSequenceNumber:(id)a5 contentChanged:(char)a6;
- (char)_insertProvenanceForItemWithContentHash:(id)a0 contentSequenceNumber:(id)a1 metaContentSequenceNumber:(id)a2 instanceHash:(id)a3 onDeviceRowId:(id)a4 insertedRowId:(id *)a5;
- (char)_persistCachedIntegers;
- (char)_persistIntegerWithKey:(id)a0 cachedValue:(id)a1;
- (char)_selectDeviceRecords:(id *)a0 withOptions:(unsigned char)a1 beyondExpirationDate:(id)a2;
- (char)_selectLatestDeviceRecordWithDeviceUUID:(id)a0 outRecord:(id *)a1;
- (char)_selectLocalDeviceProvenenceWithContentHash:(id)a0 outSequenceNumber:(id *)a1;
- (char)_selectLocalDeviceRecord:(id *)a0;
- (char)_selectLocalInstanceCount:(id *)a0;
- (char)_selectMetaContentWithInstanceHash:(id)a0 outRecord:(id *)a1;
- (char)_selectProvenanceWithContentHash:(id)a0 outLocalInstancePresent:(char *)a1 outRemoteContentPresent:(char *)a2;
- (char)_selectProvenenceWithRowId:(id)a0 outInstanceHash:(id *)a1 outContentHash:(id *)a2;
- (char)_selectRemoteContentHashPresent:(id)a0 remoteContentPresentPtr:(char *)a1;
- (char)_tombstoneMetaContentWithProvenanceRowId:(id)a0 tombstoneContentIfNoLongerPresent:(char)a1;
- (char)_tombstoneProvenanceRowsForExpiredDeviceRowId:(id)a0;
- (char)_updateDeviceRowId:(id)a0 expirationDate:(id)a1;
- (char)_updateLastDelta;
- (char)_updateLocalInstanceRowId:(id)a0 provenanceRowId:(id)a1;
- (char)_updateLocalSourceVersion:(id)a0 localSourceValidityHash:(id)a1;
- (char)deleteExpiredRemoteDeviceState:(id /* block */)a0 shouldTombstoneSet:(char *)a1;
- (id)initWithDatabase:(id)a0 request:(id)a1;
- (char)registerLocalDeviceSite:(id)a0;

@end
