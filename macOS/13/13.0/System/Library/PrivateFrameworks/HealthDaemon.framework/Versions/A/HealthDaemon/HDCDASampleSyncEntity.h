@interface HDCDASampleSyncEntity : HDSampleSyncEntity

+ (id)syncEntityIdentifier;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (BOOL)supportsSpeculativeNanoSyncChanges;
+ (int)nanoSyncObjectType;
+ (Class)healthEntityClass;
+ (id)_objectWithCodable:(id)a0 collection:(id)a1;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (Class)_syncedSampleTypeClass;

@end
