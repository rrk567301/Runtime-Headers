@class NSArray, NSData, SISchemaUUID;

@interface PFAPreprocessorOrchestratorResultsStatsReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (copy, nonatomic) NSArray *orchestratorStatistics;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteContextId;
- (void)addOrchestratorStatistics:(id)a0;
- (void)clearOrchestratorStatistics;
- (void)deleteOrchestratorStatistics;
- (id)orchestratorStatisticsAtIndex:(unsigned long long)a0;
- (unsigned long long)orchestratorStatisticsCount;

@end
