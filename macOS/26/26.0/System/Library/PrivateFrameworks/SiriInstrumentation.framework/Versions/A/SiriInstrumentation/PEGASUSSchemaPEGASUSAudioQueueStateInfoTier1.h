@class PEGASUSSchemaPEGASUSAudioQueueStateItemTier1, NSData;

@interface PEGASUSSchemaPEGASUSAudioQueueStateInfoTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) PEGASUSSchemaPEGASUSAudioQueueStateItemTier1 *audioQueueStateItemTier1;
@property (nonatomic) BOOL hasAudioQueueStateItemTier1;
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
- (void)deleteAudioQueueStateItemTier1;

@end
