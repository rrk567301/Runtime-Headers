@class NSArray, SISchemaAsset, NSData;

@interface TTMSchemaTTMNeuralCombinerRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char neuralCombinerThreshold : 1; } _has;
}

@property (copy, nonatomic) NSArray *results;
@property (retain, nonatomic) SISchemaAsset *asset;
@property (nonatomic) BOOL hasAsset;
@property (nonatomic) float neuralCombinerThreshold;
@property (nonatomic) BOOL hasNeuralCombinerThreshold;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addResults:(id)a0;
- (void)clearResults;
- (unsigned long long)resultsCount;
- (id)resultsAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAsset;
- (void)deleteNeuralCombinerThreshold;
- (void)deleteResults;
- (id)suppressMessageUnderConditions;

@end
