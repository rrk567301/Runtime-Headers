@class NSArray, NSData, IFTSchemaIFTActionParameterContext, IFTSchemaIFTStatementId;

@interface IFTSchemaIFTQueryStep : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char payloadType : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (retain, nonatomic) IFTSchemaIFTStatementId *statementId;
@property (nonatomic) BOOL hasStatementId;
@property (copy, nonatomic) NSArray *queries;
@property (retain, nonatomic) IFTSchemaIFTActionParameterContext *context;
@property (nonatomic) BOOL hasContext;
@property (nonatomic) int payloadType;
@property (nonatomic) BOOL hasPayloadType;
@property (readonly, nonatomic) NSData *jsonData;

- (void)deleteExists;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)deleteContext;
- (unsigned long long)hash;
- (id)queriesAtIndex:(unsigned long long)a0;
- (void)addQueries:(id)a0;
- (void)clearQueries;
- (void)deletePayloadType;
- (void)deleteQueries;
- (void)deleteStatementId;
- (unsigned long long)queriesCount;

@end
