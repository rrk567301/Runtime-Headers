@class NSObject, NSString, HDProfile, HDSQLitePredicate, _HKFilter, HDActivitySummaryBuilder, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HDActivitySummaryQueryHelper : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver> {
    HDProfile *_profile;
    HDSQLitePredicate *_predicate;
    _HKFilter *_filter;
    HDActivitySummaryBuilder *_activitySummaryBuilder;
    char _initialResultsSent;
    char _needsUpdateAfterUnlock;
    char _shouldBatchSummaries;
    NSMutableDictionary *_previousActivityCachesByCacheIndex;
    long long _lastProcessedAnchor;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    long long _enumeratedSummaryCount;
}

@property (readonly, copy, nonatomic) id /* block */ batchedInitialResultsHandler;
@property (readonly, copy, nonatomic) id /* block */ batchedUpdateHandler;
@property char shouldIncludePrivateProperties;
@property char shouldIncludeStatistics;
@property (nonatomic) char orderByDateAscending;
@property (nonatomic) unsigned long long limit;
@property (readonly) long long enumeratedSummaryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)pause;
- (void)start;
- (void)stop;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(char)a1;
- (id)initWithProfile:(id)a0 filter:(id)a1 batchedInitialResultsHandler:(id /* block */)a2 batchedUpdateHandler:(id /* block */)a3;
- (void)samplesAdded:(id)a0 anchor:(id)a1;

@end
