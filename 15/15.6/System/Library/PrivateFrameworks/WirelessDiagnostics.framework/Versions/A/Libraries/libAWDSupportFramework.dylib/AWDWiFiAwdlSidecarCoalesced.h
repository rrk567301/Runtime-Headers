@class AWDSidecarPeerTraffic, AWDSidecarBssSteering, NSString;

@interface AWDWiFiAwdlSidecarCoalesced : PBCodable <NSCopying> {
    struct { unsigned char remoteBgDuration : 1; unsigned char remoteFgDuration : 1; unsigned char selfBgDuration : 1; unsigned char selfFgDuration : 1; unsigned char timestamp : 1; unsigned char pencilOffCount : 1; unsigned char pencilOnCount : 1; unsigned char remoteBgEntryCount : 1; unsigned char remotePeerRssi24G : 1; unsigned char remotePeerRssi5G : 1; unsigned char selfBgEntryCount : 1; unsigned char selfPeerRssi24G : 1; unsigned char selfPeerRssi5G : 1; unsigned char remotefIsSDB : 1; unsigned char selfIsSDB : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasSelfFgDuration;
@property (nonatomic) unsigned long long selfFgDuration;
@property (nonatomic) char hasSelfBgDuration;
@property (nonatomic) unsigned long long selfBgDuration;
@property (nonatomic) char hasSelfBgEntryCount;
@property (nonatomic) unsigned int selfBgEntryCount;
@property (nonatomic) char hasSelfPeerRssi24G;
@property (nonatomic) int selfPeerRssi24G;
@property (nonatomic) char hasSelfPeerRssi5G;
@property (nonatomic) int selfPeerRssi5G;
@property (nonatomic) char hasSelfIsSDB;
@property (nonatomic) char selfIsSDB;
@property (nonatomic) char hasRemoteFgDuration;
@property (nonatomic) unsigned long long remoteFgDuration;
@property (nonatomic) char hasRemoteBgDuration;
@property (nonatomic) unsigned long long remoteBgDuration;
@property (nonatomic) char hasRemoteBgEntryCount;
@property (nonatomic) unsigned int remoteBgEntryCount;
@property (nonatomic) char hasRemotePeerRssi24G;
@property (nonatomic) int remotePeerRssi24G;
@property (nonatomic) char hasRemotePeerRssi5G;
@property (nonatomic) int remotePeerRssi5G;
@property (nonatomic) char hasRemotefIsSDB;
@property (nonatomic) char remotefIsSDB;
@property (readonly, nonatomic) char hasSelfSidecarBssSteering;
@property (retain, nonatomic) AWDSidecarBssSteering *selfSidecarBssSteering;
@property (readonly, nonatomic) char hasRemoteSidecarBssSteering;
@property (retain, nonatomic) AWDSidecarBssSteering *remoteSidecarBssSteering;
@property (readonly, nonatomic) char hasSelfSidecarPeerTraffic;
@property (retain, nonatomic) AWDSidecarPeerTraffic *selfSidecarPeerTraffic;
@property (readonly, nonatomic) char hasRemoteSidecarPeerTraffic;
@property (retain, nonatomic) AWDSidecarPeerTraffic *remoteSidecarPeerTraffic;
@property (nonatomic) char hasPencilOnCount;
@property (nonatomic) unsigned int pencilOnCount;
@property (nonatomic) char hasPencilOffCount;
@property (nonatomic) unsigned int pencilOffCount;
@property (readonly, nonatomic) char hasSessionUUID;
@property (retain, nonatomic) NSString *sessionUUID;

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
