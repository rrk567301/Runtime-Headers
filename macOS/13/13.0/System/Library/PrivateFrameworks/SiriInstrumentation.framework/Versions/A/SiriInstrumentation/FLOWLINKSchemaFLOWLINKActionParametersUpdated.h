@class NSArray, NSData;

@interface FLOWLINKSchemaFLOWLINKActionParametersUpdated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)parametersCount;
- (id)initWithJSON:(id)a0;
- (void)clearParameters;
- (void)addParameters:(id)a0;
- (id)parametersAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteParameters;

@end
