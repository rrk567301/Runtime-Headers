@class NSString, SISchemaVersion, NSData;

@interface CAMSchemaCAMModelId : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *modelName;
@property (nonatomic) BOOL hasModelName;
@property (retain, nonatomic) SISchemaVersion *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
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
- (void)deleteModelName;
- (void)deleteModelVersion;

@end
