@interface HealthDaemon.HDOHSEntity : HDOHSEntityBase

+ (id)databaseTable;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (BOOL)isConcreteEntity;
+ (BOOL)isBackedByTable;

- (id)init;
- (id)initWithPersistentID:(long long)a0;

@end
