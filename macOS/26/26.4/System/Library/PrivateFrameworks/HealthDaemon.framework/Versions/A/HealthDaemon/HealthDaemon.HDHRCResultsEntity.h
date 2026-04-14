@interface HealthDaemon.HDHRCResultsEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)privateSubEntities;

- (id)init;
- (id)initWithPersistentID:(long long)a0;

@end
