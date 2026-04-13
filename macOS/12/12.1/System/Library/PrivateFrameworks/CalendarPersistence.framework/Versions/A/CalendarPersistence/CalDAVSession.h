@class NSString, NSMutableDictionary, CalDAVOperationQueue, NSDate, CalDAVAccountInfoProvider;

@interface CalDAVSession : CalSession {
    CalDAVOperationQueue *_queue;
}

@property (retain) NSMutableDictionary *calendarSources;
@property (retain) NSString *pushToken;
@property (retain) CalDAVAccountInfoProvider *accountInfoProvider;
@property BOOL isDelegate;
@property (retain) NSDate *fullRefreshDate;

- (id)description;
- (void).cxx_destruct;
- (id)operationQueue;
- (BOOL)activate;
- (void)deactivate;
- (id)initWithObjectID:(id)a0;
- (void)systemWillSleep;
- (void)systemDidWake;
- (id)debugInfo;
- (void)synchronizeWithFlags:(long long)a0;
- (void)_setupQueueIfNecessary;
- (void)updateAccountInfoProvider;
- (void)reactivate;
- (void)goOnline;
- (void)goOffline;
- (void)synchronizeWithFlags:(long long)a0 previousMigrateDelay:(long long)a1;
- (BOOL)attemptAutomaticConnect;
- (BOOL)_isPendingRefresh;
- (void)deletePersistedErrorAndNotify;
- (BOOL)_isRefreshing;
- (void)synchronizeDelegatesWithCompletion:(id /* block */)a0;
- (BOOL)updatePushState:(BOOL)a0;
- (id)_newScheduleCriteria;
- (void)timerFiredWithInfo:(id)a0;
- (id)sourceWithID:(id)a0 shouldCreateOrUpdate:(BOOL)a1;
- (BOOL)persistError:(id)a0 forChangeRequestID:(id)a1;
- (BOOL)_isTransientNetworkError:(id)a0;
- (id)managedPrincipalInContext:(id)a0;
- (BOOL)isProcessingChange:(id)a0;
- (void)synchronizeAndMigrateWithPreviousDelay:(long long)a0;
- (void)reschedule;
- (double)timeSinceLastSync;
- (BOOL)needsSync;
- (id)sourceWithID:(id)a0;
- (void)removeSourceWithID:(id)a0;
- (BOOL)processChangeRequests:(BOOL)a0;
- (BOOL)persistErrorAndNotify;
- (void)systemNetworkDidChange;

@end
