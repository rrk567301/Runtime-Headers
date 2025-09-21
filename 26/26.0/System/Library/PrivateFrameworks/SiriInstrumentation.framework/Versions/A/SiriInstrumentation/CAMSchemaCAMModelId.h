@class NSString, SISchemaVersion, NSData;

@interface CAMSchemaCAMModelId : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *modelName;
@property (nonatomic) BOOL hasModelName;
@property (retain, nonatomic) SISchemaVersion *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
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
- (void)deleteModelName;
- (void)deleteModelVersion;

@end
