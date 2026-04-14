@class CalOperationQueue;

@interface CaliMIPSession : CalSession

@property (retain) CalOperationQueue *operationQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)activate;
- (void)deactivate;
- (void)systemWillSleep;
- (void)systemDidWake;
- (void)synchronizeWithFlags:(long long)a0;
- (void)deletePersistedErrorAndNotify;
- (double)timeSinceLastSync;
- (BOOL)processChangeRequests:(BOOL)a0;
- (BOOL)persistErrorAndNotify;
- (void)systemNetworkDidChange;

@end
