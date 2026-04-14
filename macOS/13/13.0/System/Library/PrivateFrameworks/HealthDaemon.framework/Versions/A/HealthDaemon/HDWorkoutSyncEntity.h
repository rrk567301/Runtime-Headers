@interface HDWorkoutSyncEntity : HDSampleSyncEntity

+ (id)syncEntityIdentifier;
+ (int)nanoSyncObjectType;
+ (Class)healthEntityClass;
+ (id)_objectWithCodable:(id)a0 collection:(id)a1;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (Class)_syncedSampleTypeClass;
+ (id)_predicateForSampleAgeInSyncSession:(id)a0 sampleTypeClass:(Class)a1;

@end
