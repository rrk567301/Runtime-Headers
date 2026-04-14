@interface HDSignedClinicalDataIssuerEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)allProperties;
+ (id)propertyForSyncProvenance;
+ (id)propertyForSyncIdentity;

@end
