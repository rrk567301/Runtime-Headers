@class BGSystemTask;

@interface CKBGSystemTask : CKBackgroundTask

@property (readonly) BGSystemTask *systemTask;

- (void)complete;
- (long long)priority;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)requiresNetworkConnectivity;
- (double)interval;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)expiredWithRetryAfter:(double)a0 error:(id *)a1;
- (id)initWithSystemTask:(id)a0;
- (BOOL)isDataBudgeted;
- (BOOL)requiresInexpensiveNetworkConnectivity;
- (BOOL)requiresSignificantUserInactivity;

@end
