@interface HealthDaemon.HDClinicalHealthLinkEntity : HDHealthEntity

+ (id)uniquedColumns;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)propertyForSyncIdentity;
+ (id)joinClausesForProperty:(id)a0;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncProvenance;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPersistentID:(long long)a0;

@end
