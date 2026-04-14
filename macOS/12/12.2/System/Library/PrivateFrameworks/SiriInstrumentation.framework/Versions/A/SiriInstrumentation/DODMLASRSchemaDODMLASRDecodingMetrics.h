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
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addLanguageModelInterpolationWeights:(id)a0;
- (void)clearLanguageModelInterpolationWeights;
- (unsigned long long)languageModelInterpolationWeightsCount;
- (id)languageModelInterpolationWeightsAtIndex:(unsigned long long)a0;

@end
