@interface HDWorkoutZonesAssociationEntity : HDHealthEntity

+ (id)uniquedColumns;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (BOOL)associateSyncedZonesSamplesWithUUIDs:(id)a0 withWorkoutUUID:(id)a1 syncIdentity:(id)a2 syncProvenance:(long long)a3 transaction:(id)a4 error:(id *)a5;
+ (BOOL)associateZonesSamplesWithUUIDs:(id)a0 withWorkoutUUID:(id)a1 transaction:(id)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)enumerateZonesSamplesWithWorkoutPersistentID:(unsigned long long)a0 profile:(id)a1 transaction:(id)a2 error:(id *)a3 handler:(id /* block */)a4;

- (id)zonesUUIDWithTransaction:(id)a0 error:(id *)a1;
- (id)workoutUUIDWithTransaction:(id)a0 error:(id *)a1;

@end
