@class HMBLocalDatabase, NSMapTable, NSURL, NSHashTable, NSString, HMBCloudDatabase;
@protocol HMMLogEventSubmitting;

@interface HMDDatabase : HMFObject <HMBLocalDatabaseDelegate, HMBCloudDatabaseDelegate, HMDDatabaseZoneDelegate, HMFLogging, HMDDatabase> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) NSURL *defaultLocalDatabaseFileURL;
@property (class, readonly) HMDDatabase *defaultDatabase;
@property (class, readonly) HMDDatabase *cameraClipsDatabase;
@property (class, readonly) HMDDatabase *hindsightDatabase;

@property (readonly) NSHashTable *delegates;
@property (readonly) NSMapTable *zoneDelegatesByLocalZone;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property BOOL hasStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HMBCloudDatabase *cloudDatabase;
@property (readonly) HMBLocalDatabase *localDatabase;

+ (id)logCategory;
+ (void)handleDatabaseInitializationError:(id)a0;
+ (void)registerQueries;

- (id)removeLocalAndCloudDataForLocalZone:(id)a0;
- (void)cloudDatabase:(id)a0 encounteredError:(id)a1 withOperation:(id)a2 onZone:(id)a3;
- (id)sharedZonesWithID:(id)a0 configuration:(id)a1 delegate:(id)a2 error:(id *)a3;
- (void)cloudDatabase:(id)a0 didReceiveMessageWithUserInfo:(id)a1;
- (void)removeZoneDelegate:(id)a0 forLocalZone:(id)a1;
- (id)privateZonesWithName:(id)a0 configuration:(id)a1 delegate:(id)a2 error:(id *)a3;
- (void)start;
- (void)cloudZone:(id)a0 didChangeRebuildStatus:(id)a1;
- (void)dealloc;
- (void)addDelegate:(id)a0;
- (id)cloudDatabase:(id)a0 willRemoveZoneWithID:(id)a1;
- (void)cloudZone:(id)a0 didUpdateParticipantWithClientIdentifier:(id)a1;
- (void)cloudDatabase:(id)a0 didCreateZoneWithID:(id)a1;
- (void)cloudZone:(id)a0 didEncounterZoneDisabledError:(id)a1;
- (id)acceptInvitation:(id)a0;
- (id)removeSharedZonesWithName:(id)a0;
- (void)localZone:(id)a0 didCompleteProcessingWithResult:(id)a1;
- (id)removePrivateZonesWithName:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)cloudZone:(id)a0 didRemoveParticipantWithClientIdentifier:(id)a1;
- (id)initWithLocalDatabase:(id)a0 cloudDatabase:(id)a1 logEventSubmitter:(id)a2;
- (id)existingSharedZoneIDWithName:(id)a0;
- (void)performDelegateCallback:(id /* block */)a0;
- (void)localDatabase:(id)a0 willRemoveZoneWithID:(id)a1;
- (id)removeZonesWithID:(id)a0 isPrivate:(BOOL)a1;
- (id)zonesWithID:(id)a0 isPrivate:(BOOL)a1 shouldCreate:(BOOL)a2 configuration:(id)a3 delegate:(id)a4 error:(id *)a5;
- (void)cloudDatabase:(id)a0 encounteredError:(id)a1 withOperation:(id)a2 onContainer:(id)a3;
- (void)cloudDatabase:(id)a0 didRemoveZoneWithID:(id)a1;
- (id)unregisterSharedSubscriptionForExternalRecordType:(id)a0;
- (id)synchronizeSharedZones;
- (id)logIdentifier;
- (id)initWithFileURL:(id)a0 cloudConfiguration:(id)a1;
- (id)existingPrivateZonesWithName:(id)a0 configuration:(id)a1 delegate:(id)a2 error:(id *)a3;
- (void)addZoneDelegate:(id)a0 forLocalZone:(id)a1;
- (void).cxx_destruct;
- (void)performZoneDelegateCallback:(id /* block */)a0 forLocalZone:(id)a1;
- (id)registerSharedSubscriptionForExternalRecordType:(id)a0;

@end
