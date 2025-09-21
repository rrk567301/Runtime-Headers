@class NSData, SISchemaAsset;

@interface CLPInstSchemaCLPNLv4TaskEvaluationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char evaluationType : 1; unsigned char evaluationEnvironment : 1; unsigned char experimentType : 1; unsigned char recipeType : 1; unsigned char sampleCount : 1; unsigned char isDebugTask : 1; } _has;
}

@property (nonatomic) int evaluationType;
@property (nonatomic) char hasEvaluationType;
@property (nonatomic) int evaluationEnvironment;
@property (nonatomic) char hasEvaluationEnvironment;
@property (nonatomic) int experimentType;
@property (nonatomic) char hasExperimentType;
@property (nonatomic) int recipeType;
@property (nonatomic) char hasRecipeType;
@property (retain, nonatomic) SISchemaAsset *nlv4AssetVersion;
@property (nonatomic) char hasNlv4AssetVersion;
@property (nonatomic) unsigned int sampleCount;
@property (nonatomic) char hasSampleCount;
@property (nonatomic) char isDebugTask;
@property (nonatomic) char hasIsDebugTask;
@property (retain, nonatomic) SISchemaAsset *syntheticDatasetVersion;
@property (nonatomic) char hasSyntheticDatasetVersion;
@property (retain, nonatomic) SISchemaAsset *nlv4AssetVersionOverride;
@property (nonatomic) char hasNlv4AssetVersionOverride;
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
- (void)deleteEvaluationEnvironment;
- (void)deleteEvaluationType;
- (void)deleteExperimentType;
- (void)deleteIsDebugTask;
- (void)deleteNlv4AssetVersion;
- (void)deleteNlv4AssetVersionOverride;
- (void)deleteRecipeType;
- (void)deleteSampleCount;
- (void)deleteSyntheticDatasetVersion;
- (id)suppressMessageUnderConditions;

@end
