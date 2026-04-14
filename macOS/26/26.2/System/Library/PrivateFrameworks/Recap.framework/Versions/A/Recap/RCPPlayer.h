@class RCPPlayerPlaybackOptions, RCPEventEnvironment;
@protocol RCPEventDeliveryServicePool, RCPAnalyticsEventSender;

@interface RCPPlayer : NSObject

@property (retain, nonatomic) RCPPlayerPlaybackOptions *playbackOptions;
@property (nonatomic) BOOL stompSenderForSimulatorPlayback;
@property (retain, nonatomic) RCPEventEnvironment *environment;
@property (retain, nonatomic) id<RCPEventDeliveryServicePool> deliveryServicePool;
@property (readonly, nonatomic) id<RCPAnalyticsEventSender> analyticsEventSender;

+ (void)playEventStream:(id)a0 withOptions:(id)a1;
+ (void)tearDown;
+ (id)sharedPlayer;

- (void)playEventStream:(id)a0 withOptions:(id)a1;
- (void)tearDown;
- (void)_sendEvent:(id)a0 machTimeOffset:(long long)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (void)_sendEvent:(id)a0 withService:(id)a1 machTimeOffset:(long long)a2 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
- (void).cxx_destruct;
- (struct __IOHIDEvent { } *)_cloneAndTransformHIDEvent:(id)a0 machTimeOffset:(long long)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (void)_adjustTimestampForHIDEventAndChildren:(struct __IOHIDEvent { } *)a0 now:(unsigned long long)a1 machTimeOffset:(long long)a2;
- (id)initWithDeliveryServicePool:(id)a0 environment:(id)a1 analyticsEventSender:(id)a2;
- (BOOL)prewarmForEventStream:(id)a0 withError:(id *)a1;
- (id)init;

@end
