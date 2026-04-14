@class NSObject;
@protocol OS_xpc_object;

@interface CKXPCActivity : CKBackgroundTask {
    NSObject<OS_xpc_object> *_criteria;
    struct _xpc_activity_eligibility_changed_handler_s { } *_handler;
}

- (BOOL)requiresNetworkConnectivity;
- (double)interval;
- (long long)priority;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithActivity:(id)a0;
- (void)_handleActivityUpdate:(id)a0;
- (BOOL)isDataBudgeted;
- (BOOL)requiresInexpensiveNetworkConnectivity;
- (BOOL)requiresSignificantUserInactivity;

@end
