@interface AWDLibnetcoreConnectionDataUsageSnapshot : PBCodable <NSCopying> {
    struct { unsigned char bytesIn : 1; unsigned char bytesOut : 1; unsigned char multipathBytesInCell : 1; unsigned char multipathBytesInInitial : 1; unsigned char multipathBytesInWiFi : 1; unsigned char multipathBytesOutCell : 1; unsigned char multipathBytesOutInitial : 1; unsigned char multipathBytesOutWiFi : 1; } _has;
}

@property (nonatomic) char hasBytesIn;
@property (nonatomic) unsigned long long bytesIn;
@property (nonatomic) char hasBytesOut;
@property (nonatomic) unsigned long long bytesOut;
@property (nonatomic) char hasMultipathBytesInCell;
@property (nonatomic) unsigned long long multipathBytesInCell;
@property (nonatomic) char hasMultipathBytesOutCell;
@property (nonatomic) unsigned long long multipathBytesOutCell;
@property (nonatomic) char hasMultipathBytesInWiFi;
@property (nonatomic) unsigned long long multipathBytesInWiFi;
@property (nonatomic) char hasMultipathBytesOutWiFi;
@property (nonatomic) unsigned long long multipathBytesOutWiFi;
@property (nonatomic) char hasMultipathBytesInInitial;
@property (nonatomic) unsigned long long multipathBytesInInitial;
@property (nonatomic) char hasMultipathBytesOutInitial;
@property (nonatomic) unsigned long long multipathBytesOutInitial;

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
