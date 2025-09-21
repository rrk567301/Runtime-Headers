@class NSArray, NSData, INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingIndependentSignals;

@interface INFERENCESchemaINFERENCEWorkoutsAppSelectionGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingIndependentSignals *inferenceWorkoutsAppSelectionTrainingIndependentSignals;
@property (nonatomic) char hasInferenceWorkoutsAppSelectionTrainingIndependentSignals;
@property (copy, nonatomic) NSArray *inferenceWorkoutsAppSelectionTrainingDependentSignals;
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
- (void)addInferenceWorkoutsAppSelectionTrainingDependentSignals:(id)a0;
- (void)clearInferenceWorkoutsAppSelectionTrainingDependentSignals;
- (void)deleteInferenceWorkoutsAppSelectionTrainingDependentSignals;
- (void)deleteInferenceWorkoutsAppSelectionTrainingIndependentSignals;
- (id)inferenceWorkoutsAppSelectionTrainingDependentSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)inferenceWorkoutsAppSelectionTrainingDependentSignalsCount;
- (id)suppressMessageUnderConditions;

@end
