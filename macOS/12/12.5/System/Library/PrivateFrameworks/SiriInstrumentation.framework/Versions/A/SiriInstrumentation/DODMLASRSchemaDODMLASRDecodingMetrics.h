@class NSArray, NSData;

@interface DODMLASRSchemaDODMLASRDecodingMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char wallRealTimeFactor : 1; unsigned char averageActiveTokensPerFrame : 1; unsigned char jitQueryDurationInMs : 1; unsigned char jitLanguageModelEnrollmentDurationInMs : 1; } _has;
}

@property (nonatomic) float wallRealTimeFactor;
@property (nonatomic) BOOL hasWallRealTimeFactor;
@property (copy, nonatomic) NSArray *languageModelInterpolationWeights;
@property (nonatomic) float averageActiveTokensPerFrame;
@property (nonatomic) BOOL hasAverageActiveTokensPerFrame;
@property (nonatomic) unsigned long long jitQueryDurationInMs;
@property (nonatomic) BOOL hasJitQueryDurationInMs;
@property (nonatomic) unsigned long long jitLanguageModelEnrollmentDurationInMs;
@property (nonatomic) BOOL hasJitLanguageModelEnrollmentDurationInMs;
@property (copy, nonatomic) NSArray *preprocessingEntityCategoryCounts;
@property (copy, nonatomic) NSArray *postprocessingEntityCategoryCounts;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearLanguageModelInterpolationWeights;
- (void)addLanguageModelInterpolationWeights:(id)a0;
- (void)deleteAverageActiveTokensPerFrame;
- (void)deleteLanguageModelInterpolationWeights;
- (unsigned long long)languageModelInterpolationWeightsCount;
- (id)languageModelInterpolationWeightsAtIndex:(unsigned long long)a0;
- (void)clearPreprocessingEntityCategoryCounts;
- (void)clearPostprocessingEntityCategoryCounts;
- (void)addPreprocessingEntityCategoryCounts:(id)a0;
- (void)addPostprocessingEntityCategoryCounts:(id)a0;
- (void)deleteWallRealTimeFactor;
- (void)deleteJitQueryDurationInMs;
- (void)deleteJitLanguageModelEnrollmentDurationInMs;
- (void)deletePreprocessingEntityCategoryCounts;
- (unsigned long long)preprocessingEntityCategoryCountsCount;
- (id)preprocessingEntityCategoryCountsAtIndex:(unsigned long long)a0;
- (void)deletePostprocessingEntityCategoryCounts;
- (unsigned long long)postprocessingEntityCategoryCountsCount;
- (id)postprocessingEntityCategoryCountsAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
