@class NSArray, NSData;

@interface QDSchemaQDContextStatementIdsReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *contextStatementIds;
@property (copy, nonatomic) NSArray *contextualEntityStatementIds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
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
