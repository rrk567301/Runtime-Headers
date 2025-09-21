@class NSArray, NSData;

@interface CAARSchemaCAARModelOutput : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actionModelOutputs;
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
- (id)actionModelOutputsAtIndex:(unsigned long long)a0;
- (unsigned long long)actionModelOutputsCount;
- (void)addActionModelOutputs:(id)a0;
- (void)clearActionModelOutputs;
- (void)deleteActionModelOutputs;
- (id)suppressMessageUnderConditions;

@end
