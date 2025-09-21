@interface HDClinicalGatewayEntity : HDHealthEntity

+ (id)uniquedColumns;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)propertyForSyncIdentity;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncProvenance;

@end
