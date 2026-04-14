@interface HDDeviceEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)deviceEntitiesWithProperty:(id)a0 matchingValues:(id)a1 healthDatabase:(id)a2 error:(id *)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)deviceEntitiesWithDevice:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)deviceEntityWithDevice:(id)a0 syncIdentity:(long long)a1 healthDatabase:(id)a2 error:(id *)a3;
+ (id)deviceEntityWithUUID:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)propertyForSyncProvenance;
+ (id)uniquedColumns;

- (id)creationDateInHealthDatabase:(id)a0 error:(id *)a1;
- (id)deviceInHealthDatabase:(id)a0 error:(id *)a1;
- (id)deviceUUIDInDatabase:(id)a0 error:(id *)a1;
- (id)deviceUUIDInHealthDatabase:(id)a0 error:(id *)a1;

@end
