@interface HealthDaemon.HDHRIndicatorSnapshotEntity : HDHealthEntity

+ (id)privateSubEntities;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)defaultForeignKey;

- (id)init;
- (id)initWithPersistentID:(long long)a0;

@end
