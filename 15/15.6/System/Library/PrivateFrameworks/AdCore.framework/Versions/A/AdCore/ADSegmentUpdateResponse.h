@class NSString;

@interface ADSegmentUpdateResponse : PBCodable <NSCopying> {
    struct { unsigned char maxSegmentUpdateIntervalInSeconds : 1; unsigned char segmentRefreshIntervalInSeconds : 1; } _has;
}

@property (readonly, nonatomic) char hasIdDebug;
@property (retain, nonatomic) NSString *idDebug;
@property (nonatomic) char hasSegmentRefreshIntervalInSeconds;
@property (nonatomic) double segmentRefreshIntervalInSeconds;
@property (nonatomic) char hasMaxSegmentUpdateIntervalInSeconds;
@property (nonatomic) double maxSegmentUpdateIntervalInSeconds;

+ (id)options;

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
