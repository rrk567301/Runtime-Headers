@class NSString, IFTSchemaIFTStatementId, NSData;

@interface IFTSchemaIFTActionParameterContext : SISchemaInstrumentationMessage {
    struct { unsigned char actionClass : 1; } _has;
}

@property (retain, nonatomic) IFTSchemaIFTStatementId *statementId;
@property (nonatomic) BOOL hasStatementId;
@property (copy, nonatomic) NSString *toolId;
@property (nonatomic) BOOL hasToolId;
@property (nonatomic) int actionClass;
@property (nonatomic) BOOL hasActionClass;
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
- (void)deleteActionClass;
- (void)deleteStatementId;
- (void)deleteToolId;

@end
