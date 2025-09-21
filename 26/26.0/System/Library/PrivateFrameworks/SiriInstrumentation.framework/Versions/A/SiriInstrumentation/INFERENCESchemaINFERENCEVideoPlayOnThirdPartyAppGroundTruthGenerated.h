@class NSArray, NSData, INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppIndependentSignals;

@interface INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppIndependentSignals *independentSignal;
@property (nonatomic) BOOL hasIndependentSignal;
@property (copy, nonatomic) NSArray *dependentSignals;
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
- (void)addDependentSignals:(id)a0;
- (void)clearDependentSignals;
- (void)deleteDependentSignals;
- (void)deleteIndependentSignal;
- (id)dependentSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)dependentSignalsCount;

@end
