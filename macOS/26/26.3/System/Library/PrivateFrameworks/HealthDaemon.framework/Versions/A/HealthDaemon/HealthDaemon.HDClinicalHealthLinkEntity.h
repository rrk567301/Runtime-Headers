@interface HealthDaemon.HDClinicalHealthLinkEntity : HDHealthEntity

+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)propertyForSyncAnchor;
+ (id)uniquedColumns;
+ (id)joinClausesForProperty:(id)a0;
+ (id)propertyForSyncIdentity;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPersistentID:(long long)a0;

@end
