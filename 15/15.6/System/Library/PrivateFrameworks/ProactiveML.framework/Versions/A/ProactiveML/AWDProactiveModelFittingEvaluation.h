@class AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingEvalMetrics, NSMutableArray;

@interface AWDProactiveModelFittingEvaluation : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasModelInfo;
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;
@property (readonly, nonatomic) char hasMinibatchStats;
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats;
@property (readonly, nonatomic) char hasEvaluationMetrics;
@property (retain, nonatomic) AWDProactiveModelFittingEvalMetrics *evaluationMetrics;
@property (retain, nonatomic) NSMutableArray *precisionAtKs;

+ (Class)precisionAtKType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addPrecisionAtK:(id)a0;
- (void)clearPrecisionAtKs;
- (float)precisionAtK:(unsigned long long)a0;
- (id)precisionAtKAtIndex:(unsigned long long)a0;
- (unsigned long long)precisionAtKsCount;

@end
