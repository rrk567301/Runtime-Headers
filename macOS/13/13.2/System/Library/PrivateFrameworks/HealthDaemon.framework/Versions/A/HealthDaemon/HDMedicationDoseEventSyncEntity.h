@interface HDMedicationDoseEventSyncEntity : HDSampleSyncEntity

+ (long long)nextSyncAnchorWithSession:(id)a0 startSyncAnchor:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)syncEntityIdentifier;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)a0;
+ (BOOL)generateSyncObjectsForSession:(id)a0 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a1 profile:(id)a2 messageHandler:(id)a3 error:(id *)a4;
+ (BOOL)supportsSyncStore:(id)a0;
+ (Class)healthEntityClass;
+ (id)_objectWithCodable:(id)a0 collection:(id)a1;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (Class)_syncedSampleTypeClass;

@end
