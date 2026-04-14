@class NSArray, NSData, INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationIndependentSignals, INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppGroundTruthGenerated;

@interface INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationSignalsGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppGroundTruthGenerated *playOnThirdPartyAppSignals;
@property (nonatomic) BOOL hasPlayOnThirdPartyAppSignals;
@property (retain, nonatomic) INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationIndependentSignals *independentSignal;
@property (nonatomic) BOOL hasIndependentSignal;
@property (copy, nonatomic) NSArray *dependentSignals;
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
- (void)deleteIndependentSignal;
- (void)clearDependentSignals;
- (void)deleteDependentSignals;
- (void)addDependentSignals:(id)a0;
- (unsigned long long)dependentSignalsCount;
- (id)dependentSignalsAtIndex:(unsigned long long)a0;
- (void)deletePlayOnThirdPartyAppSignals;

@end
