@class AWDProactiveModelFittingLogRegGradient, AWDProactiveModelFittingLinRegFeatureMatrix, AWDProactiveModelFittingEvaluation, AWDProactiveModelFittingLogRegWeights, AWDProactiveModelFittingLinRegObjectiveFeatures;

@interface AWDProactiveModelFittingParsecFeedbackEnvelope : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasEvaluation;
@property (retain, nonatomic) AWDProactiveModelFittingEvaluation *evaluation;
@property (readonly, nonatomic) char hasLogRegWeights;
@property (retain, nonatomic) AWDProactiveModelFittingLogRegWeights *logRegWeights;
@property (readonly, nonatomic) char hasLogRegGradient;
@property (retain, nonatomic) AWDProactiveModelFittingLogRegGradient *logRegGradient;
@property (readonly, nonatomic) char hasLinRegFeatureMatrix;
@property (retain, nonatomic) AWDProactiveModelFittingLinRegFeatureMatrix *linRegFeatureMatrix;
@property (readonly, nonatomic) char hasLinRegObjectiveFeatures;
@property (retain, nonatomic) AWDProactiveModelFittingLinRegObjectiveFeatures *linRegObjectiveFeatures;

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

@end
