@interface RCPPlayerPlaybackOptions : NSObject

@property (nonatomic) double playbackSpeedFactor;
@property (nonatomic) double minDelayBetweenSends;
@property (nonatomic) double firstEventFrameDelay;
@property (nonatomic) char useVirtualHIDServices;
@property (nonatomic) char useHIDEventTimestampsForDelivery;
@property (nonatomic) char ignoreSenderProperties;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (copy, nonatomic) id /* block */ customizeHIDEvent;
@property (nonatomic) char linkEventDeliveryToDisplayRefreshRate;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)timestampForEventReplay:(id)a0;

@end
