@class NSData, SISchemaVersion;

@interface RGSiriSchemaRGInferenceStarted : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaVersion *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (retain, nonatomic) SISchemaVersion *promptVersion;
@property (nonatomic) BOOL hasPromptVersion;
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
- (void)deleteModelVersion;
- (void)deletePromptVersion;

@end
