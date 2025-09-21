@class TTSSchemaTTSVoiceContext, NSData, SISchemaUUID, SISchemaVoiceSettings;

@interface TTSSchemaTTSVoiceFallbackOccurred : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaVoiceSettings *voiceSettings;
@property (nonatomic) BOOL hasVoiceSettings;
@property (retain, nonatomic) TTSSchemaTTSVoiceContext *context;
@property (nonatomic) BOOL hasContext;
@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteContext;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteContextId;
- (void)deleteVoiceSettings;

@end
