@protocol GKViceroyVoiceChatService, GKVoiceChatClient;

@interface GKVoiceChatService : NSObject

@property (retain, nonatomic) id<GKViceroyVoiceChatService> voiceChatService;
@property id<GKVoiceChatClient> client;
@property (nonatomic, getter=isMicrophoneMuted) char microphoneMuted;
@property (nonatomic) float remoteParticipantVolume;
@property (nonatomic, getter=isOutputMeteringEnabled) char outputMeteringEnabled;
@property (nonatomic, getter=isInputMeteringEnabled) char inputMeteringEnabled;
@property (readonly) float outputMeterLevel;
@property (readonly) float inputMeterLevel;

+ (void)initialize;
+ (id)defaultVoiceChatService;
+ (char)isVoIPAllowed;

- (id)init;
- (void).cxx_destruct;
- (void)receivedRealTimeData:(id)a0 fromParticipantID:(id)a1;
- (void)receivedData:(id)a0 fromParticipantID:(id)a1;
- (void)stopVoiceChatWithParticipantID:(id)a0;
- (char)acceptCallID:(long long)a0 error:(id *)a1;
- (void)denyCallID:(long long)a0;
- (char)startVoiceChatWithParticipantID:(id)a0 error:(id *)a1;

@end
