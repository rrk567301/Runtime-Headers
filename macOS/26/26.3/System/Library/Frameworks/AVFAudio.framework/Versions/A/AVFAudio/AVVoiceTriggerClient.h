@interface AVVoiceTriggerClient : NSObject {
    struct AVVoiceTriggerClientImpl { void /* function */ **x0; unsigned int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; id x7; BOOL x8; void *x9; void /* function */ *x10; id x11; BOOL x12; id x13; id x14; BOOL x15; } *voiceTriggerClientImpl;
}

@property (copy, nonatomic) id /* block */ avvcServerCrashedBlock;
@property (copy, nonatomic) id /* block */ avvcServerResetBlock;
@property (nonatomic) long long clientType;
@property (copy, nonatomic) id /* block */ voiceTriggerBlock;
@property (copy, nonatomic) id /* block */ speakerStateChangedBlock;
@property (copy, nonatomic) id /* block */ speakerMuteStateChangedBlock;
@property (copy, nonatomic) id /* block */ portStateChangedBlock;
@property (copy, nonatomic) id /* block */ siriClientRecordStateChangedBlock;
@property (copy, nonatomic) id /* block */ serverCrashedBlock;
@property (copy, nonatomic) id /* block */ serverResetBlock;
@property (readonly, nonatomic) unsigned long long voiceTriggerPastDataFramesAvailable;

+ (id)sharedInstance;
+ (BOOL)supportsDuckingOnSpeakerOutput;
+ (id)sharedInstance:(long long)a0;
+ (BOOL)isAPIAvailable;

- (void)callServerResetBlock;
- (void)siriClientRecordStateChangedNotification:(BOOL)a0 recordingCount:(unsigned long long)a1;
- (void)enableListeningOnPorts:(id)a0 completionBlock:(id /* block */)a1;
- (void)listeningEnabledCompletionBlock:(id /* block */)a0;
- (void)setAVVCServerResetBlock:(id /* block */)a0;
- (void)voiceTriggerPastDataFramesAvailableCompletion:(id /* block */)a0;
- (void)enableBargeInMode:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)callServerCrashedBlock;
- (void)enableVoiceTriggerListening:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)updateVoiceTriggerConfiguration:(id)a0;
- (id)init;
- (BOOL)speakerStateMuted;
- (id)recordingAuditTokenList;
- (void)siriClientsRecordingCompletionBlock:(id /* block */)a0;
- (void)updateVoiceTriggerConfiguration:(id)a0 completionBlock:(id /* block */)a1;
- (void)speakerMuteStateChangedNotification:(BOOL)a0;
- (void)enableSpeakerStateListening:(BOOL)a0;
- (id)activateSecureSession:(BOOL)a0;
- (void)portStateChangedNotification:(id)a0;
- (id)init:(long long)a0;
- (void).cxx_destruct;
- (void)speakerStateActiveCompletionBlock:(id /* block */)a0;
- (void)enableVoiceTriggerListening:(BOOL)a0;
- (BOOL)speakerStateActive;
- (void)speakerStateChangedNotification:(id)a0;
- (void)speakerStateMutedCompletionBlock:(id /* block */)a0;
- (id)recordingPIDList;
- (void)dealloc;
- (void)voiceTriggerNotification:(id)a0;
- (void)setAggressiveECMode:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)secureSessionServerReset;
- (void)getInputChannelInfoCompletion:(id /* block */)a0;
- (id)voiceTriggerServerConnection;
- (void)enableSpeakerStateListening:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)portStateActiveCompletionBlock:(id /* block */)a0;
- (void)setListeningProperty:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)secureSessionServerCrash;
- (BOOL)isSiriClient;
- (void)setAVVCServerCrashedBlock:(id /* block */)a0;

@end
