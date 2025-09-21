@class SISchemaUUID, PEGASUSSchemaPEGASUSKGQAExecutionTier1, PEGASUSSchemaPEGASUSMapsExecutionTier1, PEGASUSSchemaPEGASUSDeviceExpertExecutionTier1, NSData, PEGASUSSchemaPEGASUSVideoExecutionTier1, PEGASUSSchemaPEGASUSAlternateQuerySuggestionTier1, PEGASUSSchemaPEGASUSSportsExecutionTier1, PEGASUSSchemaPEGASUSIntentTier1, PEGASUSSchemaPEGASUSWebAnswerExecutionTier1, PEGASUSSchemaPEGASUSAudioExecutionTier1;

@interface PEGASUSSchemaPEGASUSRequestEndedTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSIntentTier1 *intentTier1;
@property (nonatomic) BOOL hasIntentTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSKGQAExecutionTier1 *kgQAExecutionTier1;
@property (nonatomic) BOOL hasKgQAExecutionTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSWebAnswerExecutionTier1 *webAnswerExecutionTier1;
@property (nonatomic) BOOL hasWebAnswerExecutionTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSSportsExecutionTier1 *sportsExecutionTier1;
@property (nonatomic) BOOL hasSportsExecutionTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSMapsExecutionTier1 *mapsExecutionTier1;
@property (nonatomic) BOOL hasMapsExecutionTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSAudioExecutionTier1 *audioExecutionTier1;
@property (nonatomic) BOOL hasAudioExecutionTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSVideoExecutionTier1 *videoExecutionTier1;
@property (nonatomic) BOOL hasVideoExecutionTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSAlternateQuerySuggestionTier1 *alternateQuerySuggestionTier1;
@property (nonatomic) BOOL hasAlternateQuerySuggestionTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSDeviceExpertExecutionTier1 *deviceExpertExecutionTier1;
@property (nonatomic) BOOL hasDeviceExpertExecutionTier1;
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
- (void)deleteAlternateQuerySuggestionTier1;
- (void)deleteAudioExecutionTier1;
- (void)deleteDeviceExpertExecutionTier1;
- (void)deleteIntentTier1;
- (void)deleteKgQAExecutionTier1;
- (void)deleteLinkId;
- (void)deleteMapsExecutionTier1;
- (void)deleteSportsExecutionTier1;
- (void)deleteVideoExecutionTier1;
- (void)deleteWebAnswerExecutionTier1;

@end
