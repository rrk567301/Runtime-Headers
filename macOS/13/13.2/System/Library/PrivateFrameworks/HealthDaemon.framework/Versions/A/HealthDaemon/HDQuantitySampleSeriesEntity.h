@class NSString;

@interface HDQuantitySampleSeriesEntity : HDQuantitySampleEntity <HDSeriesEntity>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)foreignKeys;
+ (id)indices;
+ (id)databaseTable;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)joinClausesForProperty:(id)a0;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (BOOL)isConcreteEntity;
+ (BOOL)validateEntityWithProfile:(id)a0 error:(id *)a1 validationErrorHandler:(id /* block */)a2;
+ (id)orderingTermForSortDescriptor:(id)a0;
+ (id)privateSubEntities;
+ (Class)entityClassForEnumeration;
+ (id /* block */)objectInsertionFilterForProfile:(id)a0;
+ (BOOL)performPostFirstJournalMergeCleanupWithTransaction:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)replaceExistingObject:(id)a0 existingObjectID:(id)a1 replacementObject:(id)a2 replacementObjectID:(id)a3 profile:(id)a4 transaction:(id)a5 error:(id *)a6;
+ (BOOL)supportsObjectMerging;
+ (id)mergeDataObject:(id)a0 provenance:(id)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4 insertHandler:(id /* block */)a5;
+ (id)additionalPredicateForEnumeration;
+ (BOOL)insertValues:(id)a0 series:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)primitiveInsertValues:(id)a0 seriesVersion:(long long)a1 HFDKey:(long long)a2 database:(id)a3 error:(id *)a4;
+ (id)freezeSeriesWithIdentifier:(id)a0 metadata:(id)a1 endDate:(id)a2 profile:(id)a3 error:(id *)a4;
+ (id)quantitySampleSeriesEntitiesForAutoFreezeWithTransaction:(id)a0 error:(id *)a1;
+ (id)quantitySampleSeriesEntitiesForAutoFreezeSQL;
+ (BOOL)deleteSeriesWithID:(id)a0 deleteSeriesData:(BOOL)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)replaceObjectID:(id)a0 replacementObjectID:(id)a1 deleteOriginalSeriesData:(BOOL)a2 profile:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (BOOL)enumerateDataWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (BOOL)enumerateDataWithIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (id)hasSeriesDataForHFDKey:(long long)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)enumerateDataWithTransaction:(id)a0 HFDKey:(long long)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (BOOL)enumerateRawDataWithTransaction:(id)a0 HFDKey:(long long)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (BOOL)deleteSeriesDataWithKey:(long long)a0 database:(id)a1 error:(id *)a2;
+ (BOOL)primitiveRemoveDatums:(id)a0 HFDKey:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (long long)_hasSeriesDataWithDatabase:(id)a0 hfdKey:(unsigned long long)a1 error:(id *)a2;
+ (id)removeValues:(id)a0 fromQuantitySeriesSample:(id)a1 profile:(id)a2 error:(id *)a3;
+ (void)unitTesting_updateInsertionEra;
+ (long long)unitTesting_insertionEra;
+ (BOOL)unitTesting_insertValues:(id)a0 quantitySample:(id)a1 seriesVersion:(long long)a2 profile:(id)a3 error:(id *)a4;

- (BOOL)deleteFromDatabase:(id)a0 error:(id *)a1;
- (void)willDeleteFromDatabase:(id)a0;
- (id)HFDKeyWithDatabase:(id)a0 error:(id *)a1;
- (BOOL)insertValues:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)freezeWithEndDate:(id)a0 transaction:(id)a1 profile:(id)a2 error:(id *)a3;
- (id)hasSeriesDataWithTransaction:(id)a0 error:(id *)a1;
- (id)countForSeriesWithTransaction:(id)a0 error:(id *)a1;
- (BOOL)startTimeEndTimeCountForSeriesWithTransaction:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (BOOL)enumerateDataWithTransaction:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (BOOL)unitTesting_setInsertionEra:(long long)a0 profile:(id)a1 error:(id *)a2;

@end
