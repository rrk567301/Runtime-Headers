@class NSArray, ML3Predicate, ML3Container;

@interface ML3ContainerQuery : ML3Query {
    ML3Predicate *_containerPredicate;
}

@property (readonly, nonatomic) NSArray *limitedPersistentIDs;
@property (readonly, nonatomic) ML3Container *container;
@property (readonly, nonatomic) BOOL requiresSmartLimiting;

+ (BOOL)supportsSecureCoding;

- (BOOL)hasEntities;
- (id)valueForAggregateFunction:(id)a0 onEntitiesForProperty:(id)a1;
- (id)enumerationDatabaseResultForSQL:(id)a0 onConnection:(id)a1 withParameters:(id)a2;
- (unsigned long long)countOfEntities;
- (id)selectPersistentIDsSQLAndPropertiesForResultSet:(id)a0 ordered:(BOOL)a1;
- (void).cxx_destruct;
- (unsigned long long)countOfDistinctRowsForColumn:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)selectPersistentIDsSQLAndProperties:(id)a0 ordered:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEntityClass:(Class)a0 container:(id)a1 predicate:(id)a2 orderingTerms:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
