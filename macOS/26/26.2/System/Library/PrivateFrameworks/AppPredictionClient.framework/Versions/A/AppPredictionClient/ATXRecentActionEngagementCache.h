@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ATXRecentActionEngagementCache : NSObject {
    NSString *_recentMLEngagementCachePath;
    NSString *_recentHeuristicEngagementCachePath;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void)_addEngagedActionNoSync:(id)a0 toCacheAtPath:(id)a1;
- (void)clearRecentEngagements;
- (void)_serializeAndWriteNoSyncActionSet:(id)a0 toCacheAtPath:(id)a1;
- (id)_recentActionsNoSyncForCacheAtPath:(id)a0;
- (id)recentActions;
- (id)exceptionsFoundInCacheAtPath:(id)a0 forCandidateExceptions:(id)a1;
- (void)addEngagedAction:(id)a0;
- (void)clearRecentEngagementsFromCacheAtPath:(id)a0 withExceptionActions:(id)a1;
- (id)_getAllCachedActionsNoSync;
- (void).cxx_destruct;
- (void)clearRecentHeuristicEngagementsExceptForActions:(id)a0;
- (id)initWithCacheDirectory:(id)a0;
- (void)_addEngagedActionSetNoSync:(id)a0 toCacheAtPath:(id)a1;
- (void)clearRecentMLEngagementsExceptForActions:(id)a0;
- (id)init;

@end
