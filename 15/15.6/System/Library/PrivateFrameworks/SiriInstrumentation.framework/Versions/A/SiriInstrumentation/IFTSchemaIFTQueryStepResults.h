@class IFTSchemaIFTQueryResults, IFTSchemaIFTStatementId, NSData;

@interface IFTSchemaIFTQueryStepResults : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (retain, nonatomic) IFTSchemaIFTStatementId *originProgramStatementId;
@property (nonatomic) char hasOriginProgramStatementId;
@property (retain, nonatomic) IFTSchemaIFTQueryResults *queryResults;
@property (nonatomic) char hasQueryResults;
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
- (void)deleteExists;
- (void)deleteOriginProgramStatementId;
- (void)deleteQueryResults;
- (id)suppressMessageUnderConditions;

@end
