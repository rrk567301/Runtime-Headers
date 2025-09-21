@interface RTKeybagMonitor : NSObject

- (int)getDeviceLockState;
- (char)getUnlockedSinceBoot;
- (char)lockDevice;

@end
