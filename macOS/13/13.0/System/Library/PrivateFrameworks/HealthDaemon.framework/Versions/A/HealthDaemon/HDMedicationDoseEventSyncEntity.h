@interface HDMedicationDoseEventSyncEntity : HDSampleSyncEntity

+ (id)syncEntityIdentifier;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)a0;
+ (BOOL)supportsSyncStore:(id)a0;
+ (Class)healthEntityClass;
+ (id)_objectWithCodable:(id)a0 collection:(id)a1;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (Class)_syncedSampleTypeClass;

@end
