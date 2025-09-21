@interface AWDRxPhyErrors : PBCodable <NSCopying> {
    struct { unsigned char bphyBadplcp : 1; unsigned char bphyRxcrsglitch : 1; unsigned char rfdisable : 1; } _has;
}

@property (nonatomic) char hasRfdisable;
@property (nonatomic) unsigned long long rfdisable;
@property (nonatomic) char hasBphyRxcrsglitch;
@property (nonatomic) unsigned long long bphyRxcrsglitch;
@property (nonatomic) char hasBphyBadplcp;
@property (nonatomic) unsigned long long bphyBadplcp;

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
