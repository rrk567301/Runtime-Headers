@interface NTPBChannelData : PBCodable <NSCopying> {
    struct { unsigned char isBundleChannel : 1; } _has;
}

@property (nonatomic) char hasIsBundleChannel;
@property (nonatomic) char isBundleChannel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
