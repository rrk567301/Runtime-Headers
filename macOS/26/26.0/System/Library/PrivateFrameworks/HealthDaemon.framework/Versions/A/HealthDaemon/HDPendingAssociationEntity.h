@interface HDPendingAssociationEntity : HDHealthEntity

+ (id)uniquedColumns;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)indices;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;

@end
