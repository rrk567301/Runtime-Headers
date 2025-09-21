@interface HDHealthEntity : HDSQLiteEntity <HDHealthEntityEncoding>

+ (long long)protectionClass;
+ (char)updateProperties:(id)a0 predicate:(id)a1 healthDatabase:(id)a2 error:(id *)a3 bindingHandler:(id /* block */)a4;
+ (id)propertyValueForAnyWithProperty:(id)a0 predicate:(id)a1 healthDatabase:(id)a2 error:(id *)a3;
+ (id)anyWithPredicate:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithBehavior:(id)a0 count:(unsigned long long *)a1;
+ (id)columnNamesForTimeOffset;
+ (id)countDistinctForProperty:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (long long)countOfObjectsWithPredicate:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)createTableSQLWithBehavior:(id)a0;
+ (id)createValidationError:(id)a0 rowId:(id)a1;
+ (id)defaultForeignKey;
+ (char)deleteEntitiesWithPredicate:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (char)enumerateEntitiesForSyncWithProperties:(id)a0 predicate:(id)a1 healthDatabase:(id)a2 error:(id *)a3 block:(id /* block */)a4;
+ (char)enumerateEntitiesForSyncWithProperties:(id)a0 predicate:(id)a1 session:(id)a2 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a3 limit:(unsigned long long)a4 lastSyncAnchor:(long long *)a5 healthDatabase:(id)a6 error:(id *)a7 block:(id /* block */)a8;
+ (char)enumerateEntitiesForSyncWithProperties:(id)a0 predicate:(id)a1 syncEntityClass:(Class)a2 session:(id)a3 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a4 orderingTerms:(id)a5 limit:(unsigned long long)a6 lastSyncAnchor:(long long *)a7 distinct:(char)a8 healthDatabase:(id)a9 error:(id *)a10 block:(id /* block */)a11;
+ (char)enumerateEntitiesForSyncWithProperties:(id)a0 predicate:(id)a1 syncEntityClass:(Class)a2 session:(id)a3 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a4 orderingTerms:(id)a5 limit:(unsigned long long)a6 lastSyncAnchor:(long long *)a7 healthDatabase:(id)a8 error:(id *)a9 block:(id /* block */)a10;
+ (char)enumerateProperties:(id)a0 withPredicate:(id)a1 healthDatabase:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (char)enumerateProperties:(id)a0 withPredicate:(id)a1 orderingTerms:(id)a2 groupBy:(id)a3 limit:(unsigned long long)a4 healthDatabase:(id)a5 error:(id *)a6 enumerationHandler:(id /* block */)a7;
+ (id)indicesWithBehavior:(id)a0;
+ (id)insertOrReplaceEntity:(char)a0 healthDatabase:(id)a1 properties:(id)a2 error:(id *)a3 bindingHandler:(id /* block */)a4;
+ (id)maxRowIDForPredicate:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)a0 predicate:(id)a1 session:(id)a2 healthDatabase:(id)a3 error:(id *)a4;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)a0 predicate:(id)a1 syncEntityClass:(Class)a2 session:(id)a3 orderingTerms:(id)a4 limit:(unsigned long long)a5 healthDatabase:(id)a6 error:(id *)a7;
+ (char)performPostFirstJournalMergeCleanupWithTransaction:(id)a0 profile:(id)a1 error:(id *)a2;
+ (char)performReadTransactionWithHealthDatabase:(id)a0 context:(id)a1 error:(id *)a2 block:(id /* block */)a3;
+ (char)performReadTransactionWithHealthDatabase:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (char)performWriteTransactionWithHealthDatabase:(id)a0 context:(id)a1 error:(id *)a2 block:(id /* block */)a3;
+ (char)performWriteTransactionWithHealthDatabase:(id)a0 context:(id)a1 error:(id *)a2 block:(id /* block */)a3 inaccessibilityHandler:(id /* block */)a4;
+ (char)performWriteTransactionWithHealthDatabase:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (char)performWriteTransactionWithHealthDatabase:(id)a0 error:(id *)a1 block:(id /* block */)a2 inaccessibilityHandler:(id /* block */)a3;
+ (id)predicateForSyncWithPredicate:(id)a0 syncEntityClass:(Class)a1 session:(id)a2 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a3;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (long long)sizeOfDatabaseTableInHealthDatabase:(id)a0 error:(id *)a1;
+ (id)transactionContextForWriting:(char)a0 baseContext:(id)a1;
+ (id)triggersWithBehavior:(id)a0;
+ (id)updateSQLForTimeOffsetWithBindingCount:(unsigned long long *)a0;
+ (char)validateEntityWithProfile:(id)a0 error:(id *)a1 validationErrorHandler:(id /* block */)a2;

- (id)dateForProperty:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)foreignKeyEntity:(Class)a0 forProperty:(id)a1 transaction:(id)a2 error:(id *)a3;
- (char)getValuesForProperties:(id)a0 healthDatabase:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
- (id)numberForProperty:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)setDate:(id)a0 forProperty:(id)a1 transaction:(id)a2 error:(id *)a3;
- (char)setForeignKeyEntity:(id)a0 forProperty:(id)a1 transaction:(id)a2 error:(id *)a3;
- (char)setNumber:(id)a0 forProperty:(id)a1 transaction:(id)a2 error:(id *)a3;
- (char)setString:(id)a0 forProperty:(id)a1 transaction:(id)a2 error:(id *)a3;
- (id)stringForProperty:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
- (id)stringForProperty:(id)a0 transaction:(id)a1 error:(id *)a2;
- (char)updateProperties:(id)a0 healthDatabase:(id)a1 error:(id *)a2 bindingHandler:(id /* block */)a3;
- (id)valueForProperty:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
- (char)willDeleteWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
