@class NSString, SISchemaVersion, NSData;

@interface CAMSchemaCAMModelId : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *modelName;
@property (nonatomic) char hasModelName;
@property (retain, nonatomic) SISchemaVersion *modelVersion;
@property (nonatomic) char hasModelVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteModelName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteModelVersion;
- (id)suppressMessageUnderConditions;

@end
