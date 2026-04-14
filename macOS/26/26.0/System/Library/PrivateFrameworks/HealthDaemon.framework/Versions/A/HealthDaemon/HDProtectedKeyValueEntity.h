@interface HDProtectedKeyValueEntity : HDKeyValueEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (BOOL)setUserCharacteristic:(id)a0 forType:(id)a1 profile:(id)a2 error:(id *)a3;
+ (const char *)_insertStatementKey;
+ (long long)_deviceLocalCategory;
+ (id)modificationDateForCharacteristicWithType:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)keyForUserCharacteristicType:(id)a0;
+ (id)userCharacteristicForType:(id)a0 profile:(id)a1 entity:(id *)a2 error:(id *)a3;
+ (id)userCharacteristicTypeForKey:(id)a0;

@end
