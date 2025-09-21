@class AWDSidecarPeerTraffic, AWDSidecarBssSteering;

@interface AWDWiFiAwdlSidecar : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _channelSequences;
    struct { unsigned char bgDuration : 1; unsigned char fgDuration : 1; unsigned char timestamp : 1; unsigned char bgEntryCount : 1; unsigned char dfspState : 1; unsigned char infraDisconnectedCount : 1; unsigned char peerRssi24G : 1; unsigned char peerRssi5G : 1; unsigned char isSDB : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasFgDuration;
@property (nonatomic) unsigned long long fgDuration;
@property (nonatomic) char hasBgDuration;
@property (nonatomic) unsigned long long bgDuration;
@property (nonatomic) char hasBgEntryCount;
@property (nonatomic) unsigned int bgEntryCount;
@property (nonatomic) char hasPeerRssi24G;
@property (nonatomic) int peerRssi24G;
@property (nonatomic) char hasPeerRssi5G;
@property (nonatomic) int peerRssi5G;
@property (nonatomic) char hasIsSDB;
@property (nonatomic) char isSDB;
@property (readonly, nonatomic) char hasSidecarBssSteering;
@property (retain, nonatomic) AWDSidecarBssSteering *sidecarBssSteering;
@property (readonly, nonatomic) char hasSidecarPeerTraffic;
@property (retain, nonatomic) AWDSidecarPeerTraffic *sidecarPeerTraffic;
@property (nonatomic) char hasDfspState;
@property (nonatomic) unsigned int dfspState;
@property (nonatomic) char hasInfraDisconnectedCount;
@property (nonatomic) unsigned int infraDisconnectedCount;
@property (readonly, nonatomic) unsigned long long channelSequencesCount;
@property (readonly, nonatomic) unsigned int *channelSequences;

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
- (void)addChannelSequence:(unsigned int)a0;
- (unsigned int)channelSequenceAtIndex:(unsigned long long)a0;
- (void)clearChannelSequences;
- (void)setChannelSequences:(unsigned int *)a0 count:(unsigned long long)a1;

@end
