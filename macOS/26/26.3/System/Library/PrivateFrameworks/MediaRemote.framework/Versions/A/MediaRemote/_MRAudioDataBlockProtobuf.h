@class _MRAudioTimeProtobuf, _MRAudioBufferProtobuf;

@interface _MRAudioDataBlockProtobuf : PBCodable <NSCopying> {
    struct { unsigned char gain : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBuffer;
@property (retain, nonatomic) _MRAudioBufferProtobuf *buffer;
@property (readonly, nonatomic) BOOL hasTime;
@property (retain, nonatomic) _MRAudioTimeProtobuf *time;
@property (nonatomic) BOOL hasGain;
@property (nonatomic) double gain;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
