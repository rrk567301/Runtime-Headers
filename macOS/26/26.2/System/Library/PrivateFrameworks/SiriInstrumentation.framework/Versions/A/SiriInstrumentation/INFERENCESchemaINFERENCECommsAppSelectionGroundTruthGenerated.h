@class INFERENCESchemaINFERENCECommsAppSelectionTrainingAppIndependentSignals, NSArray, NSData, SISchemaUUID;

@interface INFERENCESchemaINFERENCECommsAppSelectionGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingAppIndependentSignals *inferenceCommsAppSelectionTrainingAppIndependentSignals;
@property (nonatomic) BOOL hasInferenceCommsAppSelectionTrainingAppIndependentSignals;
@property (copy, nonatomic) NSArray *inferenceCommsAppSelectionTrainingAppDependentSignals;
@property (retain, nonatomic) SISchemaUUID *crrCommsAppSelectionJointId;
@property (nonatomic) BOOL hasCrrCommsAppSelectionJointId;
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
- (void)addInferenceCommsAppSelectionTrainingAppDependentSignals:(id)a0;
- (void)clearInferenceCommsAppSelectionTrainingAppDependentSignals;
- (void)deleteCrrCommsAppSelectionJointId;
- (void)deleteInferenceCommsAppSelectionTrainingAppDependentSignals;
- (void)deleteInferenceCommsAppSelectionTrainingAppIndependentSignals;
- (id)inferenceCommsAppSelectionTrainingAppDependentSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)inferenceCommsAppSelectionTrainingAppDependentSignalsCount;

@end
