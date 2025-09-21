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
+ (id)quantitySampleSeriesEntitiesForAutoFreezeWithTransaction:(id)a0 error:(id *)a1;
+ (long long)_hasSeriesDataWithDatabase:(id)a0 hfdKey:(unsigned long long)a1 error:(id *)a2;
+ (id)additionalPredicateForEnumeration;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (char)deleteSeriesDataWithKey:(long long)a0 database:(id)a1 error:(id *)a2;
+ (char)deleteSeriesWithID:(id)a0 deleteSeriesData:(char)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (Class)entityClassForEnumeration;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (char)enumerateDataWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (char)enumerateDataWithIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (char)enumerateDataWithTransaction:(id)a0 HFDKey:(long long)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (char)enumerateRawDataWithTransaction:(id)a0 HFDKey:(long long)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (id)freezeSeriesWithIdentifier:(id)a0 metadata:(id)a1 endDate:(id)a2 profile:(id)a3 error:(id *)a4;
+ (id)hasSeriesDataForHFDKey:(long long)a0 transaction:(id)a1 error:(id *)a2;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (char)insertValues:(id)a0 series:(id)a1 profile:(id)a2 error:(id *)a3;
+ (char)isConcreteEntity;
+ (id)mergeDataObject:(id)a0 provenance:(id)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4 insertHandler:(id /* block */)a5;
+ (id /* block */)objectInsertionFilterForProfile:(id)a0;
+ (id)orderingTermForSortDescriptor:(id)a0;
+ (char)performPostFirstJournalMergeCleanupWithTransaction:(id)a0 profile:(id)a1 error:(id *)a2;
+ (char)primitiveInsertValues:(id)a0 seriesVersion:(long long)a1 HFDKey:(long long)a2 database:(id)a3 error:(id *)a4;
+ (char)primitiveRemoveDatums:(id)a0 HFDKey:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)privateSubEntities;
+ (id)quantitySampleSeriesEntitiesForAutoFreezeSQL;
+ (id)removeValues:(id)a0 fromQuantitySeriesSample:(id)a1 profile:(id)a2 error:(id *)a3;
+ (char)replaceExistingObject:(id)a0 existingObjectID:(id)a1 replacementObject:(id)a2 replacementObjectID:(id)a3 profile:(id)a4 transaction:(id)a5 error:(id *)a6;
+ (char)replaceObjectID:(id)a0 replacementObjectID:(id)a1 deleteOriginalSeriesData:(char)a2 profile:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (char)supportsObjectMerging;
+ (char)unitTesting_insertValues:(id)a0 quantitySample:(id)a1 seriesVersion:(long long)a2 profile:(id)a3 error:(id *)a4;
+ (long long)unitTesting_insertionEra;
+ (void)unitTesting_updateInsertionEra;
+ (char)validateEntityWithProfile:(id)a0 error:(id *)a1 validationErrorHandler:(id /* block */)a2;

- (char)insertValues:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)HFDKeyWithDatabase:(id)a0 error:(id *)a1;
- (id)countForSeriesWithTransaction:(id)a0 error:(id *)a1;
- (char)deleteFromDatabase:(id)a0 error:(id *)a1;
- (char)enumerateDataWithTransaction:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (id)freezeWithEndDate:(id)a0 transaction:(id)a1 profile:(id)a2 error:(id *)a3;
- (id)hasSeriesDataWithTransaction:(id)a0 error:(id *)a1;
- (char)startTimeEndTimeCountForSeriesWithTransaction:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (char)unitTesting_setInsertionEra:(long long)a0 profile:(id)a1 error:(id *)a2;
- (void)willDeleteFromDatabase:(id)a0;

@end
