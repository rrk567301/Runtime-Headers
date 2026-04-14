@class NSArray, NSData;

@interface CAARSchemaCAARModelOutput : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actionModelOutputs;
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
- (id)actionModelOutputsAtIndex:(unsigned long long)a0;
- (unsigned long long)actionModelOutputsCount;
- (void)addActionModelOutputs:(id)a0;
- (void)clearActionModelOutputs;
- (void)deleteActionModelOutputs;

@end
