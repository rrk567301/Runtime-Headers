@class IFTSchemaIFTStatementId, NSData, IFTSchemaIFTExpression, IFTSchemaIFTASTFlatExpr;

@interface IFTSchemaIFTProgramStatement : SISchemaInstrumentationMessage {
    struct { unsigned char isRoot : 1; } _has;
}

@property (retain, nonatomic) IFTSchemaIFTStatementId *statementId;
@property (nonatomic) char hasStatementId;
@property (retain, nonatomic) IFTSchemaIFTASTFlatExpr *expression;
@property (nonatomic) char hasExpression;
@property (retain, nonatomic) IFTSchemaIFTExpression *expressionName;
@property (nonatomic) char hasExpressionName;
@property (nonatomic) char isRoot;
@property (nonatomic) char hasIsRoot;
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
- (void)deleteExpression;
- (void)deleteExpressionName;
- (void)deleteIsRoot;
- (void)deleteStatementId;
- (id)suppressMessageUnderConditions;

@end
