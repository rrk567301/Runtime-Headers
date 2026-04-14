@class NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, SSRVTUITrainingServiceDelegate;

@interface SSRVTUITrainingServiceClient : NSObject <SSRVTUITrainingServiceDelegate, SSRVTUITrainingService> {
    NSString *_localeIdentifier;
    NSString *_appDomain;
    NSString *_siriSharedUserId;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) id remoteObjectProxy;
@property (weak, nonatomic) id<SSRVTUITrainingServiceDelegate> delegate;
@property (copy, nonatomic) id /* block */ prepareCompletion;
@property (copy, nonatomic) id /* block */ cleanupCompletion;
@property (copy, nonatomic) id /* block */ trainCompletion;
@property (copy, nonatomic) id /* block */ trainCompletionWithResult;
@property (nonatomic) BOOL requireResetup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_connection;
- (id)initWithDelegate:(id)a0;
- (void)setLocaleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_newConnection;
- (void)reset;
- (id)_service;
- (void)prepareWithCompletion:(id /* block */)a0;
- (void)CSVTUIRemoteDetectedPartialTranscriptionResult:(id)a0;
- (void)stopRMS;
- (void)CSVTUIRemoteTrainingSessionRMSAvailable:(float)a0;
- (void)_handleXPCDisconnectedUnexpectedlyWithError:(id)a0;
- (void)_resetupIfNeeded;
- (void)audioSourceWithCompletion:(id /* block */)a0;
- (void)cancelTrainingViaXPCForID:(long long)a0;
- (void)cleanupViaXPCWithCompletion:(id /* block */)a0;
- (void)didDetectForceEndPoint;
- (void)getAudioSessionID:(id /* block */)a0;
- (void)playSoundEffectWithAudioTone:(int)a0;
- (void)setRecordingStartHostTime:(unsigned long long)a0;
- (void)setSNRCheckEnabled:(BOOL)a0;
- (void)setupWithLocaleID:(id)a0 appDomain:(id)a1 siriSharedUserId:(id)a2;
- (void)startRMS;
- (void)trainUtteranceViaXPC:(long long)a0 shouldUseASR:(BOOL)a1 completion:(id /* block */)a2;
- (void)trainUtteranceViaXPC:(long long)a0 shouldUseASR:(BOOL)a1 mhUUID:(id)a2 completionWithResult:(id /* block */)a3;
- (void)updateTrainingManagerViaXPCForDevice:(unsigned long long)a0 trainingDeviceUUIDList:(id)a1 withCompletion:(id /* block */)a2;
- (void)voiceProfileWithCompletion:(id /* block */)a0;

@end
