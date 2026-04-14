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
- (void)_displayLinkCallbackHandler;
- (void)startMeteringMicrophoneIdentifier:(id)a0;
- (void)startMeteringMicrophoneIdentifier:(id)a0 toFile:(id)a1;
- (void)startMeteringFromProducerOwnedMicrophone;
- (void)stopMetering;
- (float)_powerLevelForMicPower:(float)a0;
- (float)_updateMedianWithNewValue:(float)a0;
- (void)_resetRunningPowerLevels;
- (float)_currentMicPowerLevel;
- (float)_currentRawMicPowerLevel;
- (void)_updatePeakPowerLevel;
- (float)_minimumMeterLevel;
- (void)_startDisplayLink;
- (void)_clearDisplayLink;

@end
