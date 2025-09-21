@class NSString, IFTSchemaIFTStatementId, NSData;

@interface IFTSchemaIFTActionParameterContext : SISchemaInstrumentationMessage {
    struct { unsigned char actionClass : 1; } _has;
}

@property (retain, nonatomic) IFTSchemaIFTStatementId *statementId;
@property (nonatomic) char hasStatementId;
@property (copy, nonatomic) NSString *toolId;
@property (nonatomic) char hasToolId;
@property (nonatomic) int actionClass;
@property (nonatomic) char hasActionClass;
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
- (void)deleteActionClass;
- (void)deleteStatementId;
- (void)deleteToolId;
- (id)suppressMessageUnderConditions;

@end
