@class NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentPhoneCallSignals : SISchemaInstrumentationMessage {
    struct { unsigned char appContactAffinityScoreForPhoneCall : 1; unsigned char appContactAffinityScoreForPhoneCallUsingSiri : 1; unsigned char appContactAffinityScoreForPhoneCallReceived : 1; unsigned char appContactFreqForPhoneCall2Min : 1; unsigned char appContactFreqForPhoneCall10Min : 1; unsigned char appContactFreqForPhoneCall1Hr : 1; unsigned char appContactFreqForPhoneCall6Hr : 1; unsigned char appContactFreqForPhoneCall1Day : 1; unsigned char appContactFreqForPhoneCall7Day : 1; unsigned char appContactFreqForPhoneCall28Day : 1; unsigned char appContactFreqForPhoneCallInf : 1; unsigned char appContactFreqForPhoneCall : 1; unsigned char appContactFreqForPhoneCallUsingSiri : 1; unsigned char appContactFreqForPhoneCallHaptic : 1; } _has;
}

@property (nonatomic) float appContactAffinityScoreForPhoneCall;
@property (nonatomic) char hasAppContactAffinityScoreForPhoneCall;
@property (nonatomic) float appContactAffinityScoreForPhoneCallUsingSiri;
@property (nonatomic) char hasAppContactAffinityScoreForPhoneCallUsingSiri;
@property (nonatomic) float appContactAffinityScoreForPhoneCallReceived;
@property (nonatomic) char hasAppContactAffinityScoreForPhoneCallReceived;
@property (nonatomic) int appContactFreqForPhoneCall2Min;
@property (nonatomic) char hasAppContactFreqForPhoneCall2Min;
@property (nonatomic) int appContactFreqForPhoneCall10Min;
@property (nonatomic) char hasAppContactFreqForPhoneCall10Min;
@property (nonatomic) int appContactFreqForPhoneCall1Hr;
@property (nonatomic) char hasAppContactFreqForPhoneCall1Hr;
@property (nonatomic) int appContactFreqForPhoneCall6Hr;
@property (nonatomic) char hasAppContactFreqForPhoneCall6Hr;
@property (nonatomic) int appContactFreqForPhoneCall1Day;
@property (nonatomic) char hasAppContactFreqForPhoneCall1Day;
@property (nonatomic) int appContactFreqForPhoneCall7Day;
@property (nonatomic) char hasAppContactFreqForPhoneCall7Day;
@property (nonatomic) int appContactFreqForPhoneCall28Day;
@property (nonatomic) char hasAppContactFreqForPhoneCall28Day;
@property (nonatomic) int appContactFreqForPhoneCallInf;
@property (nonatomic) char hasAppContactFreqForPhoneCallInf;
@property (nonatomic) int appContactFreqForPhoneCall;
@property (nonatomic) char hasAppContactFreqForPhoneCall;
@property (nonatomic) int appContactFreqForPhoneCallUsingSiri;
@property (nonatomic) char hasAppContactFreqForPhoneCallUsingSiri;
@property (nonatomic) int appContactFreqForPhoneCallHaptic;
@property (nonatomic) char hasAppContactFreqForPhoneCallHaptic;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAppContactAffinityScoreForPhoneCall;
- (void)deleteAppContactAffinityScoreForPhoneCallReceived;
- (void)deleteAppContactAffinityScoreForPhoneCallUsingSiri;
- (void)deleteAppContactFreqForPhoneCall;
- (void)deleteAppContactFreqForPhoneCall10Min;
- (void)deleteAppContactFreqForPhoneCall1Day;
- (void)deleteAppContactFreqForPhoneCall1Hr;
- (void)deleteAppContactFreqForPhoneCall28Day;
- (void)deleteAppContactFreqForPhoneCall2Min;
- (void)deleteAppContactFreqForPhoneCall6Hr;
- (void)deleteAppContactFreqForPhoneCall7Day;
- (void)deleteAppContactFreqForPhoneCallHaptic;
- (void)deleteAppContactFreqForPhoneCallInf;
- (void)deleteAppContactFreqForPhoneCallUsingSiri;
- (id)suppressMessageUnderConditions;

@end
