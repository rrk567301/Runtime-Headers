@class NSData, SISchemaAsset, CAMSchemaCAMModelId;

@interface CAMSchemaCAMModelExecuted : SISchemaInstrumentationMessage {
    struct { unsigned char prediction : 1; unsigned char predictionScore : 1; unsigned char predictionThreshold : 1; unsigned char isShadowLog : 1; } _has;
}

@property (retain, nonatomic) CAMSchemaCAMModelId *modelId;
@property (nonatomic) BOOL hasModelId;
@property (nonatomic) unsigned int prediction;
@property (nonatomic) BOOL hasPrediction;
@property (nonatomic) float predictionScore;
@property (nonatomic) BOOL hasPredictionScore;
@property (nonatomic) float predictionThreshold;
@property (nonatomic) BOOL hasPredictionThreshold;
@property (nonatomic) BOOL isShadowLog;
@property (nonatomic) BOOL hasIsShadowLog;
@property (retain, nonatomic) SISchemaAsset *asset;
@property (nonatomic) BOOL hasAsset;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteModelId;
- (void)deletePrediction;
- (void)deletePredictionScore;
- (void)deletePredictionThreshold;
- (void)deleteIsShadowLog;
- (void)deleteAsset;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
