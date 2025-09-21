@class NSDate, NSUUID, CKRecordID, NSArray, NSOrderedSet, NSMutableDictionary, NSDictionary, NSString, CKServerChangeToken, NSObject, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface CKSyncEngineState : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableOrderedSet *_zoneIDsNeedingToFetchChangesSet;
    NSMutableOrderedSet *_pendingDatabaseChangesSet;
    NSMutableOrderedSet *_inFlightDatabaseChangesSet;
    NSMutableOrderedSet *_pendingRecordZoneChangesSet;
    NSMutableOrderedSet *_inFlightRecordChangesSet;
    unsigned long long _internalChangeCount;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *mServerChangeTokensByZoneID;
@property (copy) NSOrderedSet *fakeRecordIDsToSaveForSerializationTests;
@property (copy) NSOrderedSet *fakeRecordIDsToDeleteForSerializationTests;
@property (copy) NSDictionary *fakeZonesToSaveForSerializationTests;
@property (copy) NSOrderedSet *fakeZoneIDsToSaveForSerializationTests;
@property (copy) NSOrderedSet *fakeZoneIDsToDeleteForSerializationTests;
@property (copy) CKRecordID *mockNextKnownUserRecordID;
@property char useMockNextKnownUserRecordID;
@property char fakeUpdateUserRecordIDError;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) id /* block */ changeHandler;
@property (readonly, nonatomic) unsigned long long changeCount;
@property (copy) NSArray *pendingRecordZoneChanges;
@property (copy) NSArray *pendingDatabaseChanges;
@property char needsToFetchDatabaseChanges;
@property char needsToSaveDatabaseSubscription;
@property (copy) NSDate *lastFetchDatabaseChangesDate;
@property (copy, nonatomic) NSString *existingDatabaseSubscriptionID;
@property (readonly, nonatomic) NSArray *inFlightDatabaseChanges;
@property (readonly, nonatomic) NSArray *inFlightRecordChanges;
@property (copy) CKRecordID *lastKnownUserRecordID;
@property char didPerformInitialUserRecordIDFetch;
@property char hasInFlightUntrackedChanges;
@property (copy) NSString *loggingID;
@property (retain) CKServerChangeToken *serverChangeTokenForDatabase;
@property char hasPendingUntrackedChanges;
@property (readonly, copy) NSArray *zoneIDsWithUnfetchedServerChanges;

+ (id)emptyState;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (void)reset;
- (id)shortDescription;
- (unsigned long long)weight;
- (id)CKDescriptionPropertiesWithPublic:(char)a0 private:(char)a1 shouldExpand:(char)a2;
- (void)markRecordZoneChanges:(id)a0 inFlight:(char)a1;
- (void)setServerChangeToken:(id)a0 forZoneID:(id)a1;
- (void)removePendingRecordZoneChanges:(id)a0;
- (void)addPendingDatabaseChanges:(id)a0;
- (void)addPendingRecordZoneChanges:(id)a0;
- (char)containsInFlightRecordZoneChange:(id)a0;
- (char)containsPendingRecordZoneChange:(id)a0;
- (void)getDataRepresentation:(id /* block */)a0;
- (id)initInternal;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithStateSerialization:(id)a0 error:(id *)a1;
- (void)markDatabaseChanges:(id)a0 inFlight:(char)a1;
- (void)moveInFlightDatabaseChangesToPending;
- (void)moveInFlightRecordZoneChangesToPending;
- (char)needsToDeleteZoneID:(id)a0;
- (char)needsToFetchChangesForZoneID:(id)a0;
- (char)needsToSaveZoneID:(id)a0;
- (void)notifyChangeHandlerWithCoalescing:(char)a0 scheduleSync:(char)a1;
- (void)removeInFlightDatabaseChanges:(id)a0;
- (void)removeInFlightRecordZoneChanges:(id)a0;
- (void)removePendingDatabaseChanges:(id)a0;
- (id)serverChangeTokenForZoneID:(id)a0;
- (id)serverChangeTokensByZoneID;
- (void)setInitialValues;
- (void)setNeedsToFetchChanges:(char)a0 forRecordZoneID:(id)a1;

@end
