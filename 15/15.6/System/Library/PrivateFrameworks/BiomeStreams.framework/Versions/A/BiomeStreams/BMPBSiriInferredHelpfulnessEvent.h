@class NSString;

@interface BMPBSiriInferredHelpfulnessEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char inferredHelpfulnessScore : 1; unsigned char restatementScore : 1; } _has;
}

@property (nonatomic) char hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) char hasInferredHelpfulnessScore;
@property (nonatomic) double inferredHelpfulnessScore;
@property (nonatomic) char hasRestatementScore;
@property (nonatomic) double restatementScore;
@property (readonly, nonatomic) char hasTurnID;
@property (retain, nonatomic) NSString *turnID;
@property (readonly, nonatomic) char hasModelID;
@property (retain, nonatomic) NSString *modelID;

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
