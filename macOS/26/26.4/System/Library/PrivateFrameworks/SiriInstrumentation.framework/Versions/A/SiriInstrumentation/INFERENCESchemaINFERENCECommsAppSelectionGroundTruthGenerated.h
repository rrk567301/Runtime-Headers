@class INFERENCESchemaINFERENCECommsAppSelectionTrainingAppIndependentSignals, NSArray, NSData, SISchemaUUID;

@interface INFERENCESchemaINFERENCECommsAppSelectionGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingAppIndependentSignals *inferenceCommsAppSelectionTrainingAppIndependentSignals;
@property (nonatomic) BOOL hasInferenceCommsAppSelectionTrainingAppIndependentSignals;
@property (copy, nonatomic) NSArray *inferenceCommsAppSelectionTrainingAppDependentSignals;
@property (retain, nonatomic) SISchemaUUID *crrCommsAppSelectionJointId;
@property (nonatomic) BOOL hasCrrCommsAppSelectionJointId;
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
- (void)addInferenceCommsAppSelectionTrainingAppDependentSignals:(id)a0;
- (void)clearInferenceCommsAppSelectionTrainingAppDependentSignals;
- (void)deleteCrrCommsAppSelectionJointId;
- (void)deleteInferenceCommsAppSelectionTrainingAppDependentSignals;
- (void)deleteInferenceCommsAppSelectionTrainingAppIndependentSignals;
- (id)inferenceCommsAppSelectionTrainingAppDependentSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)inferenceCommsAppSelectionTrainingAppDependentSignalsCount;

@end
