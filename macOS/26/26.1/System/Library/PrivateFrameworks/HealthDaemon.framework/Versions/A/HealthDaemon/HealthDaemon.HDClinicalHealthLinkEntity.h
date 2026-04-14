@interface HealthDaemon.HDClinicalHealthLinkEntity : HDHealthEntity

+ (id)uniquedColumns;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)propertyForSyncProvenance;
+ (id)propertyForSyncAnchor;
+ (id)joinClausesForProperty:(id)a0;
+ (id)propertyForSyncIdentity;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPersistentID:(long long)a0;

@end
