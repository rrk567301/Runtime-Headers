@interface WaterLockListener : NSObject

+ (id)sharedInstance;

- (char)isWaterLockedOff;
- (void)startListen;
- (void)stopListen;

@end
