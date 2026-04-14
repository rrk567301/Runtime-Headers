@class INFERENCESchemaINFERENCEMusicTrainingIndependentSignals, NSArray, NSData;

@interface INFERENCESchemaINFERENCEMusicAppSelectionGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEMusicTrainingIndependentSignals *inferenceMusicTrainingIndependentSignals;
@property (nonatomic) BOOL hasInferenceMusicTrainingIndependentSignals;
@property (copy, nonatomic) NSArray *inferenceMusicTrainingDependentSignals;
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
- (void)addInferenceMusicTrainingDependentSignals:(id)a0;
- (void)clearInferenceMusicTrainingDependentSignals;
- (void)deleteInferenceMusicTrainingDependentSignals;
- (void)deleteInferenceMusicTrainingIndependentSignals;
- (id)inferenceMusicTrainingDependentSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)inferenceMusicTrainingDependentSignalsCount;

@end
