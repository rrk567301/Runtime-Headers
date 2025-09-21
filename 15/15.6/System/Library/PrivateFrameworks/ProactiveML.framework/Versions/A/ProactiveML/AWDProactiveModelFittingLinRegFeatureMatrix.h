@class AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingQuantizedSparseMatrix, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingSparseFloatMatrix;

@interface AWDProactiveModelFittingLinRegFeatureMatrix : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char featureMatrixL2norm : 1; unsigned char featureMatrixScaleFactor : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasModelInfo;
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;
@property (readonly, nonatomic) char hasSparseFloatFeatureMatrix;
@property (retain, nonatomic) AWDProactiveModelFittingSparseFloatMatrix *sparseFloatFeatureMatrix;
@property (readonly, nonatomic) char hasMinibatchStats;
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats;
@property (readonly, nonatomic) char hasSparseQuantizedFeatureMatrix;
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedSparseMatrix *sparseQuantizedFeatureMatrix;
@property (nonatomic) char hasFeatureMatrixScaleFactor;
@property (nonatomic) float featureMatrixScaleFactor;
@property (nonatomic) char hasFeatureMatrixL2norm;
@property (nonatomic) float featureMatrixL2norm;

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
- (float)featureMatrixValueAtRow:(unsigned long long)a0 column:(unsigned long long)a1;
- (char)hasFeatureMatrix;

@end
