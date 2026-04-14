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

- (id)suppressMessageUnderConditions;
- (void)deleteExists;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)deleteContext;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)queriesAtIndex:(unsigned long long)a0;
- (void)addQueries:(id)a0;
- (void)clearQueries;
- (void)deletePayloadType;
- (void)deleteQueries;
- (void)deleteStatementId;
- (unsigned long long)queriesCount;

@end
