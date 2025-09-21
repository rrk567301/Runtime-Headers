@class ODDSiriSchemaODDAssistantExperimentDimensions, ODDSiriSchemaODDAssistantExperimentTuples, NSArray, ODDSiriSchemaODDAssistantExperimentCounts, NSData;

@interface ODDSiriSchemaODDAssistantExperimentDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDAssistantExperimentDimensions *dimensions;
@property (nonatomic) char hasDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDAssistantExperimentCounts *counts;
@property (nonatomic) char hasCounts;
@property (retain, nonatomic) ODDSiriSchemaODDAssistantExperimentTuples *tuples;
@property (nonatomic) char hasTuples;
@property (copy, nonatomic) NSArray *turnIds;
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
- (id)turnIdsAtIndex:(unsigned long long)a0;
- (void)addTurnIds:(id)a0;
- (void)clearTurnIds;
- (void)deleteCounts;
- (void)deleteDimensions;
- (void)deleteTuples;
- (void)deleteTurnIds;
- (id)suppressMessageUnderConditions;
- (unsigned long long)turnIdsCount;

@end
