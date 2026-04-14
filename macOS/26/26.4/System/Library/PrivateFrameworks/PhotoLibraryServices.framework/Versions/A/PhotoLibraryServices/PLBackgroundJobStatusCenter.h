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

- (void)_addRegistrationEventToQueue:(id)a0;
- (void)recordWorkerHasPendingJobs:(id)a0;
- (void)recordStartingWorker:(id)a0 withJobCount:(unsigned long long)a1;
- (void)backgroundJobServiceDidChangeStateFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)_recordRegistrationEventToState:(unsigned long long)a0;
- (void)recordFinishingWorker:(id)a0;
- (void).cxx_destruct;
- (void)recordStoppingWorker:(id)a0 withRemainingJobCount:(unsigned long long)a1;
- (void)_addRunningEventToQueue:(id)a0;
- (id)init;
- (void)recordTaskSubmittedWithCriteria:(id)a0;
- (void)_recordNonRegistrationEvent;

@end
