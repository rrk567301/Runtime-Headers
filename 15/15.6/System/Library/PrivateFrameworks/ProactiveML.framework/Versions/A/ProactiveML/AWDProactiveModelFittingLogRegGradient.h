@class AWDProactiveModelFittingSparseFloatVector, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingQuantizedSparseVector, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingQuantizedDenseVector;

@interface AWDProactiveModelFittingLogRegGradient : PBCodable <NSCopying> {
    struct { unsigned char iteration : 1; unsigned char timestamp : 1; unsigned char gradientL2norm : 1; unsigned char gradientScaleFactor : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasModelInfo;
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;
@property (readonly, nonatomic) char hasSparseFloatGradient;
@property (retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatGradient;
@property (readonly, nonatomic) char hasMinibatchStats;
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats;
@property (readonly, nonatomic) char hasEvaluationMetrics;
@property (retain, nonatomic) AWDProactiveModelFittingEvalMetrics *evaluationMetrics;
@property (nonatomic) char hasIteration;
@property (nonatomic) unsigned long long iteration;
@property (readonly, nonatomic) char hasSparseQuantizedGradient;
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedGradient;
@property (nonatomic) char hasGradientScaleFactor;
@property (nonatomic) float gradientScaleFactor;
@property (nonatomic) char hasGradientL2norm;
@property (nonatomic) float gradientL2norm;
@property (readonly, nonatomic) char hasDenseQuantizedGradient;
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedDenseVector *denseQuantizedGradient;

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
- (char)hasGradient;
- (unsigned long long)gradientLength;
- (float)gradientValueAtIndex:(unsigned long long)a0;

@end
