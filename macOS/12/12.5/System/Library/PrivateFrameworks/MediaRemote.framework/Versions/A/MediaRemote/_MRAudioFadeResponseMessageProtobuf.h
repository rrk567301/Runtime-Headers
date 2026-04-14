@interface _MRAudioFadeResponseMessageProtobuf : PBCodable <NSCopying> {
    long long _fadeDuration;
    struct { unsigned char fadeDuration : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
