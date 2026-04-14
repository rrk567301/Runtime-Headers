@class NSObject, NSString, NSMutableDictionary, NSNumber, CCSet;
@protocol CCDatabaseReadOnlyAccess;

@interface CCReplicatedStateEnumerator : NSObject {
    CCSet *_set;
    NSNumber *_setRowId;
    NSNumber *_localDeviceRowId;
    NSString *_localDeviceIdString;
    NSObject<CCDatabaseReadOnlyAccess> *_databaseAccess;
    NSMutableDictionary *_deviceSiteIdentifierToRowIdMap;
    NSMutableDictionary *_deviceRowIdToSiteIdentifierMap;
    NSMutableDictionary *_commandCache;
}

- (void).cxx_destruct;
- (id)deviceRecordRowIdForDistributedSiteIdentifier:(id)a0;
- (id)deviceRowIdToRecordMap;
- (id)extractContentStateVectorTimestamps;
- (id)extractMetaContentStateVectorTimestamps;
- (id)fetchContentRecordFromContentHash:(id)a0;
- (id)initWithSet:(id)a0 databaseAccess:(id)a1;
- (id)provenanceRecordsForContentStateVector:(id)a0 state:(unsigned char)a1;
- (id)provenanceRecordEnumeratorForContentDeltaVector:(id)a0 metaContentDeltaVector:(id)a1 seenContentStateVector:(id)a2 seenMetaContentStateVector:(id)a3 error:(id *)a4;
- (id)sharedItemCount;
- (void)_addMissingClockValuesInTimestampRangeForStateVector:(id)a0;
- (id)_createProvenanceSelectCommandFromMetaContentVector:(id)a0 atomState:(unsigned char)a1 skipOverAtomsInState:(unsigned char)a2 columns:(id)a3;
- (id)_createProvenanceSelectCommandFromVector:(id)a0 atomState:(unsigned char)a1 skipOverAtomsInState:(unsigned char)a2 columns:(id)a3;
- (void)_enumerateProvenanceRecordsFromCommand:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)_extractContentStateVectorTimestamps:(BOOL)a0 extractMetaContentStateVectorTimestamps:(BOOL)a1;
- (id)_fetchDeviceRecords;
- (id)_fetchProvenanceRecords;
- (id)_findContentHashesNotInState:(unsigned char)a0 from:(id)a1;
- (id)_findProvenanceRecordsFromCommand:(id)a0;
- (id)_findSetRowId;
- (id)_mapDeviceRecords:(id)a0;
- (id)_provenanceRecordEnumeratorFromCommand:(id)a0 error:(id *)a1;
- (id)_stateVectorFromProvenanceRecords:(id)a0 deviceRecordMap:(id)a1 isContentStateVector:(BOOL)a2;
- (void)_updateDistributedTimestampStateVector:(id)a0 provenanceState:(id)a1 provenanceSequenceNumber:(id)a2 provenanceSequenceNumberEndOfRun:(id)a3 siteIdentifier:(id)a4;
- (id)contentHashesPresentInVector:(id)a0 missingFromVector:(id)a1;
- (void)enumerateProvenanceRecordsForContentStateVector:(id)a0 state:(unsigned char)a1 skipOverAtomsInState:(unsigned char)a2 error:(id *)a3 usingBlock:(id /* block */)a4;
- (void)enumerateProvenanceRecordsForMetaContentStateVector:(id)a0 state:(unsigned char)a1 skipOverAtomsInState:(unsigned char)a2 error:(id *)a3 usingBlock:(id /* block */)a4;
- (id)extractContentAndMetaContentStateVectorTimestamps;
- (id)globallyDeletedContentHashesPresentInRemovalsVector:(id)a0;
- (id)initWithSet:(id)a0 readAccess:(id)a1;
- (id)itemInstanceCount;
- (id)localDeviceIdentifier;

@end
