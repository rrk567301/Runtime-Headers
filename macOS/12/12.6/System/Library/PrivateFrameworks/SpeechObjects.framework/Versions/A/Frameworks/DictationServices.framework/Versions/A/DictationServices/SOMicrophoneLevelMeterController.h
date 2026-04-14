@class NSString, SOAudioQueueRecorder;
@protocol SOMicrophoneViewMeterLevelConsumer, SOMicrophoneViewMeterLevelProvider;

@interface SOMicrophoneLevelMeterController : NSObject {
    float _peakMeterLevel;
    NSString *_microphoneID;
    struct __CVDisplayLink { } *_displayLink;
    float _runningPowerLevels[4];
    unsigned char _powerPointer;
}

@property (readonly, nonatomic) SOAudioQueueRecorder *microphoneRecorder;
@property (nonatomic) BOOL bounceMicrophoneMeter;
@property BOOL preventDictationModeWhileListening;
@property (retain, nonatomic) id<SOMicrophoneViewMeterLevelProvider> meterValueProviderTarget;
@property (retain, nonatomic) id<SOMicrophoneViewMeterLevelConsumer> meterValueConsumerTarget;
@property (nonatomic) BOOL bounceMeter;
@property (nonatomic) BOOL ignoreMinimumMeterLevel;

- (void)dealloc;
- (void)stopMetering;
- (void)startMeteringFromProducerOwnedMicrophone;
- (void)startMeteringMicrophoneIdentifier:(id)a0;
- (void)startMeteringMicrophoneIdentifier:(id)a0 toFile:(id)a1;
- (void)_resetRunningPowerLevels;
- (void)_startDisplayLink;
- (void)_clearDisplayLink;
- (float)_updateMedianWithNewValue:(float)a0;
- (float)_minimumMeterLevel;
- (float)_currentRawMicPowerLevel;
- (float)_powerLevelForMicPower:(float)a0;
- (void)_updatePeakPowerLevel;
- (float)_currentMicPowerLevel;
- (void)_displayLinkCallbackHandler;

@end
