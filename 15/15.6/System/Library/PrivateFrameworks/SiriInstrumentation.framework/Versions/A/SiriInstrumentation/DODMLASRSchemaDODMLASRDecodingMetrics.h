@class NSArray, NSData;

@interface DODMLASRSchemaDODMLASRDecodingMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char wallRealTimeFactor : 1; unsigned char averageActiveTokensPerFrame : 1; unsigned char jitQueryDurationInMs : 1; unsigned char jitLanguageModelEnrollmentDurationInMs : 1; } _has;
}

@property (nonatomic) float wallRealTimeFactor;
@property (nonatomic) char hasWallRealTimeFactor;
@property (copy, nonatomic) NSArray *languageModelInterpolationWeights;
@property (nonatomic) float averageActiveTokensPerFrame;
@property (nonatomic) char hasAverageActiveTokensPerFrame;
@property (nonatomic) unsigned long long jitQueryDurationInMs;
@property (nonatomic) char hasJitQueryDurationInMs;
@property (nonatomic) unsigned long long jitLanguageModelEnrollmentDurationInMs;
@property (nonatomic) char hasJitLanguageModelEnrollmentDurationInMs;
@property (copy, nonatomic) NSArray *preprocessingEntityCategoryCounts;
@property (copy, nonatomic) NSArray *postprocessingEntityCategoryCounts;
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
- (void)addLanguageModelInterpolationWeights:(id)a0;
- (void)addPostprocessingEntityCategoryCounts:(id)a0;
- (void)addPreprocessingEntityCategoryCounts:(id)a0;
- (void)clearLanguageModelInterpolationWeights;
- (void)clearPostprocessingEntityCategoryCounts;
- (void)clearPreprocessingEntityCategoryCounts;
- (void)deleteAverageActiveTokensPerFrame;
- (void)deleteJitLanguageModelEnrollmentDurationInMs;
- (void)deleteJitQueryDurationInMs;
- (void)deleteLanguageModelInterpolationWeights;
- (void)deletePostprocessingEntityCategoryCounts;
- (void)deletePreprocessingEntityCategoryCounts;
- (void)deleteWallRealTimeFactor;
- (id)languageModelInterpolationWeightsAtIndex:(unsigned long long)a0;
- (unsigned long long)languageModelInterpolationWeightsCount;
- (id)postprocessingEntityCategoryCountsAtIndex:(unsigned long long)a0;
- (unsigned long long)postprocessingEntityCategoryCountsCount;
- (id)preprocessingEntityCategoryCountsAtIndex:(unsigned long long)a0;
- (unsigned long long)preprocessingEntityCategoryCountsCount;
- (id)suppressMessageUnderConditions;

@end
