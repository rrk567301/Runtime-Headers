@class NSString;

@interface HDLocationSeriesSampleEntity : HDSeriesSampleEntity <HDSeriesEntity>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTableSQL;
+ (char)isBackedByTable;
+ (char)_rawEnumerateLocationDataInDatabase:(id)a0 HFDKey:(id)a1 startDate:(id)a2 endDate:(id)a3 error:(id *)a4 handler:(id /* block */)a5;
+ (char)addCodableObject:(id)a0 toCollection:(id)a1;
+ (id)codableObjectsFromObjectCollection:(id)a0;
+ (char)copyLocationDataFromSeriesIdentifier:(id)a0 toSeriesIdentifier:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (char)enumerateLocationDataInDatabase:(id)a0 HFDKey:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (char)enumerateLocationDataWithTransaction:(id)a0 HFDKey:(id)a1 startDate:(id)a2 error:(id *)a3 handler:(id /* block */)a4;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (char)insertLocationData:(id)a0 seriesIdentifier:(id)a1 profile:(id)a2 error:(id *)a3;
+ (char)isConcreteEntity;
+ (id)mergeDataObject:(id)a0 provenance:(id)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4 insertHandler:(id /* block */)a5;
+ (char)participatesInInsertion;
+ (char)performPostFirstJournalMergeCleanupWithTransaction:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)privateSubEntities;
+ (char)supportsObjectMerging;
+ (char)validateEntityWithProfile:(id)a0 error:(id *)a1 validationErrorHandler:(id /* block */)a2;

- (char)_insertLocationData:(id)a0 database:(id)a1 error:(id *)a2;
- (char)deleteFromDatabase:(id)a0 error:(id *)a1;
- (char)enumerateLocationDataInDatabase:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (char)enumerateLocationDataInTransaction:(id)a0 startDate:(id)a1 endDate:(id)a2 error:(id *)a3 handler:(id /* block */)a4;
- (id)freezeWithTransaction:(id)a0 profile:(id)a1 error:(id *)a2;
- (void)willDeleteFromDatabase:(id)a0;

@end
