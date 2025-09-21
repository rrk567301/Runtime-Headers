@class HMFTimer, NSString, HMMTRAccessoryServer;

@interface HMMTRAccessoryReachabilityManager : HMFObject <HMFTimerDelegate>

@property (retain, nonatomic) HMFTimer *reachabilityTimer;
@property (nonatomic) char reachable;
@property (readonly, weak, nonatomic) HMMTRAccessoryServer *server;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)timerDidFire:(id)a0;
- (id)initWithServer:(id)a0 timeout:(long long)a1 queue:(id)a2;
- (void)reachabilityUpdate;

@end
