@interface HealthDaemon.HDHRICCollectionEntity : HDHealthEntity

+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)privateSubEntities;

- (id)init;
- (id)initWithPersistentID:(long long)a0;

@end
