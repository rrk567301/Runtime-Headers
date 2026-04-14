@class NSArray, NSData;

@interface IFTSchemaIFTResponseGenerationRequest : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actionStepResultEventIds;
@property (copy, nonatomic) NSArray *statementResults;
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
- (id)actionStepResultEventIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)actionStepResultEventIdsCount;
- (void)addActionStepResultEventIds:(id)a0;
- (void)addStatementResults:(id)a0;
- (void)clearActionStepResultEventIds;
- (void)clearStatementResults;
- (void)deleteActionStepResultEventIds;
- (void)deleteStatementResults;
- (id)statementResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)statementResultsCount;

@end
