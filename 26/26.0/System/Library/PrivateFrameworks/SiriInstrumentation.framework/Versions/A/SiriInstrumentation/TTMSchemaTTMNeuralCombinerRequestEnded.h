@class NSArray, SISchemaAsset, NSString, NSData;

@interface TTMSchemaTTMNeuralCombinerRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char neuralCombinerThreshold : 1; unsigned char speakerIdThreshold : 1; } _has;
}

@property (copy, nonatomic) NSArray *results;
@property (retain, nonatomic) SISchemaAsset *asset;
@property (nonatomic) BOOL hasAsset;
@property (nonatomic) float neuralCombinerThreshold;
@property (nonatomic) BOOL hasNeuralCombinerThreshold;
@property (copy, nonatomic) NSString *mitigationAssetVersion;
@property (nonatomic) BOOL hasMitigationAssetVersion;
@property (nonatomic) float speakerIdThreshold;
@property (nonatomic) BOOL hasSpeakerIdThreshold;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)resultsCount;
- (id)resultsAtIndex:(unsigned long long)a0;
- (void)addResults:(id)a0;
- (void)clearResults;
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
- (void)deleteAsset;
- (void)deleteMitigationAssetVersion;
- (void)deleteNeuralCombinerThreshold;
- (void)deleteResults;
- (void)deleteSpeakerIdThreshold;

@end
