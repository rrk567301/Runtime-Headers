@interface HealthDaemon.HDClinicalHealthLinkEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)uniquedColumns;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncProvenance;
+ (id)propertyForSyncIdentity;
+ (id)joinClausesForProperty:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPersistentID:(long long)a0;

@end
