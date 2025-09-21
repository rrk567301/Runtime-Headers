@class NSData, SISchemaUUID;

@interface NLXSchemaCDMUserWantedToPause : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *taskId;
@property (nonatomic) BOOL hasTaskId;
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
- (void)deleteTaskId;

@end
