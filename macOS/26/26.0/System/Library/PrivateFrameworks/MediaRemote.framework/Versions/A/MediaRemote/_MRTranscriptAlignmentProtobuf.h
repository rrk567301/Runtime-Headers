@interface _MRTranscriptAlignmentProtobuf : PBCodable <NSCopying> {
    struct { unsigned char playerEndTime : 1; unsigned char playerStartTime : 1; unsigned char referenceEndTime : 1; unsigned char referenceStartTime : 1; unsigned char matchedBeginning : 1; unsigned char matchedEnd : 1; } _has;
}

@property (nonatomic) BOOL hasPlayerStartTime;
@property (nonatomic) double playerStartTime;
@property (nonatomic) BOOL hasPlayerEndTime;
@property (nonatomic) double playerEndTime;
@property (nonatomic) BOOL hasReferenceStartTime;
@property (nonatomic) double referenceStartTime;
@property (nonatomic) BOOL hasReferenceEndTime;
@property (nonatomic) double referenceEndTime;
@property (nonatomic) BOOL hasMatchedBeginning;
@property (nonatomic) BOOL matchedBeginning;
@property (nonatomic) BOOL hasMatchedEnd;
@property (nonatomic) BOOL matchedEnd;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
