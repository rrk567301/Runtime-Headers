@class NSString, HDProfile, HDXPCPeriodicActivity, NSObject;
@protocol OS_os_log, HDPeriodicActivityDelegate;

@interface HDPeriodicActivity : NSObject <HDHealthDaemonActivatedObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject> {
    HDProfile *_profile;
    HDXPCPeriodicActivity *_activity;
    BOOL _unitTest_shouldDefer;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingCategory;
@property (readonly, nonatomic) double interval;
@property (readonly, weak, nonatomic) id<HDPeriodicActivityDelegate> delegate;
@property (readonly, nonatomic) long long errorCount;
@property (readonly, nonatomic) BOOL shouldDefer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerDisabledPeriodicActivityWithName:(id)a0 loggingCategory:(id)a1;

- (void)resetInterval;
- (id)diagnosticDescription;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (BOOL)isWaitingToRun;
- (void)unitTest_setShouldDefer:(BOOL)a0;
- (void)reset;
- (void)didPerformActivityWithResult:(long long)a0 minimumRetryInterval:(double)a1 activityStartDate:(id)a2 error:(id)a3;
- (void)dealloc;
- (id)initWithProfile:(id)a0 name:(id)a1 interval:(double)a2 delegate:(id)a3 loggingCategory:(id)a4;
- (void)daemonActivated:(id)a0;
- (id)lastSuccessfulRunDate;
- (void)synthesizeActivityFire;
- (void).cxx_destruct;

@end
