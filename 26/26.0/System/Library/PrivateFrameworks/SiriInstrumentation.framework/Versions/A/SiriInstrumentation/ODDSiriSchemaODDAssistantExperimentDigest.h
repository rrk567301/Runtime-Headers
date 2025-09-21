@class ODDSiriSchemaODDAssistantExperimentDimensions, ODDSiriSchemaODDAssistantExperimentTuples, NSArray, ODDSiriSchemaODDAssistantExperimentCounts, NSData;

@interface ODDSiriSchemaODDAssistantExperimentDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDAssistantExperimentDimensions *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDAssistantExperimentCounts *counts;
@property (nonatomic) BOOL hasCounts;
@property (retain, nonatomic) ODDSiriSchemaODDAssistantExperimentTuples *tuples;
@property (nonatomic) BOOL hasTuples;
@property (copy, nonatomic) NSArray *turnIds;
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
- (id)turnIdsAtIndex:(unsigned long long)a0;
- (void)addTurnIds:(id)a0;
- (void)clearTurnIds;
- (void)deleteCounts;
- (void)deleteDimensions;
- (void)deleteTuples;
- (void)deleteTurnIds;
- (unsigned long long)turnIdsCount;

@end
