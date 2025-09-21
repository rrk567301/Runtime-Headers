@class NSArray, NSData;

@interface QDSchemaQDContextStatementIdsReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *contextStatementIds;
@property (copy, nonatomic) NSArray *contextualEntityStatementIds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addContextStatementIds:(id)a0;
- (void)addContextualEntityStatementIds:(unsigned int)a0;
- (void)clearContextStatementIds;
- (void)clearContextualEntityStatementIds;
- (id)contextStatementIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)contextStatementIdsCount;
- (unsigned int)contextualEntityStatementIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)contextualEntityStatementIdsCount;
- (void)deleteContextStatementIds;
- (void)deleteContextualEntityStatementIds;

@end
