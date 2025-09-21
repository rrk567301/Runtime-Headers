@class NSArray, SISchemaAsset, NSString, NSData;

@interface TTMSchemaTTMNeuralCombinerRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char neuralCombinerThreshold : 1; unsigned char speakerIdThreshold : 1; } _has;
}

@property (copy, nonatomic) NSArray *results;
@property (retain, nonatomic) SISchemaAsset *asset;
@property (nonatomic) char hasAsset;
@property (nonatomic) float neuralCombinerThreshold;
@property (nonatomic) char hasNeuralCombinerThreshold;
@property (copy, nonatomic) NSString *mitigationAssetVersion;
@property (nonatomic) char hasMitigationAssetVersion;
@property (nonatomic) float speakerIdThreshold;
@property (nonatomic) char hasSpeakerIdThreshold;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addResults:(id)a0;
- (void)clearResults;
- (unsigned long long)resultsCount;
- (id)resultsAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAsset;
- (void)deleteMitigationAssetVersion;
- (void)deleteNeuralCombinerThreshold;
- (void)deleteResults;
- (void)deleteSpeakerIdThreshold;
- (id)suppressMessageUnderConditions;

@end
