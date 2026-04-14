@interface HealthDaemon.HDHREntity : HDHREntityBase

+ (id)databaseTable;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (BOOL)isConcreteEntity;
+ (id)privateSubEntities;
+ (BOOL)isBackedByTable;

- (id)init;
- (id)initWithPersistentID:(long long)a0;

@end
