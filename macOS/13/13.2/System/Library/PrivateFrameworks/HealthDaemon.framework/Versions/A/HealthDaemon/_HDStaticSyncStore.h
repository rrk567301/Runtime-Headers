@class NSString, HDProfile, NSUUID;

@interface _HDStaticSyncStore : NSObject <HDSyncStore> {
    long long _syncProvenance;
    NSUUID *_storeIdentifier;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly) int protocolVersion;
@property (readonly) long long syncStoreType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)syncStoreIdentifier;
- (id)databaseIdentifier;
- (id)orderedSyncEntities;
- (long long)syncProvenance;
- (long long)syncEpoch;
- (id)syncStoreDefaultSourceBundleIdentifier;
- (id)syncEntityDependenciesForSyncEntity:(Class)a0;
- (BOOL)canRecieveSyncObjectsForEntityClass:(Class)a0;
- (BOOL)enforceSyncEntityOrdering;
- (BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)a0;
- (BOOL)shouldContinueAfterAnchorValidationError:(id)a0;
- (BOOL)shouldEnforceSequenceOrdering;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)a0;
- (void)setExpectedSequenceNumber:(long long)a0 forSyncEntityClass:(Class)a1;
- (id)initWithProfile:(id)a0 storeIdentifier:(id)a1 error:(id *)a2;

@end
