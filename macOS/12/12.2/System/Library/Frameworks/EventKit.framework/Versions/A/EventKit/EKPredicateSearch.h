@class CalMDQuery, EKEventStore, NSPredicate, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface EKPredicateSearch : NSObject <EKFetchRequestToken> {
    NSPredicate *_predicate;
    EKEventStore *_store;
    CalMDQuery *_mdQuery;
    long long _previousQueryCount;
    BOOL _finished;
    BOOL _batchCompletion;
}

@property (retain) NSMutableSet *currentResults;
@property (copy) id /* block */ completionCallback;
@property (copy) id /* block */ cancelCallback;
@property (retain) NSObject<OS_dispatch_queue> *queryQueue;

+ (id)searchWithPredicate:(id)a0 store:(id)a1;
+ (BOOL)_fastPathAvailableForPredicate:(id)a0 inStore:(id)a1;
+ (id)_fastPathResultForPredicate:(id)a0 inStore:(id)a1;
+ (id)_fastPathResultCountsForPredicate:(id)a0 inStore:(id)a1;

- (id)run;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)runForCountsOnly;
- (void)cancelSearch;
- (id)initWithPredicate:(id)a0 store:(id)a1;
- (void)_endSpotlightQuery;
- (void)_completeOnAppropriateThreadWithResults:(id)a0;
- (void)_processManagedObjectsIntoEKObjects:(id)a0;
- (void)_updateQuery:(id)a0;
- (void)_finishQuery:(id)a0;
- (void)_startSpotlightQuery:(id)a0 synchronous:(BOOL)a1;
- (void)startWithCompletionCallback:(id /* block */)a0 cancelCallback:(id /* block */)a1 synchronous:(BOOL)a2 batchCompletion:(BOOL)a3;
- (id)_managedCalendarsForCalendarUIDs:(id)a0 context:(id)a1;
- (void)_beginQueryWithMDQueryString:(id)a0 onCalendars:(id)a1 synchronous:(BOOL)a2;

@end
