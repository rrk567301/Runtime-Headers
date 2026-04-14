@class NSData, IDENTITYSchemaIDENTITYVoiceScoreCard, IDENTITYSchemaIDENTITYIDScoreCard;

@interface IDENTITYSchemaIDENTITYScoreCardsGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) IDENTITYSchemaIDENTITYVoiceScoreCard *voiceScoreCard;
@property (nonatomic) BOOL hasVoiceScoreCard;
@property (retain, nonatomic) IDENTITYSchemaIDENTITYIDScoreCard *identityScoreCard;
@property (nonatomic) BOOL hasIdentityScoreCard;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteIdentityScoreCard;
- (void)deleteVoiceScoreCard;

@end
