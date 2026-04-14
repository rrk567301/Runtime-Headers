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
    NSNumber *_highestContentSequenceNumber;
    NSNumber *_highestMetaContentSequenceNumber;
    NSNumber *_setRowId;
    NSString *_deviceId;
    NSNumber *_deviceRowId;
    unsigned char _deviceOptions;
}

@property (readonly, nonatomic) unsigned int priorLocalInstanceCount;
@property (readonly, nonatomic) unsigned int modifiedRowCount;
@property (readonly, nonatomic) unsigned long long updateVersion;
@property (readonly, nonatomic) unsigned long long priorVersion;
@property (readonly, nonatomic) NSNumber *updateValidityHash;
@property (readonly, nonatomic) NSNumber *setHash;
@property (readonly, nonatomic) NSNumber *priorValidityHash;
@property (readonly, nonatomic) unsigned long long priorOptions;

+ (BOOL)compactContiguousRunsOfDeletesInDatabase:(id)a0 deletedCount:(unsigned long long *)a1 shouldDefer:(id /* block */)a2;

- (id)description;
- (void).cxx_destruct;
- (BOOL)_registerDevice;
- (BOOL)_deleteLocalInstanceRowId:(id)a0 outProvenanceRowId:(id *)a1;
- (BOOL)_deleteSourceItemIdHash:(id)a0 outProvenanceRowId:(id *)a1;
- (BOOL)_insertContent:(id)a0 contentHash:(id)a1 outSequenceNumber:(id *)a2;
- (BOOL)_insertDeviceReturningRowId:(id *)a0;
- (BOOL)_insertLocalInstanceForItemWithSourceItemIdHash:(id)a0 provenanceRowId:(id)a1;
- (BOOL)_insertMetaContent:(id)a0 instanceHash:(id)a1 outSequenceNumber:(id *)a2;
- (BOOL)_insertNewProvenanceAndTombstonePriorProvenanceRow:(id)a0 outInsertedProvenanceRowId:(id *)a1 instanceHash:(id)a2 contentHash:(id)a3 contentSequenceNumber:(id)a4 metaContentSequenceNumber:(id)a5 contentChanged:(BOOL)a6;
- (BOOL)_insertProvenanceForItemWithContentHash:(id)a0 contentSequenceNumber:(id)a1 metaContentSequenceNumber:(id)a2 instanceHash:(id)a3 onDeviceRowId:(id)a4 insertedRowId:(id *)a5;
- (BOOL)_insertSetReturningRowId:(id *)a0;
- (BOOL)_registerSet;
- (BOOL)_selectDeviceRowId:(id *)a0 options:(unsigned char *)a1;
- (BOOL)_selectHighestKnownContentSequenceNumber:(id *)a0;
- (BOOL)_selectHighestKnownMetaContentSequenceNumber:(id *)a0;
- (BOOL)_selectHighestKnownSequenceNumber:(id *)a0 forColumn:(id)a1;
- (BOOL)_selectLocalInstanceCount:(id *)a0;
- (BOOL)_selectProvenenceWithContentHash:(id)a0 outSequenceNumber:(id *)a1;
- (BOOL)_selectProvenenceWithRowId:(id)a0 outInstanceHash:(id *)a1 outContentHash:(id *)a2;
- (BOOL)_selectSetRowId:(id *)a0 version:(unsigned long long *)a1 validityHash:(id *)a2 options:(unsigned long long *)a3;
- (id)_setRowIdCriterion;
- (BOOL)_tombstoneContentIfNoLongerReferencedByAnyProvenanceRows:(id)a0;
- (BOOL)_tombstoneMetaContentForProvenanceRowId:(id)a0 outContentHash:(id *)a1;
- (BOOL)_updateLocalInstanceRowId:(id)a0;
- (BOOL)_updateLocalInstanceRowId:(id)a0 provenanceRowId:(id)a1;
- (BOOL)_updateProvenanceRowId:(id)a0 priorInstanceHash:(id)a1 instanceHash:(id)a2;
- (BOOL)_updateSetVersionAndValidity;
- (BOOL)deleteAllLocalInstances:(unsigned int *)a0;
- (BOOL)deleteContentRecordsNoLongerReferencedByAnyProvenanceRecord;
- (BOOL)deleteLocalInstanceRowId:(id)a0;
- (BOOL)deleteSourceItemIdHash:(id)a0 didDeleteRow:(BOOL *)a1;
- (BOOL)enumerateUnmodifiedLocalInstancesUsingBlock:(id /* block */)a0;
- (id)initWithDatabase:(id)a0 device:(id)a1 request:(id)a2 startTimeMicros:(long long)a3;
- (BOOL)insertContent:(id)a0 contentHash:(id)a1 contentSequenceNumber:(id)a2 onDeviceRowId:(id)a3 contentBlobAlreadyExists:(BOOL *)a4;
- (BOOL)insertItemWithSourceItemIdHash:(id)a0 instanceHash:(id)a1 contentHash:(id)a2 metaContent:(id)a3 content:(id)a4;
- (id)selectContentRecordWithContentHash:(id)a0;
- (BOOL)selectProvenanceWithContentSequenceNumber:(id)a0 onDeviceRowId:(id)a1 outProvenanceRowId:(id *)a2;
- (BOOL)selectSourceItemIdHash:(id)a0 outLocalInstanceRowId:(id *)a1 outProvenanceRowId:(id *)a2 outInstanceHash:(id *)a3 outContentHash:(id *)a4 outContentSequenceNumber:(id *)a5 isDuplicate:(BOOL *)a6;
- (BOOL)tombstoneContentSequenceNumbersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forDeviceRowId:(id)a1;
- (BOOL)updateContent:(id)a0 andMetaContent:(id)a1 localInstanceRowId:(id)a2 priorProvenanceRowId:(id)a3 contentHash:(id)a4 instanceHash:(id)a5;
- (BOOL)updateMetaContent:(id)a0 localInstanceRowId:(id)a1 provenanceRowId:(id)a2 priorInstanceHash:(id)a3 instanceHash:(id)a4 contentHash:(id)a5 contentSequenceNumber:(id)a6;
- (BOOL)updateSetOptions:(unsigned long long)a0;

@end
