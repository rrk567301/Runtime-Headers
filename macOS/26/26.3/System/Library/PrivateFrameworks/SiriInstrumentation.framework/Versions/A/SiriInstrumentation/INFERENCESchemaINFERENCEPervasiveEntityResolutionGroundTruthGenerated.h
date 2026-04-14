@class NSArray, INFERENCESchemaINFERENCEPervasiveEntityResolutionCommonSignals, NSData;

@interface INFERENCESchemaINFERENCEPervasiveEntityResolutionGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEPervasiveEntityResolutionCommonSignals *commonSignals;
@property (nonatomic) BOOL hasCommonSignals;
@property (copy, nonatomic) NSArray *choiceDependentSignals;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addChoiceDependentSignals:(id)a0;
- (id)choiceDependentSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)choiceDependentSignalsCount;
- (void)clearChoiceDependentSignals;
- (void)deleteChoiceDependentSignals;
- (void)deleteCommonSignals;

@end
