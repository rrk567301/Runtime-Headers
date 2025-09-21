@class NSArray, NSData;

@interface ORCHSchemaORCHDeviceDynamicContext : SISchemaInstrumentationMessage {
    struct { unsigned char thermalState : 1; unsigned char motionActivity : 1; unsigned char timeSinceAssistantDaemonStartedInMs : 1; unsigned char headGesturesSupported : 1; unsigned char headGesturesEnabled : 1; unsigned char acceptProceedGesture : 1; unsigned char declineDismissGesture : 1; unsigned char isWifiEnabled : 1; unsigned char bluetoothState : 1; unsigned char flashlightLevel : 1; unsigned char isChatGPTEnabled : 1; unsigned char isSoundAnalysisEnabled : 1; } _has;
}

@property (nonatomic) int thermalState;
@property (nonatomic) char hasThermalState;
@property (nonatomic) int motionActivity;
@property (nonatomic) char hasMotionActivity;
@property (nonatomic) unsigned long long timeSinceAssistantDaemonStartedInMs;
@property (nonatomic) char hasTimeSinceAssistantDaemonStartedInMs;
@property (nonatomic) char headGesturesSupported;
@property (nonatomic) char hasHeadGesturesSupported;
@property (nonatomic) char headGesturesEnabled;
@property (nonatomic) char hasHeadGesturesEnabled;
@property (nonatomic) int acceptProceedGesture;
@property (nonatomic) char hasAcceptProceedGesture;
@property (nonatomic) int declineDismissGesture;
@property (nonatomic) char hasDeclineDismissGesture;
@property (nonatomic) char isWifiEnabled;
@property (nonatomic) char hasIsWifiEnabled;
@property (nonatomic) int bluetoothState;
@property (nonatomic) char hasBluetoothState;
@property (nonatomic) int flashlightLevel;
@property (nonatomic) char hasFlashlightLevel;
@property (nonatomic) char isChatGPTEnabled;
@property (nonatomic) char hasIsChatGPTEnabled;
@property (copy, nonatomic) NSArray *genAIAgentsEnableds;
@property (nonatomic) char isSoundAnalysisEnabled;
@property (nonatomic) char hasIsSoundAnalysisEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addGenAIAgentsEnabled:(int)a0;
- (void)clearGenAIAgentsEnabled;
- (void)deleteAcceptProceedGesture;
- (void)deleteBluetoothState;
- (void)deleteDeclineDismissGesture;
- (void)deleteFlashlightLevel;
- (void)deleteGenAIAgentsEnabled;
- (void)deleteHeadGesturesEnabled;
- (void)deleteHeadGesturesSupported;
- (void)deleteIsChatGPTEnabled;
- (void)deleteIsSoundAnalysisEnabled;
- (void)deleteIsWifiEnabled;
- (void)deleteMotionActivity;
- (void)deleteThermalState;
- (void)deleteTimeSinceAssistantDaemonStartedInMs;
- (int)genAIAgentsEnabledAtIndex:(unsigned long long)a0;
- (unsigned long long)genAIAgentsEnabledCount;
- (id)suppressMessageUnderConditions;

@end
