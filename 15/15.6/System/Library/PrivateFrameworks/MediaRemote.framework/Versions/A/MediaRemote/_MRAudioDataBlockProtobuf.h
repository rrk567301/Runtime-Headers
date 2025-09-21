@class _MRAudioTimeProtobuf, _MRAudioBufferProtobuf;

@interface _MRAudioDataBlockProtobuf : PBCodable <NSCopying> {
    struct { unsigned char gain : 1; } _has;
}

@property (readonly, nonatomic) char hasBuffer;
@property (retain, nonatomic) _MRAudioBufferProtobuf *buffer;
@property (readonly, nonatomic) char hasTime;
@property (retain, nonatomic) _MRAudioTimeProtobuf *time;
@property (nonatomic) char hasGain;
@property (nonatomic) double gain;

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
