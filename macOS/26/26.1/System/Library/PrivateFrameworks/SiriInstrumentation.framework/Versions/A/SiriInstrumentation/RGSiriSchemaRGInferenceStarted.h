@class NSData, SISchemaVersion;

@interface RGSiriSchemaRGInferenceStarted : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaVersion *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (retain, nonatomic) SISchemaVersion *promptVersion;
@property (nonatomic) BOOL hasPromptVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteModelVersion;
- (void)deletePromptVersion;

@end
