@class NSString, ML3Predicate, NSArray, ML3AggregateQuery, ML3MusicLibrary;

@interface ML3Query : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *selectPersistentIDsSQL;
@property (readonly, nonatomic) NSString *selectCountSQL;
@property (readonly, nonatomic) NSString *persistentIDProperty;
@property (readonly, nonatomic) ML3MusicLibrary *library;
@property (readonly, nonatomic) Class entityClass;
@property (readonly, nonatomic) ML3Predicate *predicate;
@property (readonly, nonatomic) ML3Predicate *predicateIncludingSystemwidePredicates;
@property (readonly, nonatomic) NSArray *orderingTerms;
@property (readonly, nonatomic) NSString *propertyToCount;
@property (readonly, nonatomic) char hasEntities;
@property (readonly, nonatomic) long long anyEntityPersistentID;
@property (readonly, nonatomic) unsigned long long countOfEntities;
@property (readonly, nonatomic) ML3AggregateQuery *nonDirectAggregateQuery;
@property (readonly, nonatomic) NSString *sectionProperty;
@property (readonly, nonatomic) char usingSections;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) char ignoreSystemFilterPredicates;
@property (nonatomic) char ignoreRestrictionsPredicates;
@property (readonly, nonatomic) long long options;
@property (readonly, nonatomic) char filtersOnDynamicProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)sections;
- (void)enumeratePersistentIDsAndProperties:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)a0;
- (void)enumerateSectionsUsingBlock:(id /* block */)a0;
- (id)selectUnorderedPersistentIDsSQL;
- (unsigned long long)countOfDistinctRowsForColumn:(id)a0;
- (id)countStatementParameters;
- (char)deleteAllEntitiesFromLibrary;
- (char)deleteAllEntitiesFromLibraryWithDeletionType:(int)a0;
- (char)deleteAllEntitiesFromLibraryWithDeletionType:(int)a0 usingConnection:(id)a1;
- (void)enumeratePersistentIDsAndProperties:(id)a0 ordered:(char)a1 cancelBlock:(id /* block */)a2 usingBlock:(id /* block */)a3;
- (void)enumeratePersistentIDsAndProperties:(id)a0 ordered:(char)a1 sectionProperty:(id)a2 cancelBlock:(id /* block */)a3 usingBlock:(id /* block */)a4;
- (void)enumeratePersistentIDsAndProperties:(id)a0 ordered:(char)a1 usingBlock:(id /* block */)a2;
- (void)enumeratePersistentIDsAndSectionsWithProperty:(id)a0 usingBlock:(id /* block */)a1;
- (id)enumerationDatabaseResultForSQL:(id)a0 onConnection:(id)a1 withParameters:(id)a2;
- (char)hasRowForColumn:(id)a0;
- (id)initWithLibrary:(id)a0 entityClass:(Class)a1 predicate:(id)a2 orderingTerms:(id)a3 usingSections:(char)a4 nonDirectAggregateQuery:(id)a5 propertyToCount:(id)a6 options:(long long)a7;
- (void)loadNamesFromLibrary:(id)a0 onConnection:(id)a1 forPredicate:(id)a2 loadAllNames:(char)a3 cancelHandler:(id /* block */)a4;
- (id)lowerBoundParametersForOrderingTerms:(id)a0 lowerBoundPersistentID:(long long)a1;
- (id)nameOrderPropertyForProperty:(id)a0;
- (id)persistentIDParameters;
- (id)reverseQuery;
- (id)sectionsParameters;
- (char)sectionsPersistentIDColumnIsDistinct;
- (id)selectPersistentIDsSQLAndProperties:(id)a0 ordered:(char)a1;
- (id)selectPersistentIDsSQLAndProperties:(id)a0 ordered:(char)a1 distinct:(char)a2;
- (id)selectSQLWithColumns:(id)a0 groupBy:(id)a1;
- (id)selectSQLWithColumns:(id)a0 groupBy:(id)a1 distinct:(char)a2;
- (id)selectSQLWithColumns:(id)a0 groupBy:(id)a1 orderingTerms:(id)a2;
- (id)selectSQLWithColumns:(id)a0 groupBy:(id)a1 orderingTerms:(id)a2 directionality:(id)a3 usingLowerBound:(char)a4;
- (id)selectSQLWithColumns:(id)a0 groupBy:(id)a1 orderingTerms:(id)a2 directionality:(id)a3 usingLowerBound:(char)a4 distinct:(char)a5 limit:(unsigned long long)a6;
- (id)selectSQLWithColumns:(id)a0 groupBy:(id)a1 orderingTerms:(id)a2 limit:(unsigned long long)a3;
- (id)selectSQLWithColumns:(id)a0 orderingTerms:(id)a1;
- (id)selectSQLWithColumns:(id)a0 orderingTerms:(id)a1 directionality:(id)a2;
- (id)selectSQLWithColumns:(id)a0 orderingTerms:(id)a1 distinct:(char)a2;
- (id)selectSQLWithColumns:(id)a0 orderingTerms:(id)a1 limit:(unsigned long long)a2;
- (id)selectSectionsSQL;
- (id)valueForAggregateFunction:(id)a0 onEntitiesForProperty:(id)a1;

@end
