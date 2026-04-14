@class HMFTimer, NSString, NSNumber, CHIPAccessoryServer;

@interface CHIPPluginOTAAnnounceTimer : HMFObject <HMFTimerDelegate>

@property (retain, nonatomic) HMFTimer *announceTimer;
@property (retain, nonatomic) NSNumber *nodeId;
@property (retain, nonatomic) NSNumber *endpoint;
@property (readonly, weak, nonatomic) CHIPAccessoryServer *server;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (id)initWithServer:(id)a0 nodeId:(id)a1 endpoint:(id)a2 queue:(id)a3;

@end
