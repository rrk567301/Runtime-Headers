@class IFTSchemaIFTStatementId, NSData, IFTSchemaIFTExpression, IFTSchemaIFTASTFlatExpr;

@interface IFTSchemaIFTProgramStatement : SISchemaInstrumentationMessage {
    struct { unsigned char isRoot : 1; } _has;
}

@property (retain, nonatomic) IFTSchemaIFTStatementId *statementId;
@property (nonatomic) BOOL hasStatementId;
@property (retain, nonatomic) IFTSchemaIFTASTFlatExpr *expression;
@property (nonatomic) BOOL hasExpression;
@property (retain, nonatomic) IFTSchemaIFTExpression *expressionName;
@property (nonatomic) BOOL hasExpressionName;
@property (nonatomic) BOOL isRoot;
@property (nonatomic) BOOL hasIsRoot;
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
- (void)deleteExpression;
- (void)deleteExpressionName;
- (void)deleteIsRoot;
- (void)deleteStatementId;

@end
