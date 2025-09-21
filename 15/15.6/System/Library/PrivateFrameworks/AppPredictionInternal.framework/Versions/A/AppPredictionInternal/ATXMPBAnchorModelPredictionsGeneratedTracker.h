@class NSString;

@interface ATXMPBAnchorModelPredictionsGeneratedTracker : PBCodable <NSCopying> {
    struct { unsigned char score : 1; unsigned char secondsAfterAnchorEnd : 1; unsigned char secondsAfterAnchorStart : 1; } _has;
}

@property (readonly, nonatomic) char hasAnchorType;
@property (retain, nonatomic) NSString *anchorType;
@property (nonatomic) char hasScore;
@property (nonatomic) double score;
@property (readonly, nonatomic) char hasCandidateType;
@property (retain, nonatomic) NSString *candidateType;
@property (nonatomic) char hasSecondsAfterAnchorStart;
@property (nonatomic) int secondsAfterAnchorStart;
@property (nonatomic) char hasSecondsAfterAnchorEnd;
@property (nonatomic) int secondsAfterAnchorEnd;
@property (readonly, nonatomic) char hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) char hasExecutableObject;
@property (retain, nonatomic) NSString *executableObject;

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
