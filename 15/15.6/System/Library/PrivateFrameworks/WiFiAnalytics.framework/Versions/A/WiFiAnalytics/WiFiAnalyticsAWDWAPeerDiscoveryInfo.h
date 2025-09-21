@interface WiFiAnalyticsAWDWAPeerDiscoveryInfo : PBCodable <NSCopying> {
    struct { unsigned char iOSPeers : 1; unsigned char macOSPeers : 1; unsigned char numPeersDiscovered : 1; unsigned char tvOSPeers : 1; } _has;
}

@property (nonatomic) char hasNumPeersDiscovered;
@property (nonatomic) unsigned int numPeersDiscovered;
@property (nonatomic) char hasIOSPeers;
@property (nonatomic) unsigned int iOSPeers;
@property (nonatomic) char hasTvOSPeers;
@property (nonatomic) unsigned int tvOSPeers;
@property (nonatomic) char hasMacOSPeers;
@property (nonatomic) unsigned int macOSPeers;

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
