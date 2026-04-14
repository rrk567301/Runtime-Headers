@interface HDSharedSummaryAuthorizationIdentifierEntity : HDHealthEntity

+ (id)uniquedColumns;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)authorizationIdentifiersForSummaryID:(long long)a0 databaseTransaction:(id)a1 error:(id *)a2;
+ (id)insertWithSummaryID:(long long)a0 authorizationIdentifiers:(id)a1 databaseTransaction:(id)a2 error:(id *)a3;

@end
