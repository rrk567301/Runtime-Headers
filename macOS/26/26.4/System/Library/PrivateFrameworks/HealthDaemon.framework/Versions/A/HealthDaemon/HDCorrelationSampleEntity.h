@interface HDCorrelationSampleEntity : HDSampleEntity

+ (id)createTableSQL;
+ (BOOL)isConcreteEntity;
+ (BOOL)requiresSampleTypePredicate;
+ (id)deleteStatementsForRelatedEntitiesWithTransaction:(id)a0;
+ (BOOL)isBackedByTable;
+ (BOOL)addCodableObject:(id)a0 toCollection:(id)a1;
+ (id)codableObjectsFromObjectCollection:(id)a0;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (BOOL)acceptsObject:(id)a0;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;

- (BOOL)deleteFromDatabase:(id)a0 error:(id *)a1;

@end
