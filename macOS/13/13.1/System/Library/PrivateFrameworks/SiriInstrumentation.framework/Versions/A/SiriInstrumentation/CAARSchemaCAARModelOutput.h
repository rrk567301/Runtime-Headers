@class NSArray, NSData;

@interface CAARSchemaCAARModelOutput : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actionModelOutputs;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearActionModelOutputs;
- (void)deleteActionModelOutputs;
- (void)addActionModelOutputs:(id)a0;
- (unsigned long long)actionModelOutputsCount;
- (id)actionModelOutputsAtIndex:(unsigned long long)a0;

@end
