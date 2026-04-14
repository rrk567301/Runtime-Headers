@class NSArray, NSData;

@interface FLOWLINKSchemaFLOWLINKActionParametersUpdated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *parameters;
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
- (unsigned long long)parametersCount;
- (void)clearParameters;
- (void)addParameters:(id)a0;
- (id)parametersAtIndex:(unsigned long long)a0;
- (void)deleteParameters;

@end
