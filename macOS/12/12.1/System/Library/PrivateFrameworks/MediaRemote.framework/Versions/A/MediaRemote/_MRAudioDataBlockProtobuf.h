@class _MRAudioTimeProtobuf, _MRAudioBufferProtobuf;

@interface _MRAudioDataBlockProtobuf : PBCodable <NSCopying> {
    double _gain;
    _MRAudioBufferProtobuf *_buffer;
    _MRAudioTimeProtobuf *_time;
    struct { unsigned char gain : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
