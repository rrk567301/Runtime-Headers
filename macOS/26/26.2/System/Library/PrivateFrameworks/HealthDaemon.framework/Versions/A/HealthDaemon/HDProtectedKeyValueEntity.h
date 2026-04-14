@interface HDProtectedKeyValueEntity : HDKeyValueEntity

+ (long long)protectionClass;
+ (long long)_deviceLocalCategory;
+ (id)userCharacteristicForType:(id)a0 profile:(id)a1 entity:(id *)a2 error:(id *)a3;
+ (id)modificationDateForCharacteristicWithType:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)keyForUserCharacteristicType:(id)a0;
+ (const char *)_insertStatementKey;
+ (id)databaseTable;
+ (id)userCharacteristicTypeForKey:(id)a0;
+ (BOOL)setUserCharacteristic:(id)a0 forType:(id)a1 profile:(id)a2 error:(id *)a3;

@end
