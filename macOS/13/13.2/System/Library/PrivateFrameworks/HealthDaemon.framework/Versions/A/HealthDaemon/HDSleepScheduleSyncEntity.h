@interface HDSleepScheduleSyncEntity : HDSampleSyncEntity

+ (id)syncEntityIdentifier;
+ (BOOL)supportsSyncStore:(id)a0;
+ (BOOL)supportsDateBasedSharding;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (int)nanoSyncObjectType;
+ (Class)healthEntityClass;
+ (id)_objectWithCodable:(id)a0 collection:(id)a1;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (Class)_syncedSampleTypeClass;

@end
