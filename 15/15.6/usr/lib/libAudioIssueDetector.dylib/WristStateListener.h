@interface WristStateListener : NSObject

+ (id)sharedInstance;

- (void)bypassDetection;
- (char)isWristOn;
- (void)startListen;
- (void)stopListen;

@end
