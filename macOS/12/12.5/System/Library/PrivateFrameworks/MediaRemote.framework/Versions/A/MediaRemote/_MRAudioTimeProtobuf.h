@interface _MRAudioTimeProtobuf : PBCodable <NSCopying> {
    double _sampleRate;
    double _timestamp;
    struct { unsigned char sampleRate : 1; unsigned char timestamp : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
