@class NSString, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDDatabaseDailyAnalytics : NSObject <HDHealthDaemonReadyObserver, HDAnalyticsSubmissionCoordinatorDelegate> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_serialAsynchronousQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)reportDailyAnalyticsWithCoordinator:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)daemonReady:(id)a0;
- (void).cxx_destruct;
- (id)_binnedAnalyticsValue:(long long)a0 error:(id)a1;
- (id)_predicateForDeletedObjectsBetweenDate:(id)a0 andOlderDate:(id)a1;

@end
