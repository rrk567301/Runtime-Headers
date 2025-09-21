@interface AWDWifiAwdlStateInfo : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char count : 1; } _has;
}

@property (nonatomic) char hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned long long duration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
