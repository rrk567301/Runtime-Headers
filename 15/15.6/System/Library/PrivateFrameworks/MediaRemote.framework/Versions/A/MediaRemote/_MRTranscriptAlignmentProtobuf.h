@interface _MRTranscriptAlignmentProtobuf : PBCodable <NSCopying> {
    struct { unsigned char playerEndTime : 1; unsigned char playerStartTime : 1; unsigned char referenceEndTime : 1; unsigned char referenceStartTime : 1; unsigned char matchedBeginning : 1; unsigned char matchedEnd : 1; } _has;
}

@property (nonatomic) char hasPlayerStartTime;
@property (nonatomic) double playerStartTime;
@property (nonatomic) char hasPlayerEndTime;
@property (nonatomic) double playerEndTime;
@property (nonatomic) char hasReferenceStartTime;
@property (nonatomic) double referenceStartTime;
@property (nonatomic) char hasReferenceEndTime;
@property (nonatomic) double referenceEndTime;
@property (nonatomic) char hasMatchedBeginning;
@property (nonatomic) char matchedBeginning;
@property (nonatomic) char hasMatchedEnd;
@property (nonatomic) char matchedEnd;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
