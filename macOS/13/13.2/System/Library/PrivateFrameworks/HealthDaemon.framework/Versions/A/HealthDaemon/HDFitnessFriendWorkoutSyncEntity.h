@interface HDFitnessFriendWorkoutSyncEntity : HDSampleSyncEntity

+ (id)syncEntityIdentifier;
+ (BOOL)supportsSyncStore:(id)a0;
+ (Class)healthEntityClass;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (Class)_syncedSampleTypeClass;

@end
