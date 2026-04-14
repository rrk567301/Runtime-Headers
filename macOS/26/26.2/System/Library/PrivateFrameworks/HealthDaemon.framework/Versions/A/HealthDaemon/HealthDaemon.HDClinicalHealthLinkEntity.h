@interface HealthDaemon.HDClinicalHealthLinkEntity : HDHealthEntity

+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncAnchor;
+ (id)uniquedColumns;
+ (id)databaseTable;
+ (id)propertyForSyncProvenance;
+ (id)joinClausesForProperty:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPersistentID:(long long)a0;

@end
