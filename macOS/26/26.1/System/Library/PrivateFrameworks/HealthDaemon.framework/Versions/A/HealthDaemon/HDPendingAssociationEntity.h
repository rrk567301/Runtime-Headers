@interface HDPendingAssociationEntity : HDHealthEntity

+ (id)uniquedColumns;
+ (id)indices;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)propertyForSyncProvenance;
+ (id)propertyForSyncIdentity;

@end
