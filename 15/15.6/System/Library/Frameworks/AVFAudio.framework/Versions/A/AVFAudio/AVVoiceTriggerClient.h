@interface AVVoiceTriggerClient : NSObject {
    struct AVVoiceTriggerClientImpl { void /* function */ **x0; unsigned int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; id x7; BOOL x8; void *x9; void /* function */ *x10; id x11; BOOL x12; id x13; } *voiceTriggerClientImpl;
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
+ (char)supportsDuckingOnSpeakerOutput;
+ (id)sharedInstance:(long long)a0;
+ (char)isAPIAvailable;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)init:(long long)a0;
- (void)getInputChannelInfoCompletion:(id /* block */)a0;
- (void)portStateChangedNotification:(id)a0;
- (void)siriClientRecordStateChangedNotification:(char)a0 recordingCount:(unsigned long long)a1;
- (void)speakerMuteStateChangedNotification:(char)a0;
- (void)speakerStateChangedNotification:(id)a0;
- (void)voiceTriggerNotification:(id)a0;
- (void)portStateActiveCompletionBlock:(id /* block */)a0;
- (void)enableListeningOnPorts:(id)a0 completionBlock:(id /* block */)a1;
- (id)recordingPIDList;
- (void)setAggressiveECMode:(char)a0 completionBlock:(id /* block */)a1;
- (id)activateSecureSession:(char)a0;
- (void)callServerCrashedBlock;
- (void)callServerResetBlock;
- (void)enableBargeInMode:(char)a0 completionBlock:(id /* block */)a1;
- (void)enableSpeakerStateListening:(char)a0;
- (void)enableSpeakerStateListening:(char)a0 completionBlock:(id /* block */)a1;
- (void)enableVoiceTriggerListening:(char)a0;
- (void)enableVoiceTriggerListening:(char)a0 completionBlock:(id /* block */)a1;
- (char)isSiriClient;
- (void)listeningEnabledCompletionBlock:(id /* block */)a0;
- (id)recordingAuditTokenList;
- (void)setAVVCServerCrashedBlock:(id /* block */)a0;
- (void)setAVVCServerResetBlock:(id /* block */)a0;
- (void)setListeningProperty:(char)a0 completionBlock:(id /* block */)a1;
- (void)siriClientsRecordingCompletionBlock:(id /* block */)a0;
- (char)speakerStateActive;
- (void)speakerStateActiveCompletionBlock:(id /* block */)a0;
- (char)speakerStateMuted;
- (void)speakerStateMutedCompletionBlock:(id /* block */)a0;
- (void)updateVoiceTriggerConfiguration:(id)a0;
- (void)updateVoiceTriggerConfiguration:(id)a0 completionBlock:(id /* block */)a1;
- (void)voiceTriggerPastDataFramesAvailableCompletion:(id /* block */)a0;
- (id)voiceTriggerServerConnection;

@end
