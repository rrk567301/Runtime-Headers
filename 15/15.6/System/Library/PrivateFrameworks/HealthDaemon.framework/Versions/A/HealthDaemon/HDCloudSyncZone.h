@class NSUUID, HDCloudSyncStore, NSArray, CKRecordID, HDCloudSyncZoneIdentifier, HDCloudSyncRepository, HDCloudSyncRegistryRecord, HDCloudSyncDataUploadRequestRecord, NSMutableArray, CKShare, HDCloudSyncStoreRecord, HDCloudSyncMasterRecord;

@interface HDCloudSyncZone : NSObject {
    NSMutableArray *_records;
    NSMutableArray *_storeRecords;
    NSMutableArray *_orphanedSequenceRecords;
}

@property (readonly, weak, nonatomic) HDCloudSyncRepository *repository;
@property (readonly, copy, nonatomic) HDCloudSyncZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) long long zoneType;
@property (nonatomic) char hasLostIdentity;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) char hasOrphanedSequenceRecords;
@property (readonly, copy, nonatomic) NSArray *recordNames;
@property (readonly, nonatomic) long long recordCount;
@property (readonly, nonatomic) HDCloudSyncRegistryRecord *registryRecord;
@property (readonly, copy, nonatomic) NSArray *storeRecords;
@property (readonly, copy, nonatomic) NSArray *records;
@property (nonatomic) char hasFutureSchemaRecord;
@property (nonatomic) long long purpose;
@property (readonly, copy, nonatomic) CKRecordID *zoneShareRecordID;
@property (retain, nonatomic) CKShare *zoneShare;
@property (nonatomic) char validatedForSharing;
@property (readonly, copy, nonatomic) NSUUID *storeIdentifier;
@property (readonly, nonatomic) HDCloudSyncStoreRecord *storeRecord;
@property (readonly, nonatomic) HDCloudSyncMasterRecord *masterRecord;
@property (retain, nonatomic) HDCloudSyncStore *store;
@property (readonly, nonatomic) HDCloudSyncDataUploadRequestRecord *dataUploadRequestRecord;
@property (readonly, nonatomic) NSMutableArray *participantRecords;
@property (readonly, nonatomic) NSMutableArray *authorizationRecords;
@property (readonly, nonatomic) NSMutableArray *transactionRecords;

- (id)description;
- (void).cxx_destruct;
- (void)removeRecord:(id)a0;
- (char)addRecord:(id)a0 error:(id *)a1;
- (char)_addSubscriptionRecord:(id)a0 error:(id *)a1;
- (id)initForZoneIdentifier:(id)a0 repository:(id)a1 type:(long long)a2;

@end
