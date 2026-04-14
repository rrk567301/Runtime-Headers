@interface CSFSensorControlSelfLogger : NSObject

+ (id)sharedLogger;

- (int)_getMHSensorControlStatusWithCSFSensorStatus:(unsigned long long)a0;
- (void)logSensorControlStartWithStatus:(unsigned long long)a0 withMHUUID:(id)a1;

@end
