@class IFTSchemaIFTStatementId, NSData, IFTSchemaIFTExpression, IFTSchemaIFTASTFlatExpr;

@interface IFTSchemaIFTProgramStatement : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTStatementId *statementId;
@property (nonatomic) BOOL hasStatementId;
@property (retain, nonatomic) IFTSchemaIFTASTFlatExpr *expression;
@property (nonatomic) BOOL hasExpression;
@property (retain, nonatomic) IFTSchemaIFTExpression *expressionName;
@property (nonatomic) BOOL hasExpressionName;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteExpression;
- (void)deleteExpressionName;
- (void)deleteStatementId;
- (id)suppressMessageUnderConditions;

@end
