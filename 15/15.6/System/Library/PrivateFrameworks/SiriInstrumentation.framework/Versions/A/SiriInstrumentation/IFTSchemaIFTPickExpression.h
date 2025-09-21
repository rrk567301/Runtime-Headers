@class NSData, IFTSchemaIFTStatementId;

@interface IFTSchemaIFTPickExpression : SISchemaInstrumentationMessage {
    struct { unsigned char index : 1; } _has;
}

@property (retain, nonatomic) IFTSchemaIFTStatementId *statementId;
@property (nonatomic) char hasStatementId;
@property (nonatomic) long long index;
@property (nonatomic) char hasIndex;
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
- (void)deleteIndex;
- (void)deleteStatementId;
- (id)suppressMessageUnderConditions;

@end
