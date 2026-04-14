@interface HDPendingAssociationEntity : HDHealthEntity

+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)uniquedColumns;
+ (id)propertyForSyncIdentity;
+ (id)indices;

@end
