@interface HealthDaemon.HDHRDemoEntity : HDHealthEntity

+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)defaultForeignKey;

- (id)init;
- (id)initWithPersistentID:(long long)a0;

@end
