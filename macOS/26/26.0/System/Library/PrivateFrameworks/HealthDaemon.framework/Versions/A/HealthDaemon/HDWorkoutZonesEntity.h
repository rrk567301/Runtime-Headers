@interface HDWorkoutZonesEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)indices;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (Class)ownerEntityClass;
+ (BOOL)enumerateZonesWithOwnerID:(unsigned long long)a0 database:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (BOOL)enumerateZonesWithOwnerID:(unsigned long long)a0 transaction:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (BOOL)insertZones:(id)a0 ownerID:(unsigned long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)insertZones:(id)a0 workoutUUID:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)zoneEntityWithZoneUUID:(id)a0 transaction:(id)a1 error:(id *)a2;

- (BOOL)setTimeInZone:(double)a0 transaction:(id)a1 error:(id *)a2;

@end
