@class SSRSpeakerRecognitionOrchestrator, NSDictionary, SSRSpeakerRecognitionContext, NSString;
@protocol SSRSpeakerRecognitionControllerDelegate;

@interface SSRSpeakerRecognitionController : NSObject <SSRSpeakerRecognitionOrchestratorDelegate>

@property (retain, nonatomic) SSRSpeakerRecognitionContext *context;
@property (weak, nonatomic) id<SSRSpeakerRecognitionControllerDelegate> delegate;
@property (retain, nonatomic) SSRSpeakerRecognitionOrchestrator *orchestrator;
@property (retain, nonatomic) NSDictionary *lastScoreCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 withDelegate:(id)a1 error:(id *)a2;
- (id)getLatestSpeakerInfo;
- (id)resetWithContext:(id)a0;
- (void)processAudio:(id)a0 withNumberOfSamples:(unsigned long long)a1;
- (void)endAudio;
- (void)voiceRecognitionOrchestrator:(id)a0 hasVoiceRecognitionInfo:(id)a1;
- (void)voiceRecognitionOrchestratorFinishedProcessing:(id)a0 withFinalVoiceRecognitionInfo:(id)a1;

@end
