@interface HealthDaemon.HDHRIndicatorSnapshotEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)privateSubEntities;
+ (id)defaultForeignKey;

- (id)init;
- (id)initWithPersistentID:(long long)a0;

@end
