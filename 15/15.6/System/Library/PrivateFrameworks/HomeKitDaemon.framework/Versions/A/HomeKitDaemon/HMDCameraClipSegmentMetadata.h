@interface HMDCameraClipSegmentMetadata : PBCodable <NSCopying> {
    struct { unsigned char byteLength : 1; unsigned char byteOffset : 1; unsigned char duration : 1; unsigned char timeOffset : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasByteOffset;
@property (nonatomic) unsigned long long byteOffset;
@property (nonatomic) char hasByteLength;
@property (nonatomic) unsigned long long byteLength;
@property (nonatomic) char hasTimeOffset;
@property (nonatomic) double timeOffset;
@property (nonatomic) char hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) char hasType;
@property (nonatomic) int type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
