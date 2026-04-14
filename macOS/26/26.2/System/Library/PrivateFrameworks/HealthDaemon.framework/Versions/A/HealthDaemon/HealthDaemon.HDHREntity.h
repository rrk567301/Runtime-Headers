@interface HealthDaemon.HDHREntity : HDHREntityBase

+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)privateSubEntities;

- (id)init;
- (id)initWithPersistentID:(long long)a0;

@end
