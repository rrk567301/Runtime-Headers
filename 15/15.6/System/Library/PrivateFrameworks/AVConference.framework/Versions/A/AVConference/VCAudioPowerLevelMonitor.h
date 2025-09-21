@class NSObject;
@protocol VCAudioPowerLevelMonitorDelegate;

@interface VCAudioPowerLevelMonitor : NSObject {
    unsigned int startDetectRemoteAudioLowPowerTime;
    float audioPowerThreshold;
    unsigned int audioLowPowerTimeInterval;
    char isAudioPowerBelowThreshold;
    char isAudioPowerMovingAverage;
    float audioPowerMovingAverageCoefficient;
    float currentAudioAverage;
}

@property (nonatomic) NSObject<VCAudioPowerLevelMonitorDelegate> *delegate;

- (id)init;
- (void)detectRemoteAveragePowerLevel:(float)a0 timestamp:(unsigned int)a1;

@end
