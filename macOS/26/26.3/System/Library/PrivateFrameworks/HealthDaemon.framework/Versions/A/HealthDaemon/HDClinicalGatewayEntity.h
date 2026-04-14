@interface HDClinicalGatewayEntity : HDHealthEntity

+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)propertyForSyncAnchor;
+ (id)uniquedColumns;
+ (id)propertyForSyncIdentity;

@end
