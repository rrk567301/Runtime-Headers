@class GKVoiceChatServicePrivate;

@interface DefaultGKVoiceChatService : NSObject <GKViceroyVoiceChatService>

@property (retain, nonatomic) GKVoiceChatServicePrivate *service;
@property (getter=isInputMeteringEnabled) char inputMeteringEnabled;
@property (readonly, nonatomic) float inputMeterLevel;
@property (getter=isMicrophoneMuted) char microphoneMuted;
@property (getter=isOutputMeteringEnabled) char outputMeteringEnabled;
@property (readonly, nonatomic) float outputMeterLevel;
@property float remoteParticipantVolume;

- (void).cxx_destruct;
- (id)getClient;
- (void)receivedData:(id)a0 fromParticipantID:(id)a1;
- (void)stopVoiceChatWithParticipantID:(id)a0;
- (char)acceptCallID:(long long)a0 error:(id *)a1;
- (void)denyCallID:(long long)a0;
- (void)setClient:(id)a0 gkVoiceChatService:(id)a1;
- (char)startVoiceChatWithParticipantID:(id)a0 error:(id *)a1;

@end
