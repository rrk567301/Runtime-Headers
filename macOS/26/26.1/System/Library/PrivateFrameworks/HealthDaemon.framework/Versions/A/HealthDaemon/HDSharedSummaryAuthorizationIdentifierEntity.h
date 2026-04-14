@interface HDSharedSummaryAuthorizationIdentifierEntity : HDHealthEntity

+ (id)uniquedColumns;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)foreignKeys;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)insertWithSummaryID:(long long)a0 authorizationIdentifiers:(id)a1 databaseTransaction:(id)a2 error:(id *)a3;
+ (id)authorizationIdentifiersForSummaryID:(long long)a0 databaseTransaction:(id)a1 error:(id *)a2;

@end
