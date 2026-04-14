@class NSString, NSArray, IFTSchemaIFTStatementOutcome, NSData, IFTSchemaIFTStatementId;

@interface IFTSchemaIFTSystemResponse : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (retain, nonatomic) IFTSchemaIFTStatementOutcome *outcome;
@property (nonatomic) BOOL hasOutcome;
@property (retain, nonatomic) IFTSchemaIFTStatementId *statementId;
@property (nonatomic) BOOL hasStatementId;
@property (copy, nonatomic) NSString *toolId;
@property (nonatomic) BOOL hasToolId;
@property (copy, nonatomic) NSArray *interpretedStatementResults;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (void)deleteExists;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addInterpretedStatementResults:(id)a0;
- (void)clearInterpretedStatementResults;
- (void)deleteInterpretedStatementResults;
- (void)deleteOutcome;
- (void)deleteStatementId;
- (void)deleteToolId;
- (id)interpretedStatementResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)interpretedStatementResultsCount;

@end
