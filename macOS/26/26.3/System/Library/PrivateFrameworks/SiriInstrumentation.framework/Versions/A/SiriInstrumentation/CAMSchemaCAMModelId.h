@class NSString, SISchemaVersion, NSData;

@interface CAMSchemaCAMModelId : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *modelName;
@property (nonatomic) BOOL hasModelName;
@property (retain, nonatomic) SISchemaVersion *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteModelName;
- (void)deleteModelVersion;

@end
