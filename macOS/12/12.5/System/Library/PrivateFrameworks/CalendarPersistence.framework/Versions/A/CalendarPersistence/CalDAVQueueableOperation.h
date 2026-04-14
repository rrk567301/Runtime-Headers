@class CalCalDAVTaskManager, NSManagedObjectID, NSError, NSMutableSet, NSDate, NSObject, CalDAVAccountInfoProvider;
@protocol OS_dispatch_source;

@interface CalDAVQueueableOperation : NSObject {
    NSManagedObjectID *_sessionID;
    NSError *_error;
    BOOL _running;
    long long _retryCounter;
    BOOL _pendingRetry;
    NSMutableSet *_dependencies;
}

@property (retain) NSDate *startDate;
@property (retain) CalDAVAccountInfoProvider *accountInfoProvider;
@property (retain) NSObject<OS_dispatch_source> *timerOfDeath;
@property (readonly, retain) CalCalDAVTaskManager *taskManager;

+ (id)_createTimerWithInterval:(double)a0 queue:(id)a1 block:(id /* block */)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)error;
- (long long)sequenceNumber;
- (void)setError:(id)a0;
- (id)queue;
- (void)enqueue;
- (BOOL)isReady;
- (id)dependencies;
- (void)addDependency:(id)a0;
- (void)removeDependency:(id)a0;
- (BOOL)isRunning;
- (id)session;
- (id)sessionID;
- (void)_cancelTimer;
- (id)initWithSessionID:(id)a0;
- (void)_startTimer;
- (long long)maxRetries;
- (void)performOperation;
- (void)finishOperation;
- (BOOL)isPendingRetry;
- (id)readableDescription;
- (long long)retryCounter;
- (BOOL)_isLowPriority;
- (BOOL)_shouldCoalesceWithOperations:(id)a0;
- (void)removeAssociatedEntities;
- (void)handleRemovalCleanup;
- (void)beginQueueableOperation;
- (BOOL)hasDependency:(id)a0;
- (BOOL)isTransientError:(id)a0;
- (id)extraUserInfoForRebuiltError;
- (id)associatedChangeRequestInContext:(id)a0;
- (BOOL)_shouldKillAgentIfThisTakesTooLong;
- (void)_updateAccountInfoProviderIfNecessary;
- (void)performOperationSynchronously;
- (void)scheduleRetryMainThread:(id)a0;
- (void)retryTimerFired:(id)a0;
- (id)rebuildError:(id)a0;
- (BOOL)scheduleRetry:(long long)a0;
- (BOOL)suppressErrorDialog;
- (void)_persistException;

@end
