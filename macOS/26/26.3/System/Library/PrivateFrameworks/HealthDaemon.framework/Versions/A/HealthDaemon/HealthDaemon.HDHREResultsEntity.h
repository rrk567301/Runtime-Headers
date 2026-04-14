@interface HealthDaemon.HDHREResultsEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)privateSubEntities;

- (id)init;
- (id)initWithPersistentID:(long long)a0;

@end
