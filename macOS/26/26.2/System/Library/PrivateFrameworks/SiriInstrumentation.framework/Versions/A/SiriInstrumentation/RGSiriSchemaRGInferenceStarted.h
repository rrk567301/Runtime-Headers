@class NSData, SISchemaVersion;

@interface RGSiriSchemaRGInferenceStarted : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaVersion *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (retain, nonatomic) SISchemaVersion *promptVersion;
@property (nonatomic) BOOL hasPromptVersion;
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
- (void)deleteModelVersion;
- (void)deletePromptVersion;

@end
