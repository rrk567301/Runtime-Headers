@class NSString;

@interface BMPBStoreBookmark : PBCodable <NSCopying> {
    struct { unsigned char iterationStartTime : 1; unsigned char offset : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasStreamId;
@property (retain, nonatomic) NSString *streamId;
@property (readonly, nonatomic) BOOL hasSegmentName;
@property (retain, nonatomic) NSString *segmentName;
@property (nonatomic) BOOL hasIterationStartTime;
@property (nonatomic) double iterationStartTime;
@property (nonatomic) BOOL hasOffset;
@property (nonatomic) unsigned int offset;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
