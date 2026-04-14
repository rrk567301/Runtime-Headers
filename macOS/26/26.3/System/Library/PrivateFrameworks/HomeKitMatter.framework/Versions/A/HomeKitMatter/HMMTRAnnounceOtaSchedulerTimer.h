@class HMFTimer, HMMTRAccessoryServer, NSString, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTRAnnounceOtaSchedulerTimer : HMFObject <HMFTimerDelegate>

@property (retain) HMFTimer *updateTimer;
@property (weak) HMMTRAccessoryServer *server;
@property (retain, nonatomic) NSNumber *nodeID;
@property (retain, nonatomic) NSNumber *endpoint;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double timeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void)start;
- (void)stop;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)init:(double)a0 server:(id)a1 nodeID:(id)a2 endpoint:(id)a3 queue:(id)a4;

@end
