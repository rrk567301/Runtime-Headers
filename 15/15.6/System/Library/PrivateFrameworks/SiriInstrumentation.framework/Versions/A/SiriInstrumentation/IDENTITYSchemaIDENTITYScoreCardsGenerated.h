@class NSData, IDENTITYSchemaIDENTITYVoiceScoreCard, IDENTITYSchemaIDENTITYIDScoreCard;

@interface IDENTITYSchemaIDENTITYScoreCardsGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) IDENTITYSchemaIDENTITYVoiceScoreCard *voiceScoreCard;
@property (nonatomic) char hasVoiceScoreCard;
@property (retain, nonatomic) IDENTITYSchemaIDENTITYIDScoreCard *identityScoreCard;
@property (nonatomic) char hasIdentityScoreCard;
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
- (void)deleteIdentityScoreCard;
- (void)deleteVoiceScoreCard;
- (id)suppressMessageUnderConditions;

@end
