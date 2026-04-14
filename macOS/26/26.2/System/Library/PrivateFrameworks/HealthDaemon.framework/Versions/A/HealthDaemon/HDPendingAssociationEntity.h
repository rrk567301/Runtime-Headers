@interface HDPendingAssociationEntity : HDHealthEntity

+ (id)indices;
+ (long long)protectionClass;
+ (id)propertyForSyncIdentity;
+ (id)uniquedColumns;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)propertyForSyncProvenance;

@end
