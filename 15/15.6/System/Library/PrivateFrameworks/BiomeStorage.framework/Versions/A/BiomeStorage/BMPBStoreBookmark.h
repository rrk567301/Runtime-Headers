@class NSString;

@interface BMPBStoreBookmark : PBCodable <NSCopying> {
    struct { unsigned char iterationStartTime : 1; unsigned char offset : 1; } _has;
}

@property (readonly, nonatomic) char hasStreamId;
@property (retain, nonatomic) NSString *streamId;
@property (readonly, nonatomic) char hasSegmentName;
@property (retain, nonatomic) NSString *segmentName;
@property (nonatomic) char hasIterationStartTime;
@property (nonatomic) double iterationStartTime;
@property (nonatomic) char hasOffset;
@property (nonatomic) unsigned int offset;

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
