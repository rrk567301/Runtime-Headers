@class NSArray, INFERENCESchemaINFERENCEPervasiveEntityResolutionCommonSignals, NSData;

@interface INFERENCESchemaINFERENCEPervasiveEntityResolutionGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEPervasiveEntityResolutionCommonSignals *commonSignals;
@property (nonatomic) char hasCommonSignals;
@property (copy, nonatomic) NSArray *choiceDependentSignals;
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
- (void)addChoiceDependentSignals:(id)a0;
- (id)choiceDependentSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)choiceDependentSignalsCount;
- (void)clearChoiceDependentSignals;
- (void)deleteChoiceDependentSignals;
- (void)deleteCommonSignals;
- (id)suppressMessageUnderConditions;

@end
