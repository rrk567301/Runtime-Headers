@interface AWDWiFiDPSAWDLSnapshot : PBCodable <NSCopying> {
    struct { unsigned char ts : 1; unsigned char duration : 1; unsigned char sdb : 1; unsigned char use : 1; } _has;
}

@property (nonatomic) char hasTs;
@property (nonatomic) unsigned long long ts;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) char hasUse;
@property (nonatomic) unsigned int use;
@property (nonatomic) char hasSdb;
@property (nonatomic) unsigned int sdb;

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
