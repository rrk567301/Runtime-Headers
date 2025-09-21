@class NSString, NSArray, NSData;

@interface IFTSchemaIFTCallExpression : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *toolId;
@property (nonatomic) char hasToolId;
@property (copy, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)parametersCount;
- (void)clearParameters;
- (void)addParameters:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)parametersAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteParameters;
- (void)deleteToolId;
- (id)suppressMessageUnderConditions;

@end
