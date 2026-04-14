@class RTPredicateInspector;
@protocol RTPersistenceContextDelegate;

@interface RTPersistenceContext : NSManagedObjectContext

@property (weak) id<RTPersistenceContextDelegate> delegate;
@property (retain, nonatomic) RTPredicateInspector *predicateInspector;
@property (nonatomic) unsigned long long options;
@property (nonatomic) long long mirroringQualityOfService;

- (BOOL)save:(id *)a0;
- (BOOL)validateEntityName:(id)a0 inModel:(id)a1;
- (BOOL)shouldSubstituteVariables:(id)a0 inPredicate:(id)a1 entityName:(id)a2 model:(id)a3;
- (id)initWithConcurrencyType:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (id)executeRequest:(id)a0 error:(id *)a1;
- (BOOL)allowTombstones;
- (id)predicateWithDefaultSubstitutionVariables:(id)a0;
- (void).cxx_destruct;
- (void)_updateRequest:(id *)a0 includingContextOptions:(unsigned long long)a1;
- (id)substitutionVariableKeys;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (BOOL)_processError:(inout id *)a0;
- (unsigned long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (BOOL)_shouldExecute:(id *)a0;

@end
