@interface HDDeviceEntity : HDHealthEntity

+ (id)uniquedColumns;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)propertyForSyncIdentity;
+ (id)_codableDeviceWithRow:(struct HDSQLiteRow { } *)a0;
+ (id)deviceEntitiesWithDevice:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)deviceEntityWithDevice:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)deviceEntityWithUUID:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)propertyForSyncProvenance;
+ (id)_insertDeviceWithUUID:(id)a0 creationDate:(double)a1 name:(id)a2 bluetoothIdentifier:(id)a3 manufacturer:(id)a4 model:(id)a5 hardwareVersion:(id)a6 firmwareVersion:(id)a7 softwareVersion:(id)a8 localIdentifier:(id)a9 UDIDeviceIdentifier:(id)a10 syncProvenance:(long long)a11 syncIdentity:(long long)a12 database:(id)a13 error:(id *)a14;
+ (id)deviceEntityWithDevice:(id)a0 syncIdentity:(long long)a1 healthDatabase:(id)a2 error:(id *)a3;
+ (id)deviceEntitiesWithProperty:(id)a0 matchingValues:(id)a1 healthDatabase:(id)a2 error:(id *)a3;
+ (BOOL)insertCodableDevices:(id)a0 syncProvenance:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)_propertiesForDevice;

- (id)creationDateInHealthDatabase:(id)a0 error:(id *)a1;
- (id)deviceInHealthDatabase:(id)a0 error:(id *)a1;
- (id)deviceUUIDInDatabase:(id)a0 error:(id *)a1;
- (id)deviceUUIDInHealthDatabase:(id)a0 error:(id *)a1;

@end
