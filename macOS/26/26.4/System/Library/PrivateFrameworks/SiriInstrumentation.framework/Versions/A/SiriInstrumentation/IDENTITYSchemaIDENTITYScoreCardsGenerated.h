@class NSData, IDENTITYSchemaIDENTITYVoiceScoreCard, IDENTITYSchemaIDENTITYIDScoreCard;

@interface IDENTITYSchemaIDENTITYScoreCardsGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) IDENTITYSchemaIDENTITYVoiceScoreCard *voiceScoreCard;
@property (nonatomic) BOOL hasVoiceScoreCard;
@property (retain, nonatomic) IDENTITYSchemaIDENTITYIDScoreCard *identityScoreCard;
@property (nonatomic) BOOL hasIdentityScoreCard;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIdentityScoreCard;
- (void)deleteVoiceScoreCard;

@end
