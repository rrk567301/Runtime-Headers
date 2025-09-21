@class TTSSchemaTTSAudioInterface, NSData, TTSSchemaTTSVoiceContext;

@interface TTSSchemaTTSSpeechStarted : SISchemaInstrumentationMessage {
    struct { unsigned char audioOutputRoute : 1; unsigned char customerPerceivedLatencyInSecond : 1; unsigned char synthesisSource : 1; unsigned char synthesisEffect : 1; unsigned char volume : 1; unsigned char thermalState : 1; unsigned char assetSelectionLatencyInSecond : 1; unsigned char audioQueueLatencyInSecond : 1; unsigned char isWarmStart : 1; } _has;
}

@property (nonatomic) int audioOutputRoute;
@property (nonatomic) char hasAudioOutputRoute;
@property (nonatomic) float customerPerceivedLatencyInSecond;
@property (nonatomic) char hasCustomerPerceivedLatencyInSecond;
@property (nonatomic) int synthesisSource;
@property (nonatomic) char hasSynthesisSource;
@property (retain, nonatomic) TTSSchemaTTSVoiceContext *voiceContext;
@property (nonatomic) char hasVoiceContext;
@property (nonatomic) int synthesisEffect;
@property (nonatomic) char hasSynthesisEffect;
@property (retain, nonatomic) TTSSchemaTTSAudioInterface *audioInterface;
@property (nonatomic) char hasAudioInterface;
@property (nonatomic) float volume;
@property (nonatomic) char hasVolume;
@property (nonatomic) int thermalState;
@property (nonatomic) char hasThermalState;
@property (nonatomic) float assetSelectionLatencyInSecond;
@property (nonatomic) char hasAssetSelectionLatencyInSecond;
@property (nonatomic) float audioQueueLatencyInSecond;
@property (nonatomic) char hasAudioQueueLatencyInSecond;
@property (nonatomic) char isWarmStart;
@property (nonatomic) char hasIsWarmStart;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAudioQueueLatencyInSecond;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAssetSelectionLatencyInSecond;
- (void)deleteAudioInterface;
- (void)deleteAudioOutputRoute;
- (void)deleteCustomerPerceivedLatencyInSecond;
- (void)deleteIsWarmStart;
- (void)deleteSynthesisEffect;
- (void)deleteSynthesisSource;
- (void)deleteThermalState;
- (void)deleteVoiceContext;
- (void)deleteVolume;
- (id)suppressMessageUnderConditions;

@end
