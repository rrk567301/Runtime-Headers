@interface HealthDaemon.HDHRDemoEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)defaultForeignKey;

- (id)init;
- (id)initWithPersistentID:(long long)a0;

@end
