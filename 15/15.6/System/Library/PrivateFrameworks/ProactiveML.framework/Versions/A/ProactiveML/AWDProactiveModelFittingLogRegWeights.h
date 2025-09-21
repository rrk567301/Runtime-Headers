@class AWDProactiveModelFittingSparseFloatVector, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingQuantizedSparseVector, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingQuantizedDenseVector;

@interface AWDProactiveModelFittingLogRegWeights : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char weightsL2norm : 1; unsigned char weightsScaleFactor : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasModelInfo;
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;
@property (readonly, nonatomic) char hasSparseFloatWeights;
@property (retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatWeights;
@property (readonly, nonatomic) char hasMinibatchStats;
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats;
@property (readonly, nonatomic) char hasEvaluationMetrics;
@property (retain, nonatomic) AWDProactiveModelFittingEvalMetrics *evaluationMetrics;
@property (readonly, nonatomic) char hasSparseQuantizedWeights;
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedWeights;
@property (nonatomic) char hasWeightsScaleFactor;
@property (nonatomic) float weightsScaleFactor;
@property (nonatomic) char hasWeightsL2norm;
@property (nonatomic) float weightsL2norm;
@property (readonly, nonatomic) char hasDenseQuantizedWeights;
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedDenseVector *denseQuantizedWeights;

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
- (char)hasWeights;

@end
