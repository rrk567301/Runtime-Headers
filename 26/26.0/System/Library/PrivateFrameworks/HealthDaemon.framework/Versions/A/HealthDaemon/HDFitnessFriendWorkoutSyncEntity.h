@interface HDFitnessFriendWorkoutSyncEntity : HDSampleSyncEntity

+ (BOOL)supportsSyncStore:(id)a0;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (Class)_syncedSampleTypeClass;
+ (Class)healthEntityClass;
+ (id)syncEntityIdentifier;

@end
