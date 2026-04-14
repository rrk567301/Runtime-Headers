@class NSArray, NSData;

@interface IFTSchemaIFTValueExpressionArrayVariant : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *statementIds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addStatementId:(id)a0;
- (void)clearStatementId;
- (void)deleteStatementId;
- (id)statementIdAtIndex:(unsigned long long)a0;
- (unsigned long long)statementIdCount;

@end
