@interface _MRVideoThumbnailRequestProtobuf : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _timeIntervals;
    struct { unsigned char thumbnailsHeight : 1; unsigned char thumbnailsWidth : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long timeIntervalsCount;
@property (readonly, nonatomic) double *timeIntervals;
@property (nonatomic) char hasThumbnailsWidth;
@property (nonatomic) float thumbnailsWidth;
@property (nonatomic) char hasThumbnailsHeight;
@property (nonatomic) float thumbnailsHeight;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTimeIntervals:(double)a0;
- (void)clearTimeIntervals;
- (void)setTimeIntervals:(double *)a0 count:(unsigned long long)a1;
- (double)timeIntervalsAtIndex:(unsigned long long)a0;

@end
