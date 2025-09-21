@interface AWDProactiveModelFittingEvalMetrics : PBCodable <NSCopying> {
    struct { float *list; unsigned long long count; unsigned long long size; } _negativeScores;
    struct { float *list; unsigned long long count; unsigned long long size; } _positiveScores;
    struct { unsigned char falseNegatives : 1; unsigned char falsePositives : 1; unsigned char trueNegatives : 1; unsigned char truePositives : 1; unsigned char f1 : 1; unsigned char rmse : 1; unsigned char secsToExecute : 1; } _has;
}

@property (nonatomic) char hasRmse;
@property (nonatomic) float rmse;
@property (nonatomic) char hasF1;
@property (nonatomic) float f1;
@property (nonatomic) char hasTruePositives;
@property (nonatomic) unsigned long long truePositives;
@property (nonatomic) char hasTrueNegatives;
@property (nonatomic) unsigned long long trueNegatives;
@property (nonatomic) char hasFalsePositives;
@property (nonatomic) unsigned long long falsePositives;
@property (nonatomic) char hasFalseNegatives;
@property (nonatomic) unsigned long long falseNegatives;
@property (readonly, nonatomic) unsigned long long positiveScoresCount;
@property (readonly, nonatomic) float *positiveScores;
@property (readonly, nonatomic) unsigned long long negativeScoresCount;
@property (readonly, nonatomic) float *negativeScores;
@property (nonatomic) char hasSecsToExecute;
@property (nonatomic) float secsToExecute;

+ (id)evalMetricsWithRmse:(float)a0 f1:(float)a1;
+ (id)evalMetricsWithRmse:(float)a0 f1:(float)a1 truePositives:(unsigned long long)a2 trueNegatives:(unsigned long long)a3 falsePositives:(unsigned long long)a4 falseNegatives:(unsigned long long)a5;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)toDictionary;
- (void)addNegativeScores:(float)a0;
- (void)addPositiveScores:(float)a0;
- (void)clearNegativeScores;
- (void)clearPositiveScores;
- (float)negativeScoresAtIndex:(unsigned long long)a0;
- (float)positiveScoresAtIndex:(unsigned long long)a0;
- (void)setNegativeScores:(float *)a0 count:(unsigned long long)a1;
- (void)setPositiveScores:(float *)a0 count:(unsigned long long)a1;

@end
