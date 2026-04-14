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

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExpression;
- (void)deleteExpressionName;
- (void)deleteIsRoot;
- (void)deleteStatementId;

@end
