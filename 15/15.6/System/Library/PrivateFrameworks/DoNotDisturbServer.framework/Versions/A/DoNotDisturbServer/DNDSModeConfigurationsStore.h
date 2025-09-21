@class NSMutableSet, NSString, NSSet, NSData, DNDSIDSSyncEngine, NSNumber, DNDSSyncEngine;
@protocol DNDSContactMonitoring, DNDSBackingStore, DNDSModeConfigurationsStoreDelegate;

@interface DNDSModeConfigurationsStore : NSObject <DNDSCachedBackingStoreDelegate, DNDSSyncEngineDataSource, DNDSIDSSyncEngineDataSource, DNDSModeConfigurationsStoring, DNDSContactMonitorListener> {
    id<DNDSBackingStore> _backingStore;
    id<DNDSContactMonitoring> _contactMonitor;
    DNDSSyncEngine *_syncEngine;
    DNDSIDSSyncEngine *_idsSyncEngine;
    NSMutableSet *_ckRecordIDsToForceSave;
    NSMutableSet *_idsRecordIDsToForceSave;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSNumber *compatibilityVersion;
@property (weak, nonatomic) id<DNDSModeConfigurationsStoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSData *contactHistoryToken;
@property (readonly, copy, nonatomic) NSSet *monitoredContacts;

- (void).cxx_destruct;
- (void)syncEngine:(id)a0 didFetchRecord:(id)a1;
- (void)syncEngine:(id)a0 failedToDeleteRecordWithID:(id)a1 error:(id)a2;
- (void)_lock_purgeData;
- (void)_notifyDelegateOfAvailableModes;
- (long long)syncEngine:(id)a0 prepareRecordToSave:(inout id)a1;
- (id)_lock_existingConfigurations;
- (char)_lock_mergeLocalConfigurationRecord:(id)a0 withRemoteCKRecord:(id)a1 deleteModeOnCorruption:(char)a2;
- (char)_lock_mergeLocalConfigurationRecord:(id)a0 withRemoteConfigurationRecord:(id)a1 modeIdentifier:(id)a2 sourceDeviceIdentifier:(id)a3 sourceFrameworkVersion:(struct { long long x0; long long x1; long long x2; })a4 sourceIsCloud:(char)a5 sourceWantsToForce:(char)a6 deleteModeOnCorruption:(char)a7;
- (id)_lock_modeConfigurationForCKRecordID:(id)a0;
- (id)_lock_modeConfigurationForDNDSIDSRecordID:(id)a0;
- (id)_lock_modeConfigurationForModeIdentifier:(id)a0;
- (id)_lock_modeIdentifiers;
- (id)_lock_mutableExistingConfigurations;
- (long long)_lock_populateCKRecord:(id)a0 lastChanceRecord:(id)a1;
- (char)_lock_populateDNDSIDSRecord:(id)a0;
- (void)_lock_purgeRecordIDs:(id)a0;
- (id)_lock_recordIDsForIDSSyncEngine:(id)a0;
- (void)_lock_removeModeConfigurationWithCKRecordID:(id)a0;
- (void)_lock_removeModeConfigurationWithModeIdentifier:(id)a0;
- (void)_lock_updateModeConfigurationWithConfiguration:(id)a0;
- (unsigned long long)_lock_writeRecord:(id)a0 writePartition:(char)a1 error:(id *)a2;
- (void)_purgeData;
- (void)_purgeRecordIDs:(id)a0;
- (id)backingStore:(id)a0 migrateDictionaryRepresentation:(id)a1 fromVersionNumber:(unsigned long long)a2 toVersionNumber:(unsigned long long)a3;
- (void)cachedBackingStoreDidPurgeCache:(id)a0;
- (void)contactMonitor:(id)a0 didReceiveUpdatedContacts:(id)a1 deletedContactIdentifiers:(id)a2 withContactHistoryToken:(id)a3;
- (void)contactMonitor:(id)a0 didReceiveUpdatedContactsForContactsWithoutIdentifiers:(id)a1;
- (void)idsSyncEngine:(id)a0 didFetchRecord:(id)a1;
- (void)idsSyncEngine:(id)a0 prepareRecordToSave:(inout id)a1;
- (void)idsSyncEngine:(id)a0 recordWithIDWasDeleted:(id)a1;
- (id)initWithBackingStore:(id)a0 syncEngine:(id)a1 idsSyncEngine:(id)a2;
- (void)purgeRecordsForIDSSyncEngine:(id)a0;
- (void)purgeRecordsForSyncEngine:(id)a0;
- (id)readRecordWithError:(id *)a0;
- (id)recordIDsForIDSSyncEngine:(id)a0;
- (id)recordIDsForSyncEngine:(id)a0;
- (id)syncEngine:(id)a0 recordTypeForRecordID:(id)a1;
- (void)syncEngine:(id)a0 recordWithIDWasDeleted:(id)a1;
- (void)syncEngine:(id)a0 resolveConflictBetweenClientRecord:(id)a1 andServerRecord:(id)a2;
- (long long)syncEngine:(id)a0 wantsRecord:(id)a1;
- (void)syncEngine:(id)a0 zoneWithIDWasDeleted:(id)a1 removingRecordIDs:(id)a2;
- (unsigned long long)writeRecord:(id)a0 error:(id *)a1;
- (unsigned long long)writeRecord:(id)a0 writePartition:(char)a1 error:(id *)a2;

@end
