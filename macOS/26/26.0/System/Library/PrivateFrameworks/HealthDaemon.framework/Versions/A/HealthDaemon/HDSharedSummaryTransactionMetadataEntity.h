@interface HDSharedSummaryTransactionMetadataEntity : HDHealthEntity

+ (id)uniquedColumns;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)metadataForTransactionID:(long long)a0 databaseTransaction:(id)a1 error:(id *)a2;
+ (id)insertWithTransactionID:(long long)a0 metadata:(id)a1 databaseTransaction:(id)a2 error:(id *)a3;

@end
