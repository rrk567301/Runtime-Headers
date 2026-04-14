@interface HDBinarySampleSyncEntity : HDSampleSyncEntity

+ (id)syncEntityIdentifier;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (int)nanoSyncObjectType;
+ (Class)healthEntityClass;
+ (id)_objectWithCodable:(id)a0 collection:(id)a1;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (BOOL)_insertObjectsFromCodableObjectCollection:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;
+ (Class)_syncedSampleTypeClass;

@end
