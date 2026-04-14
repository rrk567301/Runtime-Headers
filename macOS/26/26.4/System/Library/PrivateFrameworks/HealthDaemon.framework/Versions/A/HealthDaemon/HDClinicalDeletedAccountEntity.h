@interface HDClinicalDeletedAccountEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)uniquedColumns;
+ (long long)protectionClass;
+ (id)propertyForSyncProvenance;
+ (id)propertyForSyncIdentity;

@end
