@class PEGASUSSchemaPEGASUSAudioQueueStateItemTier1, NSData;

@interface PEGASUSSchemaPEGASUSAudioQueueStateInfoTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) PEGASUSSchemaPEGASUSAudioQueueStateItemTier1 *audioQueueStateItemTier1;
@property (nonatomic) BOOL hasAudioQueueStateItemTier1;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAudioQueueStateItemTier1;

@end
