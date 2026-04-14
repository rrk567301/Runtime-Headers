@class NSArray, NSDictionary, NSURL, SSRSpeakerRecognitionContext, NSString, EARSyncPSRAudioProcessor;
@protocol SSRSpeakerAnalyzerPSRDelegate;

@interface SSRSpeakerAnalyzerPSR : NSObject <EARSyncPSRAudioProcessorDelegate> {
    BOOL _triggerPhraseDetectedOnTap;
    unsigned long long _numSamplesProecssed;
}

@property (weak, nonatomic) id<SSRSpeakerAnalyzerPSRDelegate> delegate;
@property (retain, nonatomic) EARSyncPSRAudioProcessor *psrAudioProcessor;
@property (retain, nonatomic) NSURL *configFilePath;
@property (retain, nonatomic) NSURL *resourceFilePath;
@property (retain, nonatomic) SSRSpeakerRecognitionContext *context;
@property (retain, nonatomic) NSDictionary *voiceProfilesModelFilePaths;
@property (retain, nonatomic) NSDictionary *voiceProfilesExpModelFilePaths;
@property (retain, nonatomic) NSArray *psrScorers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)endAudio;
- (void).cxx_destruct;
- (id)resetForNewRequest;
- (void)psrAudioProcessor:(id)a0 finishedWithFinalSpeakerVector:(id)a1 speakerVectorSize:(unsigned long long)a2 processedAudioDurationMs:(unsigned long long)a3;
- (void)psrAudioProcessor:(id)a0 hasSpeakerVector:(id)a1 speakerVectorSize:(unsigned long long)a2 processedAudioDurationMs:(unsigned long long)a3;
- (BOOL)_isSpeakerVectorValid:(id)a0 speakerVectorSize:(unsigned long long)a1 fromPsrAudioProcessor:(id)a2;
- (id)_processSpeakerVector:(id)a0 withSize:(unsigned long long)a1 processedAudioDurationMs:(unsigned long long)a2;
- (unsigned long long)getEARSyncPSRAudioProcessorProcessingTime;
- (id)getVoiceRecognizerResults;
- (id)initWithVoiceRecognitionContext:(id)a0 delegate:(id)a1;
- (void)processAudioData:(id)a0;

@end
