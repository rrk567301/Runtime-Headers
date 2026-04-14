@class NSString;

@interface HDCachedQueryMetadataEntity : HDHealthEntity <HDHealthEntitySchema>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uniquedColumns;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)lastUpdatedDateForQueryIdentifier:(id)a0 sourceEntity:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)pruneWithProfile:(id)a0 nowDate:(id)a1 limit:(unsigned long long)a2 error:(id *)a3;
+ (id)creationDateForQueryIdentifier:(id)a0 sourceEntity:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)cachedQueryMetadataForQueryIdentifier:(id)a0 sourceEntity:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)updateCachedQueryMetadata:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)generationNumberForQueryIdentifier:(id)a0 sourceEntity:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)insertCachedQueryMetadata:(id)a0 profile:(id)a1 error:(id *)a2;


@end
