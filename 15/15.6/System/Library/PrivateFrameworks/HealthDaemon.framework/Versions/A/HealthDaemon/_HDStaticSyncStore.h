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

+ (char)providesSamplePruningRestrictionPredicate;

- (void).cxx_destruct;
- (id)syncStoreIdentifier;
- (id)databaseIdentifier;
- (char)canRecieveSyncObjectsForEntityClass:(Class)a0;
- (char)enforceSyncEntityOrdering;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)a0;
- (id)initWithProfile:(id)a0 storeIdentifier:(id)a1 error:(id *)a2;
- (id)orderedSyncEntities;
- (char)providesSamplePruningRestrictionPredicate;
- (id)samplePruningRestrictionPredicateForSyncEntity:(Class)a0 error:(id *)a1;
- (void)setExpectedSequenceNumber:(long long)a0 forSyncEntityClass:(Class)a1;
- (char)shouldContinueAfterAnchorValidationError:(id)a0;
- (char)shouldEnforceSequenceOrdering;
- (char)supportsSpeculativeChangesForSyncEntityClass:(Class)a0;
- (id)syncEntityDependenciesForSyncEntity:(Class)a0;
- (long long)syncEpoch;
- (long long)syncProvenance;
- (id)syncStoreDefaultSourceBundleIdentifier;

@end
