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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
