@class SISchemaUUID, PEGASUSSchemaPEGASUSKGQAExecutionTier1, PEGASUSSchemaPEGASUSMapsExecutionTier1, NSData, PEGASUSSchemaPEGASUSVideoExecutionTier1, PEGASUSSchemaPEGASUSAlternateQuerySuggestionTier1, PEGASUSSchemaPEGASUSSportsExecutionTier1, PEGASUSSchemaPEGASUSIntentTier1, PEGASUSSchemaPEGASUSWebAnswerExecutionTier1, PEGASUSSchemaPEGASUSAudioExecutionTier1;

@interface PEGASUSSchemaPEGASUSRequestEndedTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSIntentTier1 *intentTier1;
@property (nonatomic) char hasIntentTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSKGQAExecutionTier1 *kgQAExecutionTier1;
@property (nonatomic) char hasKgQAExecutionTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSWebAnswerExecutionTier1 *webAnswerExecutionTier1;
@property (nonatomic) char hasWebAnswerExecutionTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSSportsExecutionTier1 *sportsExecutionTier1;
@property (nonatomic) char hasSportsExecutionTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSMapsExecutionTier1 *mapsExecutionTier1;
@property (nonatomic) char hasMapsExecutionTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSAudioExecutionTier1 *audioExecutionTier1;
@property (nonatomic) char hasAudioExecutionTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSVideoExecutionTier1 *videoExecutionTier1;
@property (nonatomic) char hasVideoExecutionTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSAlternateQuerySuggestionTier1 *alternateQuerySuggestionTier1;
@property (nonatomic) char hasAlternateQuerySuggestionTier1;
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
- (void)deleteAlternateQuerySuggestionTier1;
- (void)deleteAudioExecutionTier1;
- (void)deleteIntentTier1;
- (void)deleteKgQAExecutionTier1;
- (void)deleteLinkId;
- (void)deleteMapsExecutionTier1;
- (void)deleteSportsExecutionTier1;
- (void)deleteVideoExecutionTier1;
- (void)deleteWebAnswerExecutionTier1;
- (id)suppressMessageUnderConditions;

@end
