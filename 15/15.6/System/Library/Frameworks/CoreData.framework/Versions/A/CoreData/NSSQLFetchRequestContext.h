@class NSMutableSet, NSString, NSMutableArray, NSSQLEntity, NSDictionary, NSSQLiteStatement, NSFaultHandler, NSFetchRequest, NSSQLModel, _PFFetchPlanHeader;

@interface NSSQLFetchRequestContext : NSSQLStoreRequestContext {
    NSString *_externalDataReferencesDirectory;
    NSString *_externalDataLinksDirectory;
    NSString *_fileBackedFuturesDirectory;
    NSSQLModel *_sqlModel;
    NSSQLEntity *_sqlEntity;
    NSFaultHandler *_faultHandler;
    _PFFetchPlanHeader *_fetchPlan;
    NSSQLiteStatement *_statement;
    NSMutableSet *_objectIDsToRegister;
    NSMutableSet *_objectsToAwaken;
    NSMutableArray *_resultFaultsThatWereFired;
    NSSQLFetchRequestContext *_parentContext;
    int _fileProtectionLevel;
    NSFetchRequest *_originalRequest;
    char _storeIsUbiquitized;
    char _isUsingCachedStatement;
    NSMutableArray *_concurrentFetchingPipelineRows;
    NSDictionary *_prefetchingSubstitutionVariables;
}

@property (readonly, nonatomic) NSFetchRequest *request;
@property (retain, nonatomic) NSSQLiteStatement *fetchStatement;
@property (nonatomic) char isFaultRequest;
@property (readonly, nonatomic) char shouldUseBatches;

- (void)dealloc;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)executePrologue;
- (void)executeEpilogue;
- (id)_createStatement;
- (id)createChildContextForNestedFetchRequest:(id)a0;
- (char)executeRequestCore:(id *)a0;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;

@end
