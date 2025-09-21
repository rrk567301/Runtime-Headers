@class NSData, QDSchemaQDEntityType;

@interface QDSchemaQDToolOutputDefinition : SISchemaInstrumentationMessage

@property (retain, nonatomic) QDSchemaQDEntityType *entityType;
@property (nonatomic) char hasEntityType;
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
- (void)deleteEntityType;
- (id)suppressMessageUnderConditions;

@end
