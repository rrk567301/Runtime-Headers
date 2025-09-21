@class NSString, IFTSchemaIFTStatementId, NSData;

@interface IFTSchemaIFTCallExpressionParameters : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *callParameterName;
@property (nonatomic) char hasCallParameterName;
@property (retain, nonatomic) IFTSchemaIFTStatementId *statementId;
@property (nonatomic) char hasStatementId;
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
- (void)deleteCallParameterName;
- (void)deleteStatementId;
- (id)suppressMessageUnderConditions;

@end
