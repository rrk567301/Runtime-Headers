@class NSString, NSData;

@interface DODMLASRSchemaDODMLASRModelMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char trainingDurationInMs : 1; unsigned char conversionDurationInMs : 1; unsigned char optimizationDurationInMs : 1; unsigned char totalDurationInMs : 1; unsigned char ngramOrder : 1; unsigned char residualAdaptationWeight : 1; unsigned char modelTrainingStatusCode : 1; unsigned char numFiniteStateTransducerArcs : 1; unsigned char numFiniteStateTransducerStates : 1; } _has;
}

@property (copy, nonatomic) NSString *configName;
@property (nonatomic) char hasConfigName;
@property (nonatomic) unsigned long long trainingDurationInMs;
@property (nonatomic) char hasTrainingDurationInMs;
@property (nonatomic) unsigned long long conversionDurationInMs;
@property (nonatomic) char hasConversionDurationInMs;
@property (nonatomic) unsigned long long optimizationDurationInMs;
@property (nonatomic) char hasOptimizationDurationInMs;
@property (nonatomic) unsigned long long totalDurationInMs;
@property (nonatomic) char hasTotalDurationInMs;
@property (nonatomic) unsigned int ngramOrder;
@property (nonatomic) char hasNgramOrder;
@property (nonatomic) float residualAdaptationWeight;
@property (nonatomic) char hasResidualAdaptationWeight;
@property (nonatomic) unsigned int modelTrainingStatusCode;
@property (nonatomic) char hasModelTrainingStatusCode;
@property (nonatomic) unsigned int numFiniteStateTransducerArcs;
@property (nonatomic) char hasNumFiniteStateTransducerArcs;
@property (nonatomic) unsigned int numFiniteStateTransducerStates;
@property (nonatomic) char hasNumFiniteStateTransducerStates;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfigName;
- (void)deleteConversionDurationInMs;
- (void)deleteModelTrainingStatusCode;
- (void)deleteNgramOrder;
- (void)deleteNumFiniteStateTransducerArcs;
- (void)deleteNumFiniteStateTransducerStates;
- (void)deleteOptimizationDurationInMs;
- (void)deleteResidualAdaptationWeight;
- (void)deleteTotalDurationInMs;
- (void)deleteTrainingDurationInMs;
- (id)suppressMessageUnderConditions;

@end
