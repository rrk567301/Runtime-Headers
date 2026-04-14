@interface HDMedicalRecordEntity : HDSampleEntity

+ (id)foreignKeys;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (id)checkConstraints;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)orderingTermForSortDescriptor:(id)a0;
+ (id)latestCreationDateWithProfile:(id)a0 error:(id *)a1;
+ (id)latestModifiedDateWithProfile:(id)a0 error:(id *)a1;

- (BOOL)willDeleteWithTransaction:(id)a0 error:(id *)a1;

@end
