@interface HDQuantitySampleSyncEntity : HDSampleSyncEntity

+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (id)_objectWithCodable:(id)a0 collection:(id)a1;
+ (id)_predicateForSampleAgeInSyncSession:(id)a0 sampleTypeClass:(Class)a1;
+ (id)_predicateForSyncSession:(id)a0;
+ (Class)_syncedSampleTypeClass;
+ (Class)healthEntityClass;
+ (int)nanoSyncObjectType;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)a0;
+ (id)syncEntityIdentifier;

@end
