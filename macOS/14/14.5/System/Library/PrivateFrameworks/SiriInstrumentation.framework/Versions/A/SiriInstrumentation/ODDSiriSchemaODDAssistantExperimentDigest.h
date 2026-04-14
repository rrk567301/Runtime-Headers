@class ODDSiriSchemaODDAssistantExperimentDimensions, ODDSiriSchemaODDAssistantExperimentTuples, ODDSiriSchemaODDAssistantExperimentCounts, NSData;

@interface ODDSiriSchemaODDAssistantExperimentDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDAssistantExperimentDimensions *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDAssistantExperimentCounts *counts;
@property (nonatomic) BOOL hasCounts;
@property (retain, nonatomic) ODDSiriSchemaODDAssistantExperimentTuples *tuples;
@property (nonatomic) BOOL hasTuples;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCounts;
- (void)deleteDimensions;
- (void)deleteTuples;
- (id)suppressMessageUnderConditions;

@end
