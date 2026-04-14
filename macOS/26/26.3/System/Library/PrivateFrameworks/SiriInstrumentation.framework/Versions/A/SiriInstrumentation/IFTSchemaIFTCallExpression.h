@class NSString, NSArray, NSData;

@interface IFTSchemaIFTCallExpression : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *toolId;
@property (nonatomic) BOOL hasToolId;
@property (copy, nonatomic) NSArray *parameters;
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
- (unsigned long long)parametersCount;
- (void)clearParameters;
- (void)addParameters:(id)a0;
- (id)parametersAtIndex:(unsigned long long)a0;
- (void)deleteParameters;
- (void)deleteToolId;

@end
