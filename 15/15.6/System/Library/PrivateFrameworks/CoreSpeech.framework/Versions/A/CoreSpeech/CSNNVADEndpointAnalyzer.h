@class SNAudioStreamAnalyzer, NSString, NSObject, AVAudioFormat;
@protocol CSAudioFileWriter, CSEndpointAnalyzerImplDelegate, OS_dispatch_queue, CSEndpointAnalyzerDelegate;

@interface CSNNVADEndpointAnalyzer : NSObject <SNResultsObserving, CSEndpointAnalyzerImpl>

@property (retain, nonatomic) SNAudioStreamAnalyzer *snAudioStreamAnalyzer;
@property (nonatomic) unsigned long long framePosition;
@property (nonatomic) unsigned long long nnvadState;
@property (nonatomic) unsigned long long numSamplesReceived;
@property (nonatomic) unsigned long long numSamplesProcessedBeforeAnchorTime;
@property (nonatomic) unsigned long long anchorMachAbsTime;
@property (nonatomic) char isAnchorTimeBuffered;
@property (nonatomic) char isRequestTimeout;
@property (nonatomic) unsigned long long currentRequestSampleRate;
@property (retain, nonatomic) AVAudioFormat *currentRequestAudioFormat;
@property (nonatomic) double vtEndInSecs;
@property (nonatomic) unsigned long long vtEndInSampleCount;
@property (nonatomic) double vtExtraAudioAtStartInMs;
@property (nonatomic) double nnvadAudioOriginInMs;
@property (nonatomic) char shouldDetectTwoShot;
@property (nonatomic) char didEnterTwoshot;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<CSAudioFileWriter> audioFileWriter;
@property (nonatomic) double firstAudioSampleSensorTimestamp;
@property (nonatomic) char hasReportedFirstAudioSampleSensorTimestamp;
@property (nonatomic) long long firstSampleId;
@property (nonatomic) unsigned long long numSamplesSkippedForVT;
@property (nonatomic) char finishedSkippingSamplesForVT;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CSEndpointAnalyzerDelegate> delegate;
@property (weak, nonatomic) id<CSEndpointAnalyzerImplDelegate> implDelegate;
@property (readonly, nonatomic) char canProcessCurrentRequest;
@property (nonatomic) unsigned long long activeChannel;
@property (readonly, nonatomic) NSString *endpointerModelVersion;
@property (readonly, nonatomic) double postVoiceTriggerSilence;
@property (nonatomic) long long endpointStyle;
@property (nonatomic) double delay;
@property (nonatomic) double startWaitTime;
@property (nonatomic) double automaticEndpointingSuspensionEndTime;
@property (nonatomic) double minimumDurationForEndpointer;
@property (readonly, nonatomic) double lastEndOfVoiceActivityTime;
@property (readonly, nonatomic) double lastStartOfVoiceActivityTime;
@property (nonatomic) double bypassSamples;
@property (nonatomic) double interspeechWaitTime;
@property (nonatomic) double endWaitTime;
@property (nonatomic) char saveSamplesSeenInReset;
@property (retain, nonatomic) NSString *mhId;

+ (id)timeStampString;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)request:(id)a0 didFailWithError:(id)a1;
- (void)_checkSNObservationForEndpoint:(id)a0;
- (void)preheat;
- (void)_checkSNObservationForStartpoint:(id)a0;
- (double)_effectiveAudioTimeInSecsForSNObservation:(id)a0;
- (void)_emitEndpointDetectedEventWithEndpointTime:(double)a0 endpointBufferHostTime:(unsigned long long)a1;
- (id)_pcmBufferForAudioChunk:(id)a0;
- (void)_reportAudioFirstBufferInfoIfNecessary;
- (void)_reportEndpointAtTsInSecs:(double)a0;
- (void)_reportStartpointAtTsInSecs:(double)a0;
- (void)_reportTwoShotAtTsInSecs:(double)a0;
- (char)_shouldEnterTwoShotAtAudioTimeInSecs:(double)a0;
- (double)_trailingSilenceDurationAtEndpoint;
- (void)handleVoiceTriggerWithActivationInfo:(id)a0;
- (void)processAudioSamplesAsynchronously:(id)a0;
- (void)recordingStoppedForReason:(long long)a0;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)a0 recordContext:(id)a1 disableRCSelection:(char)a2;
- (void)stopEndpointer;

@end
