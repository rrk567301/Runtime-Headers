@class NSMutableSet, CKServerChangeToken, NSMutableDictionary, NSMutableOrderedSet, NSArray, NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface CKSyncEngineMetadata : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_zoneIDsNeedingToFetchChangesSet;
    NSMutableDictionary *_zonesToSaveDictionary;
    NSMutableOrderedSet *_zoneIDsToDeleteSet;
    NSMutableOrderedSet *_pendingModificationsSet;
    NSMutableOrderedSet *_inFlightModificationsSet;
    unsigned long long _internalChangeCount;
    NSMutableSet *_mergeableValueIDsNeedingMaintenanceSet;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *serverChangeTokensByZoneID;
@property (retain, nonatomic) NSMutableOrderedSet *fakeRecordIDsToSaveForSerializationTests;
@property (retain, nonatomic) NSMutableOrderedSet *fakeRecordIDsToDeleteForSerializationTests;
@property (readonly, nonatomic) unsigned long long changeCount;
@property (nonatomic) BOOL needsToFetchDatabaseChanges;
@property (retain, nonatomic) CKServerChangeToken *serverChangeTokenForDatabase;
@property (nonatomic) BOOL needsToSaveDatabaseSubscription;
@property (readonly, nonatomic) NSArray *zoneIDsNeedingToFetchChanges;
@property (readonly, nonatomic) NSArray *zonesToSave;
@property (readonly, nonatomic) NSArray *zoneIDsToDelete;
@property (readonly, nonatomic) NSArray *pendingRecordModifications;
@property (readonly, nonatomic) NSArray *inFlightRecordModifications;
@property (readonly, copy, nonatomic) NSSet *mergeableValueIDsNeedingMaintenance;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)recordIDsToDelete;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)initWithData:(id)a0 error:(id *)a1;
- (void)markRecordModifications:(id)a0 inFlight:(BOOL)a1;
- (void)getDataRepresentation:(id /* block */)a0;
- (void)addPendingRecordModifications:(id)a0;
- (void)setNeedsToSave:(BOOL)a0 zones:(id)a1;
- (void)setNeedsToDelete:(BOOL)a0 zoneIDs:(id)a1;
- (void)removeInFlightRecordModifications:(id)a0;
- (void)removePendingRecordModifications:(id)a0;
- (id)serverChangeTokenForRecordZoneID:(id)a0;
- (void)setNeedsToFetchChanges:(BOOL)a0 forRecordZoneID:(id)a1;
- (void)setServerChangeToken:(id)a0 forRecordZoneID:(id)a1;
- (id)pendingRecordIDsWithModificationType:(long long)a0;
- (id)recordIDsToSave;
- (BOOL)needsToFetchChangesForZoneID:(id)a0;
- (BOOL)needsToSaveZone:(id)a0;
- (BOOL)needsToDeleteZoneID:(id)a0;
- (void)addMergeableValueIDsNeedingMaintenance:(id)a0;
- (void)removeMergeableValueIDsNeedingMaintenance:(id)a0;

@end
