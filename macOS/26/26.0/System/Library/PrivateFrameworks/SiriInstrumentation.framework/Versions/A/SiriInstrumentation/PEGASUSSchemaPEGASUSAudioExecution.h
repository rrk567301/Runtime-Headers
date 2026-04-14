@class PEGASUSSchemaPEGASUSAudioQueueStateInfo, PEGASUSSchemaPEGASUSAudioPlaybackSignal, PEGASUSSchemaPEGASUSAudioUnderstanding, NSData;

@interface PEGASUSSchemaPEGASUSAudioExecution : SISchemaInstrumentationMessage

@property (retain, nonatomic) PEGASUSSchemaPEGASUSAudioPlaybackSignal *audioPlaybackSignal;
@property (nonatomic) BOOL hasAudioPlaybackSignal;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSAudioUnderstanding *audioUnderstanding;
@property (nonatomic) BOOL hasAudioUnderstanding;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSAudioQueueStateInfo *audioQueueStateInfo;
@property (nonatomic) BOOL hasAudioQueueStateInfo;
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
- (void)deleteAudioPlaybackSignal;
- (void)deleteAudioQueueStateInfo;
- (void)deleteAudioUnderstanding;

@end
