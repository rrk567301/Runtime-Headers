@interface HealthDaemon.HDHRCResultsEntity : HDHealthEntity

+ (id)privateSubEntities;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)foreignKeys;

- (id)init;
- (id)initWithPersistentID:(long long)a0;

@end
