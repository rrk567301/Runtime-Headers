@class TTSSchemaTTSAudioInterface, NSData, TTSSchemaTTSVoiceContext;

@interface TTSSchemaTTSSpeechStarted : SISchemaInstrumentationMessage {
    struct { unsigned char audioOutputRoute : 1; unsigned char customerPerceivedLatencyInSecond : 1; unsigned char synthesisSource : 1; unsigned char synthesisEffect : 1; unsigned char volume : 1; unsigned char thermalState : 1; unsigned char assetSelectionLatencyInSecond : 1; unsigned char audioQueueLatencyInSecond : 1; unsigned char isWarmStart : 1; unsigned char llmStylePrompt : 1; unsigned char thermalLevel : 1; } _has;
}

@property (nonatomic) int audioOutputRoute;
@property (nonatomic) BOOL hasAudioOutputRoute;
@property (nonatomic) float customerPerceivedLatencyInSecond;
@property (nonatomic) BOOL hasCustomerPerceivedLatencyInSecond;
@property (nonatomic) int synthesisSource;
@property (nonatomic) BOOL hasSynthesisSource;
@property (retain, nonatomic) TTSSchemaTTSVoiceContext *voiceContext;
@property (nonatomic) BOOL hasVoiceContext;
@property (nonatomic) int synthesisEffect;
@property (nonatomic) BOOL hasSynthesisEffect;
@property (retain, nonatomic) TTSSchemaTTSAudioInterface *audioInterface;
@property (nonatomic) BOOL hasAudioInterface;
@property (nonatomic) float volume;
@property (nonatomic) BOOL hasVolume;
@property (nonatomic) int thermalState;
@property (nonatomic) BOOL hasThermalState;
@property (nonatomic) float assetSelectionLatencyInSecond;
@property (nonatomic) BOOL hasAssetSelectionLatencyInSecond;
@property (nonatomic) float audioQueueLatencyInSecond;
@property (nonatomic) BOOL hasAudioQueueLatencyInSecond;
@property (nonatomic) BOOL isWarmStart;
@property (nonatomic) BOOL hasIsWarmStart;
@property (nonatomic) int llmStylePrompt;
@property (nonatomic) BOOL hasLlmStylePrompt;
@property (nonatomic) int thermalLevel;
@property (nonatomic) BOOL hasThermalLevel;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteAudioQueueLatencyInSecond;
- (void)deleteAssetSelectionLatencyInSecond;
- (void)deleteAudioInterface;
- (void)deleteAudioOutputRoute;
- (void)deleteCustomerPerceivedLatencyInSecond;
- (void)deleteIsWarmStart;
- (void)deleteLlmStylePrompt;
- (void)deleteSynthesisEffect;
- (void)deleteSynthesisSource;
- (void)deleteThermalLevel;
- (void)deleteThermalState;
- (void)deleteVoiceContext;
- (void)deleteVolume;

@end
