@interface HealthDaemon.HDOHSEntity : HDOHSEntityBase

+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)foreignKeys;

- (id)init;
- (id)initWithPersistentID:(long long)a0;

@end
