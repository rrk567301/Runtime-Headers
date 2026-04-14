@interface HDProtectedKeyValueEntity : HDKeyValueEntity

+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)userCharacteristicForType:(id)a0 profile:(id)a1 entity:(id *)a2 error:(id *)a3;
+ (id)keyForUserCharacteristicType:(id)a0;
+ (BOOL)setUserCharacteristic:(id)a0 forType:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)modificationDateForCharacteristicWithType:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)userCharacteristicTypeForKey:(id)a0;
+ (const char *)_insertStatementKey;
+ (long long)_deviceLocalCategory;

@end
