@interface HealthDaemon.HDBQuantitySampleEntity : HDBQuantitySampleEntityBase

+ (id)databaseTable;
+ (id)foreignKeys;
+ (long long)protectionClass;

- (id)init;
- (id)initWithPersistentID:(long long)a0;

@end
