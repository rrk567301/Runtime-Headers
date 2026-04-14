@interface HealthDaemon.HDHRConstellationSnapshotEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)defaultForeignKey;
+ (id)privateSubEntities;

- (id)init;
- (id)initWithPersistentID:(long long)a0;

@end
