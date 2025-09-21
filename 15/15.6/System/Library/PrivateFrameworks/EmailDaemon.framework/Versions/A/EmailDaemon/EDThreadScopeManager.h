@class NSArray, NSString, NSMutableDictionary, NSObject, EMCoreAnalyticsCollector;
@protocol OS_os_log, EFScheduler, EDThreadScopeManagerDataSource;

@interface EDThreadScopeManager : NSObject <EFLoggable> {
    NSMutableDictionary *_threadScopes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _threadScopesLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, weak, nonatomic) id<EDThreadScopeManagerDataSource> dataSource;
@property (readonly, nonatomic) id<EFScheduler> evictionScheduler;
@property (readonly, nonatomic) EMCoreAnalyticsCollector *analyticsCollector;
@property (readonly, copy, nonatomic) NSArray *threadScopes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signpostLog;
+ (id)mailboxTypesToPrecompute;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)resetCache;
- (unsigned long long)signpostID;
- (void)_initializeThreadScopesIfNeeded;
- (id)_threadScopeInfoForThreadScope:(id)a0;
- (void)_evictAtLeast:(unsigned long long)a0 upTo:(unsigned long long)a1 fromThreadScopesWithDatabaseIDs:(id)a2;
- (double)_evictionScoreForCount:(unsigned long long)a0 timeInterval:(double)a1;
- (unsigned long long)_findPredicateTypeWithCompoundPredicate:(id)a0 mailboxTypeResolver:(id)a1 outMailboxScope:(id *)a2;
- (char)_isBlackPearlPredicate:(id *)a0;
- (id)_mailboxFromPrecomputedMailboxScope:(id)a0 mailboxProvider:(id)a1 mailboxPredicate:(id *)a2;
- (id)_mailboxScopeFromPredicate:(id)a0;
- (unsigned long long)_numberOfThreadScopesToEvictFrom:(id)a0 upTo:(unsigned long long *)a1;
- (id)_precomputedMailboxScopeForFilterPredicate:(id)a0 mailboxTypeResolver:(id)a1 foundPredicates:(unsigned long long *)a2;
- (void)_sendEventForCoreAnalytics:(id)a0;
- (char)_shouldPrecomputeMailboxType:(id)a0;
- (char)_shouldPrecomputeMailboxWithObjectID:(id)a0;
- (id)_threadScopesWithLastViewedOlderThanLimit;
- (void)addThreadScope:(id)a0 withDatabaseID:(long long)a1 needsUpdate:(char)a2 lastViewedDate:(id)a3;
- (long long)databaseIDForThreadScope:(id)a0;
- (char)isThreadScopePrecomputed:(id)a0 mailboxProvider:(id)a1 shouldMigrate:(char *)a2;
- (void)logExistingThreadScopes;
- (id)precomputedMailboxScopeForThreadScope:(id)a0 mailboxTypeResolver:(id)a1 foundPredicates:(unsigned long long *)a2;
- (void)removeAllThreadScopes;
- (void)removeThreadScope:(id)a0;
- (void)removeThreadScopesForMailboxScope:(id)a0;
- (void)setLastViewedDate:(id)a0 forThreadScope:(id)a1;
- (void)setNeedsUpdate:(char)a0 forThreadScope:(id)a1;
- (id)threadScopeFromPrecomputedMailboxScope:(id)a0 predicates:(unsigned long long)a1 mailboxProvider:(id)a2;
- (id)threadScopesByDatabaseID;

@end
