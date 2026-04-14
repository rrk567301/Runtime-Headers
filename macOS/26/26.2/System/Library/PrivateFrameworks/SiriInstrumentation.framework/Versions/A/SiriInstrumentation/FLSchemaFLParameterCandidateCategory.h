@class NSData, SISchemaUUID;

@interface FLSchemaFLParameterCandidateCategory : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *parameterNameId;
@property (nonatomic) BOOL hasParameterNameId;
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
- (void)deleteParameterNameId;

@end
