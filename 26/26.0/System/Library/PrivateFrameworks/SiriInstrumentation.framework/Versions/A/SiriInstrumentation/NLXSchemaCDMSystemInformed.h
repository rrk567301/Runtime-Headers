@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaCDMSystemInformed : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *taskId;
@property (nonatomic) BOOL hasTaskId;
@property (copy, nonatomic) NSArray *entities;
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
- (void)addEntities:(id)a0;
- (void)clearEntities;
- (id)entitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)entitiesCount;
- (void)deleteEntities;
- (void)deleteTaskId;

@end
