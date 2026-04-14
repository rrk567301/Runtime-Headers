@class NSString, NSBackgroundActivityScheduler;

@interface HMDBackgroundTaskAgentTimer : NSObject <HMFLogging>

@property (retain, nonatomic) NSBackgroundActivityScheduler *backgroundActivityScheduler;
@property (readonly, nonatomic) NSString *timerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)_startTimer:(id)a0 home:(id)a1 completionHandler:(id /* block */)a2;
- (void)_stopTimer:(id /* block */)a0;
- (id)initWithTimerID:(id)a0;

@end
