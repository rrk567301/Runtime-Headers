@interface HealthDaemon.HDBQuantitySampleEntity : HDBQuantitySampleEntityBase

+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)foreignKeys;

- (id)init;
- (id)initWithPersistentID:(long long)a0;

@end
