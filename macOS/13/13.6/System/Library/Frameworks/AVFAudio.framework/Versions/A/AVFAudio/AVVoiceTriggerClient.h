@interface AVVoiceTriggerClient : NSObject {
    struct AVVoiceTriggerClientImpl { void /* function */ **x0; unsigned int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; float x7; BOOL x8; BOOL x9; long long x10; id x11; BOOL x12; BOOL x13; void *x14; void /* function */ *x15; } *voiceTriggerClientImpl;
}

@property (copy, nonatomic) id /* block */ voiceTriggerBlock;
@property (copy, nonatomic) id /* block */ speakerStateChangedBlock;
@property (copy, nonatomic) id /* block */ speakerMuteStateChangedBlock;
@property (copy, nonatomic) id /* block */ siriClientRecordStateChangedBlock;
@property (copy, nonatomic) id /* block */ serverCrashedBlock;
@property (copy, nonatomic) id /* block */ serverResetBlock;
@property (readonly, nonatomic) unsigned long long voiceTriggerPastDataFramesAvailable;

+ (BOOL)supportsDuckingOnSpeakerOutput;
+ (BOOL)isAPIAvailable;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)enableSpeakerStateListening:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)enableVoiceTriggerListening:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)listeningEnabledCompletionBlock:(id /* block */)a0;
- (void)speakerStateActiveCompletionBlock:(id /* block */)a0;
- (void)speakerStateMutedCompletionBlock:(id /* block */)a0;
- (void)updateVoiceTriggerConfiguration:(id)a0 completionBlock:(id /* block */)a1;
- (void)handleMediaServerDeath:(id)a0;
- (void)callServerCrashedBlock;
- (void)callServerResetBlock;
- (void)enableBargeInMode:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)enableSpeakerStateListening:(BOOL)a0;
- (void)enableVoiceTriggerListening:(BOOL)a0;
- (void)getInputChannelInfoCompletion:(id /* block */)a0;
- (void)handleMediaServerReset:(id)a0;
- (void)setAggressiveECMode:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)setListeningProperty:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)siriClientRecordStateChangedNotification:(BOOL)a0 recordingCount:(unsigned long long)a1;
- (void)siriClientsRecordingCompletionBlock:(id /* block */)a0;
- (void)speakerMuteStateChangedNotification:(BOOL)a0;
- (BOOL)speakerStateActive;
- (void)speakerStateChangedNotification:(id)a0;
- (BOOL)speakerStateMuted;
- (void)updateVoiceTriggerConfiguration:(id)a0;
- (void)voiceTriggerNotification:(id)a0;
- (void)voiceTriggerPastDataFramesAvailableCompletion:(id /* block */)a0;
- (id)voiceTriggerServerConnection;

@end
