@interface NTPBBinningConfig : PBCodable <NSCopying> {
    struct { unsigned char decreaseConsumptionThreshold : 1; unsigned char evaluationFrequency : 1; unsigned char historyLength : 1; unsigned char increaseConsumptionThreshold : 1; unsigned char minimumArticleCount : 1; unsigned char defaultChannelBin : 1; unsigned char defaultTopicBin : 1; unsigned char enabled : 1; } _has;
}

@property (nonatomic) char hasEnabled;
@property (nonatomic) char enabled;
@property (nonatomic) char hasEvaluationFrequency;
@property (nonatomic) long long evaluationFrequency;
@property (nonatomic) char hasHistoryLength;
@property (nonatomic) long long historyLength;
@property (nonatomic) char hasIncreaseConsumptionThreshold;
@property (nonatomic) double increaseConsumptionThreshold;
@property (nonatomic) char hasDecreaseConsumptionThreshold;
@property (nonatomic) double decreaseConsumptionThreshold;
@property (nonatomic) char hasMinimumArticleCount;
@property (nonatomic) long long minimumArticleCount;
@property (nonatomic) char hasDefaultTopicBin;
@property (nonatomic) int defaultTopicBin;
@property (nonatomic) char hasDefaultChannelBin;
@property (nonatomic) int defaultChannelBin;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
