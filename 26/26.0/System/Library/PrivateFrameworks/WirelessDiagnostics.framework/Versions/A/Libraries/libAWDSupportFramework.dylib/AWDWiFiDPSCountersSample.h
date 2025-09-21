@class AWDWiFiNWActivityPeerStats, AWDWiFiNWActivityControllerStats;

@interface AWDWiFiDPSCountersSample : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasControllerStats;
@property (retain, nonatomic) AWDWiFiNWActivityControllerStats *controllerStats;
@property (readonly, nonatomic) BOOL hasPeerStats;
@property (retain, nonatomic) AWDWiFiNWActivityPeerStats *peerStats;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
