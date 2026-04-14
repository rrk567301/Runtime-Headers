@class NSString;
@protocol CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate;

@interface CSHybridEndpointAnalyzer : NSObject <CSEndpointAnalyzerImpl>

@property (retain, nonatomic) NSString *endpointerModelVersion;
@property (readonly, nonatomic) BOOL canProcessCurrentRequest;
@property (weak, nonatomic) id<CSEndpointAnalyzerDelegate> delegate;
@property (weak, nonatomic) id<CSEndpointAnalyzerImplDelegate> implDelegate;
@property (nonatomic) unsigned long long activeChannel;
@property (readonly, nonatomic) double elapsedTimeWithNoSpeech;
@property (nonatomic) long long endpointStyle;
@property (nonatomic) double delay;
@property (nonatomic) double startWaitTime;
@property (nonatomic) double automaticEndpointingSuspensionEndTime;
@property (nonatomic) double minimumDurationForEndpointer;
@property (readonly, nonatomic) double lastEndOfVoiceActivityTime;
@property (readonly, nonatomic) double lastStartOfVoiceActivityTime;
@property (nonatomic) double bypassSamples;
@property (nonatomic) long long endpointMode;
@property (nonatomic) double interspeechWaitTime;
@property (nonatomic) double endWaitTime;
@property (nonatomic) BOOL saveSamplesSeenInReset;
@property (retain, nonatomic) NSString *mhId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (void)preheat;
- (void)updateEndpointerDelayedTrigger:(BOOL)a0;
- (long long)fetchCurrentEndpointerOperationMode;
- (void)processAudioSamplesAsynchronously:(id)a0;
- (void)processServerEndpointFeatures:(id)a0;
- (void)recordingStoppedForReason:(long long)a0;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)a0 recordContext:(id)a1;
- (void)setEndpointerOperationMode:(long long)a0;
- (void)stopEndpointer;
- (void)updateEndpointerThreshold:(float)a0;

@end
