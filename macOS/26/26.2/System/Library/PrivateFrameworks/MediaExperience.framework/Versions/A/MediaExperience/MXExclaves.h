@class NSLock;

@interface MXExclaves : NSObject {
    unsigned int mSensorPort;
    NSLock *mSensorPortLock;
    unsigned int mSensorAccessCount;
}

+ (id)sharedInstance;
+ (id)sensorStatusToString:(unsigned int)a0;

- (id)init;
- (void)dealloc;
- (void)dumpDebugInfo;
- (unsigned int)getSensorAccessCount;
- (int)updateSensorStatus:(id)a0 reason:(id)a1;

@end
