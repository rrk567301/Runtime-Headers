@class AWDProactiveModelFittingSparseFloatVector, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingQuantizedSparseVector, AWDProactiveModelFittingModelInfo;

@interface AWDProactiveModelFittingLinRegObjectiveFeatures : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char featuresL2norm : 1; unsigned char featuresScaleFactor : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasModelInfo;
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;
@property (readonly, nonatomic) char hasSparseFloatFeatures;
@property (retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatFeatures;
@property (readonly, nonatomic) char hasMinibatchStats;
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats;
@property (readonly, nonatomic) char hasSparseQuantizedFeatures;
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedFeatures;
@property (nonatomic) char hasFeaturesScaleFactor;
@property (nonatomic) float featuresScaleFactor;
@property (nonatomic) char hasFeaturesL2norm;
@property (nonatomic) float featuresL2norm;

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
- (unsigned long long)featuresLength;
- (float)featuresValueAtIndex:(unsigned long long)a0;
- (char)hasObjectiveFeatures;

@end
