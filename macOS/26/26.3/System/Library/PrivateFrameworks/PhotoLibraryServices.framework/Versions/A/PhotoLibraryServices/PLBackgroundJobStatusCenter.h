@class NSString, NSDictionary, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PLBackgroundJobStatusCenter : NSObject <PLBackgroundJobServiceObserver> {
    NSMutableArray *_registrationEventsQueue;
    NSMutableArray *_runningEventsQueue;
    NSMutableSet *_workersResponsibleForRegistration;
    NSMutableSet *_criteriaShortCodesOfSubmittedTasks;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

@property (readonly) NSDictionary *statusDumpDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_recordNonRegistrationEvent;
- (void)recordStoppingWorker:(id)a0 withRemainingJobCount:(unsigned long long)a1;
- (void)recordStartingWorker:(id)a0 withJobCount:(unsigned long long)a1;
- (void)_addRunningEventToQueue:(id)a0;
- (void)_addRegistrationEventToQueue:(id)a0;
- (id)init;
- (void)recordWorkerHasPendingJobs:(id)a0;
- (void)backgroundJobServiceDidChangeStateFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)recordFinishingWorker:(id)a0;
- (void)recordTaskSubmittedWithCriteria:(id)a0;
- (void)_recordRegistrationEventToState:(unsigned long long)a0;

@end
