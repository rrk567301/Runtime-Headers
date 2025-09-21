@interface AWDSidecarBssSteering : PBCodable <NSCopying> {
    struct { unsigned char attemptPeerCount : 1; unsigned char attemptStatus : 1; unsigned char bssSyncChannel : 1; unsigned char bssSyncChannelFlags : 1; unsigned char completionTime : 1; unsigned char peerChannel : 1; unsigned char peerChannelFlags : 1; unsigned char policyCode : 1; unsigned char selfInfraChannel : 1; unsigned char selfInfraChannelFlags : 1; unsigned char targetChannel : 1; unsigned char targetChannelFlags : 1; unsigned char trafficType : 1; } _has;
}

@property (nonatomic) char hasTrafficType;
@property (nonatomic) unsigned int trafficType;
@property (nonatomic) char hasCompletionTime;
@property (nonatomic) unsigned int completionTime;
@property (nonatomic) char hasAttemptStatus;
@property (nonatomic) unsigned int attemptStatus;
@property (nonatomic) char hasAttemptPeerCount;
@property (nonatomic) unsigned int attemptPeerCount;
@property (nonatomic) char hasBssSyncChannel;
@property (nonatomic) unsigned int bssSyncChannel;
@property (nonatomic) char hasPeerChannel;
@property (nonatomic) unsigned int peerChannel;
@property (nonatomic) char hasSelfInfraChannel;
@property (nonatomic) unsigned int selfInfraChannel;
@property (nonatomic) char hasTargetChannel;
@property (nonatomic) unsigned int targetChannel;
@property (nonatomic) char hasPolicyCode;
@property (nonatomic) unsigned int policyCode;
@property (nonatomic) char hasPeerChannelFlags;
@property (nonatomic) unsigned int peerChannelFlags;
@property (nonatomic) char hasSelfInfraChannelFlags;
@property (nonatomic) unsigned int selfInfraChannelFlags;
@property (nonatomic) char hasBssSyncChannelFlags;
@property (nonatomic) unsigned int bssSyncChannelFlags;
@property (nonatomic) char hasTargetChannelFlags;
@property (nonatomic) unsigned int targetChannelFlags;

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
