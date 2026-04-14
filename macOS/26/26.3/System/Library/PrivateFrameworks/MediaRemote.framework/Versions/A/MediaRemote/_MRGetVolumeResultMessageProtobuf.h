@interface _MRGetVolumeResultMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char volume : 1; } _has;
}

@property (nonatomic) BOOL hasVolume;
@property (nonatomic) float volume;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
