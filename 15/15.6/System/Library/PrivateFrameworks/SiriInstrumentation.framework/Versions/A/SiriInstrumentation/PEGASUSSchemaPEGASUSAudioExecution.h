@class PEGASUSSchemaPEGASUSAudioQueueStateInfo, PEGASUSSchemaPEGASUSAudioPlaybackSignal, PEGASUSSchemaPEGASUSAudioUnderstanding, NSData;

@interface PEGASUSSchemaPEGASUSAudioExecution : SISchemaInstrumentationMessage

@property (retain, nonatomic) PEGASUSSchemaPEGASUSAudioPlaybackSignal *audioPlaybackSignal;
@property (nonatomic) char hasAudioPlaybackSignal;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSAudioUnderstanding *audioUnderstanding;
@property (nonatomic) char hasAudioUnderstanding;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSAudioQueueStateInfo *audioQueueStateInfo;
@property (nonatomic) char hasAudioQueueStateInfo;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAudioPlaybackSignal;
- (void)deleteAudioQueueStateInfo;
- (void)deleteAudioUnderstanding;
- (id)suppressMessageUnderConditions;

@end
