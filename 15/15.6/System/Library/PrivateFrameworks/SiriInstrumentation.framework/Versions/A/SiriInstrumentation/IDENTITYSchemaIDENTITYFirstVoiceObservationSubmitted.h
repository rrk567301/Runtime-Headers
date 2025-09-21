@class NSData, IDENTITYSchemaIDENTITYVoiceScoreCard;

@interface IDENTITYSchemaIDENTITYFirstVoiceObservationSubmitted : SISchemaInstrumentationMessage

@property (retain, nonatomic) IDENTITYSchemaIDENTITYVoiceScoreCard *voiceScoreCard;
@property (nonatomic) char hasVoiceScoreCard;
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
- (void)deleteVoiceScoreCard;
- (id)suppressMessageUnderConditions;

@end
