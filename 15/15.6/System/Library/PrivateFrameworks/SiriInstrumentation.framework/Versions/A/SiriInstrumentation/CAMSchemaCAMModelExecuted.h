@class NSData, SISchemaAsset, CAMSchemaCAMModelId;

@interface CAMSchemaCAMModelExecuted : SISchemaInstrumentationMessage {
    struct { unsigned char prediction : 1; unsigned char predictionScore : 1; unsigned char predictionThreshold : 1; unsigned char isShadowLog : 1; } _has;
}

@property (retain, nonatomic) CAMSchemaCAMModelId *modelId;
@property (nonatomic) char hasModelId;
@property (nonatomic) unsigned int prediction;
@property (nonatomic) char hasPrediction;
@property (nonatomic) float predictionScore;
@property (nonatomic) char hasPredictionScore;
@property (nonatomic) float predictionThreshold;
@property (nonatomic) char hasPredictionThreshold;
@property (nonatomic) char isShadowLog;
@property (nonatomic) char hasIsShadowLog;
@property (retain, nonatomic) SISchemaAsset *asset;
@property (nonatomic) char hasAsset;
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
- (void)deleteAsset;
- (void)deleteIsShadowLog;
- (void)deleteModelId;
- (void)deletePrediction;
- (void)deletePredictionScore;
- (void)deletePredictionThreshold;
- (id)suppressMessageUnderConditions;

@end
