@interface HDStateOfMindLabelEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (BOOL)insertLabelsForObjectID:(long long)a0 labels:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)labelsForObjectID:(long long)a0 transaction:(id)a1 error:(id *)a2;
+ (id)predicateForLabelsForObjectID:(long long)a0;

@end
