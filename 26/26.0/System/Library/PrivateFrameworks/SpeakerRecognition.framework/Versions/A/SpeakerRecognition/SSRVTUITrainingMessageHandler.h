@class NSString, SSRVTUITrainingManager;
@protocol CSAudioProviderSelecting, SSRVTUITrainingServiceDelegate;

@interface SSRVTUITrainingMessageHandler : NSObject <SSRVTUITrainingManagerDelegate, SSRVTUITrainingService>

@property (retain, nonatomic) SSRVTUITrainingManager *trainingManager;
@property (retain, nonatomic) NSString *siriSharedUserId;
@property (retain, nonatomic) id<CSAudioProviderSelecting> audioProviderSelector;
@property (retain, nonatomic) id<SSRVTUITrainingServiceDelegate> remoteObjectProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void)setLocaleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)prepareWithCompletion:(id /* block */)a0;
- (void)stopRMS;
- (id)initWithAudioProvidingSelector:(id)a0;
- (void)VTUITrainingManagerFeedLevel:(float)a0;
- (void)audioSourceWithCompletion:(id /* block */)a0;
- (void)cancelTrainingViaXPCForID:(long long)a0;
- (void)cleanupViaXPCWithCompletion:(id /* block */)a0;
- (void)didDetectForceEndPoint;
- (void)getAudioSessionID:(id /* block */)a0;
- (void)playSoundEffectWithAudioTone:(int)a0;
- (void)setRecordingStartHostTime:(unsigned long long)a0;
- (void)setupWithLocaleID:(id)a0 appDomain:(id)a1 siriSharedUserId:(id)a2;
- (void)startRMS;
- (void)trainUtteranceViaXPC:(long long)a0 shouldUseASR:(BOOL)a1 completion:(id /* block */)a2;
- (void)trainUtteranceViaXPC:(long long)a0 shouldUseASR:(BOOL)a1 mhUUID:(id)a2 completionWithResult:(id /* block */)a3;
- (void)voiceProfileWithCompletion:(id /* block */)a0;
- (void)vtuiTrainingXPCDisconnected;

@end
