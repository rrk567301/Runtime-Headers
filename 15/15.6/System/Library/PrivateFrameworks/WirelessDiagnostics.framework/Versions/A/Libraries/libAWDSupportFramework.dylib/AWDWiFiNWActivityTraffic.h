@interface AWDWiFiNWActivityTraffic : PBCodable <NSCopying> {
    struct { unsigned char value : 1; unsigned char traffic : 1; } _has;
}

@property (nonatomic) char hasValue;
@property (nonatomic) unsigned long long value;
@property (nonatomic) char hasTraffic;
@property (nonatomic) int traffic;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsTraffic:(id)a0;
- (id)trafficAsString:(int)a0;

@end
