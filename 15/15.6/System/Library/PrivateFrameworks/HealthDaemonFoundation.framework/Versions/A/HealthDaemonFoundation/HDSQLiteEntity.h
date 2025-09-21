@class NSString;

@interface HDSQLiteEntity : HDSQLiteSchemaEntity <HDSQLiteEntity, NSCopying>

@property (readonly, nonatomic) long long persistentID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)primaryKeyColumns;
+ (char)enumerateEntitiesInDatabase:(id)a0 predicate:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)insertOrReplaceEntity:(char)a0 database:(id)a1 properties:(id)a2 error:(id *)a3 bindingHandler:(id /* block */)a4;
+ (id)additionalPredicateForEnumeration;
+ (id)aggregateSingleValueForProperty:(id)a0 function:(id)a1 queryDescriptor:(id)a2 database:(id)a3 error:(id *)a4;
+ (id)anyInDatabase:(id)a0 predicate:(id)a1 error:(id *)a2;
+ (id)countDistinctForProperty:(id)a0 predicate:(id)a1 database:(id)a2 error:(id *)a3;
+ (id)countValueForProperty:(id)a0 predicate:(id)a1 database:(id)a2 error:(id *)a3;
+ (char)deleteEntitiesInDatabase:(id)a0 predicate:(id)a1 error:(id *)a2;
+ (id)distinctProperty:(id)a0 predicate:(id)a1 database:(id)a2 error:(id *)a3;
+ (id)entityWithPersistentID:(id)a0;
+ (char)enumerateQueryResultsFromColumns:(id)a0 properties:(id)a1 predicate:(id)a2 groupBy:(id)a3 orderingTerms:(id)a4 limit:(long long)a5 database:(id)a6 error:(id *)a7 enumerationHandler:(id /* block */)a8;
+ (id)firstInDatabase:(id)a0 predicate:(id)a1 orderingTerms:(id)a2 error:(id *)a3;
+ (char)hasROWID;
+ (id)maxPersistentIDWithPredicate:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)maxValueForProperty:(id)a0 predicate:(id)a1 database:(id)a2 error:(id *)a3;
+ (id)propertyValueForAnyInDatabase:(id)a0 property:(id)a1 predicate:(id)a2 error:(id *)a3;
+ (id)queryWithDatabase:(id)a0 predicate:(id)a1;
+ (id)queryWithDatabase:(id)a0 predicate:(id)a1 limit:(unsigned long long)a2 orderingTerms:(id)a3 groupBy:(id)a4;
+ (long long)sizeOfEntityTableInDatabase:(id)a0;
+ (char)updateProperties:(id)a0 predicate:(id)a1 database:(id)a2 error:(id *)a3 bindingHandler:(id /* block */)a4;
+ (id)aggregateSingleValueForProperty:(id)a0 function:(id)a1 predicate:(id)a2 database:(id)a3 error:(id *)a4;
+ (id)aggregateValuesForProperty:(id)a0 functions:(id)a1 predicate:(id)a2 groupBy:(id)a3 database:(id)a4 error:(id *)a5;
+ (id)aggregateValuesForProperty:(id)a0 functions:(id)a1 queryDescriptor:(id)a2 database:(id)a3 error:(id *)a4;
+ (id)sumValueForProperty:(id)a0 predicate:(id)a1 database:(id)a2 error:(id *)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)initWithPersistentID:(long long)a0;
- (id)UUIDForProperty:(id)a0 database:(id)a1;
- (char)booleanForProperty:(id)a0 database:(id)a1;
- (id)dateForProperty:(id)a0 database:(id)a1;
- (char)deleteFromDatabase:(id)a0 error:(id *)a1;
- (char)existsInDatabase:(id)a0;
- (char)getValuesForProperties:(id)a0 database:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
- (char)getValuesForProperties:(id)a0 database:(id)a1 handler:(id /* block */)a2;
- (id)numberForProperty:(id)a0 database:(id)a1;
- (id)stringForProperty:(id)a0 database:(id)a1;
- (char)updateProperties:(id)a0 database:(id)a1 error:(id *)a2 bindingHandler:(id /* block */)a3;
- (id)valueForProperty:(id)a0 database:(id)a1;
- (void)willDeleteFromDatabase:(id)a0;

@end
