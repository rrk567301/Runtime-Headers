@interface NTPBCoefficients : PBCodable <NSCopying> {
    struct { unsigned char articleEmbeddingScoreCoefficient : 1; unsigned char autofavoritedScoreCoefficient : 1; unsigned char clientScoreCoefficient : 1; unsigned char conversionCoefficient : 1; unsigned char halfLifeCoefficient : 1; unsigned char serverScoreCoefficient : 1; unsigned char subscribedChannelScoreCoefficent : 1; unsigned char subscribedTopicScoreCoefficient : 1; unsigned char tabiScoreCoefficient : 1; } _has;
}

@property (nonatomic) char hasServerScoreCoefficient;
@property (nonatomic) double serverScoreCoefficient;
@property (nonatomic) char hasClientScoreCoefficient;
@property (nonatomic) double clientScoreCoefficient;
@property (nonatomic) char hasSubscribedTopicScoreCoefficient;
@property (nonatomic) double subscribedTopicScoreCoefficient;
@property (nonatomic) char hasSubscribedChannelScoreCoefficent;
@property (nonatomic) double subscribedChannelScoreCoefficent;
@property (nonatomic) char hasAutofavoritedScoreCoefficient;
@property (nonatomic) double autofavoritedScoreCoefficient;
@property (nonatomic) char hasArticleEmbeddingScoreCoefficient;
@property (nonatomic) double articleEmbeddingScoreCoefficient;
@property (nonatomic) char hasTabiScoreCoefficient;
@property (nonatomic) double tabiScoreCoefficient;
@property (nonatomic) char hasConversionCoefficient;
@property (nonatomic) double conversionCoefficient;
@property (nonatomic) char hasHalfLifeCoefficient;
@property (nonatomic) double halfLifeCoefficient;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
