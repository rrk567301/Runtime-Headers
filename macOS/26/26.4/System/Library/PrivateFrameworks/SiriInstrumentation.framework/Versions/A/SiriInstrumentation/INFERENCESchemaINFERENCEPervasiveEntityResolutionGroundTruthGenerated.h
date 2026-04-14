@class NSArray, INFERENCESchemaINFERENCEPervasiveEntityResolutionCommonSignals, NSData;

@interface INFERENCESchemaINFERENCEPervasiveEntityResolutionGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEPervasiveEntityResolutionCommonSignals *commonSignals;
@property (nonatomic) BOOL hasCommonSignals;
@property (copy, nonatomic) NSArray *choiceDependentSignals;
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
- (void)addChoiceDependentSignals:(id)a0;
- (id)choiceDependentSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)choiceDependentSignalsCount;
- (void)clearChoiceDependentSignals;
- (void)deleteChoiceDependentSignals;
- (void)deleteCommonSignals;

@end
