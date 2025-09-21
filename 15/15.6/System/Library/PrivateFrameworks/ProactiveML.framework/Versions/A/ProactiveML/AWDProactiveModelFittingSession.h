@class AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingSession : PBCodable <NSCopying> {
    struct { unsigned char label : 1; unsigned char supervisionType : 1; unsigned char timestamp : 1; unsigned char confidenceScore : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasModelInfo;
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;
@property (nonatomic) char hasLabel;
@property (nonatomic) unsigned long long label;
@property (readonly, nonatomic) char hasSparseFloatFeatures;
@property (retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatFeatures;
@property (nonatomic) char hasSupervisionType;
@property (nonatomic) unsigned long long supervisionType;
@property (nonatomic) char hasConfidenceScore;
@property (nonatomic) float confidenceScore;

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
