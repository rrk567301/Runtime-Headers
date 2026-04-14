@class NSData, SISchemaVoiceSettings, TTSSchemaTTSVoiceContext;

@interface TTSSchemaTTSVoiceFallbackOccurred : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaVoiceSettings *voiceSettings;
@property (nonatomic) BOOL hasVoiceSettings;
@property (retain, nonatomic) TTSSchemaTTSVoiceContext *context;
@property (nonatomic) BOOL hasContext;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteContext;
- (void)deleteVoiceSettings;
- (id)suppressMessageUnderConditions;

@end
