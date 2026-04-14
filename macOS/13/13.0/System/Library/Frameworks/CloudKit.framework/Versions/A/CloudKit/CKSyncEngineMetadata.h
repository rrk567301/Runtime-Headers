@class NSMutableSet, CKRecordID, NSMutableDictionary, NSMutableOrderedSet, CKServerChangeToken, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface CKSyncEngineMetadata : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_zoneIDsNeedingToFetchChangesSet;
    NSMutableOrderedSet *_zoneIDsToSaveSet;
    NSMutableOrderedSet *_zoneIDsToDeleteSet;
    NSMutableOrderedSet *_pendingModificationsSet;
    NSMutableOrderedSet *_inFlightModificationsSet;
    unsigned long long _internalChangeCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *serverChangeTokensByZoneID;
@property (retain, nonatomic) NSMutableOrderedSet *fakeRecordIDsToSaveForSerializationTests;
@property (retain, nonatomic) NSMutableOrderedSet *fakeRecordIDsToDeleteForSerializationTests;
@property (retain, nonatomic) NSMutableDictionary *fakeZonesToSaveForSerializationTests;
@property (retain, nonatomic) CKRecordID *mockNextKnownUserRecordID;
@property (nonatomic) BOOL useMockNextKnownUserRecordID;
@property (readonly, nonatomic) unsigned long long changeCount;
@property (nonatomic) BOOL needsToFetchDatabaseChanges;
@property (retain, nonatomic) CKServerChangeToken *serverChangeTokenForDatabase;
@property (nonatomic) BOOL needsToSaveDatabaseSubscription;
@property (readonly, nonatomic) NSArray *zoneIDsNeedingToFetchChanges;
@property (readonly, nonatomic) NSArray *zoneIDsToSave;
@property (readonly, nonatomic) NSArray *zoneIDsToDelete;
@property (readonly, nonatomic) NSArray *pendingRecordModifications;
@property (readonly, nonatomic) NSArray *inFlightRecordModifications;
@property (retain, nonatomic) CKRecordID *lastKnownUserRecordID;
@property (nonatomic) BOOL didPerformInitialUserRecordIDFetch;
@property (nonatomic) BOOL hasPendingAdopterTrackedModifications;
@property (nonatomic) BOOL hasInFlightAdopterTrackedModifications;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)recordIDsToDelete;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)recordIDsToSave;
- (void)getDataRepresentation:(id /* block */)a0;
- (void)addPendingRecordModifications:(id)a0;
- (void)markRecordModifications:(id)a0 inFlight:(BOOL)a1;
- (void)removePendingRecordModifications:(id)a0;
- (void)removeInFlightRecordModifications:(id)a0;
- (id)pendingRecordIDsWithModificationType:(long long)a0;
- (void)setServerChangeToken:(id)a0 forRecordZoneID:(id)a1;
- (id)serverChangeTokenForRecordZoneID:(id)a0;
- (void)setNeedsToFetchChanges:(BOOL)a0 forRecordZoneID:(id)a1;
- (BOOL)needsToFetchChangesForZoneID:(id)a0;
- (void)setNeedsToSave:(BOOL)a0 zoneIDs:(id)a1;
- (BOOL)needsToSaveZoneID:(id)a0;
- (void)setNeedsToDelete:(BOOL)a0 zoneIDs:(id)a1;
- (BOOL)needsToDeleteZoneID:(id)a0;

@end
