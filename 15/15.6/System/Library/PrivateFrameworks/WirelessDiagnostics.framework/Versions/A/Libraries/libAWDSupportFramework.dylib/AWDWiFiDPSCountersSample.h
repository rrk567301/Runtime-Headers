@class AWDWiFiNWActivityPeerStats, AWDWiFiNWActivityControllerStats;

@interface AWDWiFiDPSCountersSample : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasControllerStats;
@property (retain, nonatomic) AWDWiFiNWActivityControllerStats *controllerStats;
@property (readonly, nonatomic) char hasPeerStats;
@property (retain, nonatomic) AWDWiFiNWActivityPeerStats *peerStats;

- (void)dealloc;
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
