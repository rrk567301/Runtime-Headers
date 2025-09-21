@class NSData, SISchemaUUID;

@interface NLXSchemaCDMUserWantedToProceed : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *taskId;
@property (nonatomic) char hasTaskId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteTaskId;
- (id)suppressMessageUnderConditions;

@end
