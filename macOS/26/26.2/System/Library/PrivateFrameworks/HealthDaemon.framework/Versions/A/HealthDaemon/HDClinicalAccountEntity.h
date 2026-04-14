@interface HDClinicalAccountEntity : HDHealthEntity

+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncAnchor;
+ (id)checkConstraints;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)propertyForSyncProvenance;
+ (id)joinClausesForProperty:(id)a0;

@end
