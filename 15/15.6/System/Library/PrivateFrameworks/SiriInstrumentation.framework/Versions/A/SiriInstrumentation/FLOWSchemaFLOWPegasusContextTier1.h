@class PEGASUSSchemaPEGASUSIntentTier1, FLOWSchemaFLOWWebAnswerExecutionTier1, FLOWSchemaFLOWMapsExecutionTier1, NSData, SISchemaUUID, FLOWSchemaFLOWKGQAExecutionTier1, FLOWSchemaFLOWSportsExecutionTier1;

@interface FLOWSchemaFLOWPegasusContextTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSIntentTier1 *intentTier1;
@property (nonatomic) char hasIntentTier1;
@property (retain, nonatomic) FLOWSchemaFLOWKGQAExecutionTier1 *kgQAExecutionTier1;
@property (nonatomic) char hasKgQAExecutionTier1;
@property (retain, nonatomic) FLOWSchemaFLOWWebAnswerExecutionTier1 *webAnswerExecutionTier1;
@property (nonatomic) char hasWebAnswerExecutionTier1;
@property (retain, nonatomic) FLOWSchemaFLOWSportsExecutionTier1 *sportsExecutionTier1;
@property (nonatomic) char hasSportsExecutionTier1;
@property (retain, nonatomic) FLOWSchemaFLOWMapsExecutionTier1 *mapsExecutionTier1;
@property (nonatomic) char hasMapsExecutionTier1;
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
- (void)deleteIntentTier1;
- (void)deleteKgQAExecutionTier1;
- (void)deleteLinkId;
- (void)deleteMapsExecutionTier1;
- (void)deleteSportsExecutionTier1;
- (void)deleteWebAnswerExecutionTier1;
- (id)suppressMessageUnderConditions;

@end
