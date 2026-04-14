@class NSArray, NSData, SISchemaUUID;

@interface PFAPreprocessorOrchestratorResultsStatsReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (copy, nonatomic) NSArray *orchestratorStatistics;
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
- (void)deleteContextId;
- (void)addOrchestratorStatistics:(id)a0;
- (void)clearOrchestratorStatistics;
- (void)deleteOrchestratorStatistics;
- (id)orchestratorStatisticsAtIndex:(unsigned long long)a0;
- (unsigned long long)orchestratorStatisticsCount;

@end
