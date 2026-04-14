@class RCPPlayerPlaybackOptions, RCPEventEnvironment;
@protocol RCPEventDeliveryServicePool;

@interface RCPPlayer : NSObject

@property (retain, nonatomic) RCPPlayerPlaybackOptions *playbackOptions;
@property (nonatomic) BOOL stompSenderForSimulatorPlayback;
@property (retain, nonatomic) RCPEventEnvironment *environment;
@property (retain, nonatomic) id<RCPEventDeliveryServicePool> deliveryServicePool;

+ (void)tearDown;
+ (id)sharedPlayer;
+ (void)playEventStream:(id)a0 withOptions:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)tearDown;
- (BOOL)prewarmForEventStream:(id)a0 withError:(id *)a1;
- (void)playEventStream:(id)a0 withOptions:(id)a1;
- (id)initWithDeliveryServicePool:(id)a0 environment:(id)a1;
- (void)_sendEvent:(id)a0 machTimeOffset:(long long)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (void)_sendEvent:(id)a0 withService:(id)a1 machTimeOffset:(long long)a2 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
- (struct __IOHIDEvent { } *)_cloneAndTransformHIDEvent:(id)a0 machTimeOffset:(long long)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;

@end
