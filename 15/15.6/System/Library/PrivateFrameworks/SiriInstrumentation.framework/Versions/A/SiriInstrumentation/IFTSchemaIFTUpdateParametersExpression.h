@class NSArray, IFTSchemaIFTStatementId, NSData;

@interface IFTSchemaIFTUpdateParametersExpression : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTStatementId *callStatementId;
@property (nonatomic) char hasCallStatementId;
@property (copy, nonatomic) NSArray *updates;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)updatesAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addUpdates:(id)a0;
- (void)clearUpdates;
- (void)deleteCallStatementId;
- (void)deleteUpdates;
- (id)suppressMessageUnderConditions;
- (unsigned long long)updatesCount;

@end
