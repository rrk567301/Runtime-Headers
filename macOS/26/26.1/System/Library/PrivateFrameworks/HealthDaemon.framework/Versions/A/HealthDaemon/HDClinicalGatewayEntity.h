@interface HDClinicalGatewayEntity : HDHealthEntity

+ (id)uniquedColumns;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)propertyForSyncProvenance;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncIdentity;
+ (id)disambiguatedSQLForProperty:(id)a0;

@end
