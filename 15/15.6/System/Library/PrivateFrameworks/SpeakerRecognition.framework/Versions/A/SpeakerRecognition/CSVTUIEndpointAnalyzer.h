@class SNAudioStreamAnalyzer, NSString, NSObject, AVAudioFormat;
@protocol OS_dispatch_queue, CSVTUIEndpointAnalyzerDelegate, CSAudioFileWriter;

@interface CSVTUIEndpointAnalyzer : NSObject <SNResultsObserving>

@property (retain, nonatomic) SNAudioStreamAnalyzer *snAudioStreamAnalyzer;
@property (nonatomic) unsigned long long framePosition;
@property (nonatomic) unsigned long long nnvadState;
@property (nonatomic) unsigned long long numSamplesReceived;
@property (nonatomic) unsigned long long numSamplesProcessedBeforeAnchorTime;
@property (nonatomic) unsigned long long anchorMachAbsTime;
@property (nonatomic) char isAnchorTimeBuffered;
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
@property (nonatomic) long long firstSampleId;
@property (nonatomic) unsigned long long numSamplesSkippedForVT;
@property (nonatomic) char finishedSkippingSamplesForVT;
@property (nonatomic) double startWaitTime;
@property (nonatomic) double endWaitTime;
@property (weak, nonatomic) id<CSVTUIEndpointAnalyzerDelegate> delegate;
@property (nonatomic) unsigned long long activeChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timeStampString;

- (id)init;
- (void).cxx_destruct;
- (void)request:(id)a0 didFailWithError:(id)a1;
- (void)_checkSNObservationForEndpoint:(id)a0;
- (void)_checkSNObservationForStartpoint:(id)a0;
- (double)_effectiveAudioTimeInSecsForSNObservation:(id)a0;
- (id)_pcmBufferForAudioChunk:(id)a0;
- (void)_reportEndpointAtTsInSecs:(double)a0;
- (void)_reportStartpointAtTsInSecs:(double)a0;
- (void)handleVoiceTriggerWithActivationInfo:(id)a0;
- (void)processAudioSamplesAsynchronously:(id)a0;
- (void)recordingStoppedForReason:(long long)a0;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)stopEndpointer;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)a0;

@end
