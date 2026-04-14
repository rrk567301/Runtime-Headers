@interface HDClinicalGatewayEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncAnchor;
+ (id)uniquedColumns;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)propertyForSyncProvenance;

@end
