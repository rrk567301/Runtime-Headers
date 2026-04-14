@class NSArray, NSData, INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingIndependentSignals;

@interface INFERENCESchemaINFERENCEWorkoutsAppSelectionGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingIndependentSignals *inferenceWorkoutsAppSelectionTrainingIndependentSignals;
@property (nonatomic) BOOL hasInferenceWorkoutsAppSelectionTrainingIndependentSignals;
@property (copy, nonatomic) NSArray *inferenceWorkoutsAppSelectionTrainingDependentSignals;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteInferenceWorkoutsAppSelectionTrainingIndependentSignals;
- (void)clearInferenceWorkoutsAppSelectionTrainingDependentSignals;
- (void)deleteInferenceWorkoutsAppSelectionTrainingDependentSignals;
- (void)addInferenceWorkoutsAppSelectionTrainingDependentSignals:(id)a0;
- (unsigned long long)inferenceWorkoutsAppSelectionTrainingDependentSignalsCount;
- (id)inferenceWorkoutsAppSelectionTrainingDependentSignalsAtIndex:(unsigned long long)a0;

@end
