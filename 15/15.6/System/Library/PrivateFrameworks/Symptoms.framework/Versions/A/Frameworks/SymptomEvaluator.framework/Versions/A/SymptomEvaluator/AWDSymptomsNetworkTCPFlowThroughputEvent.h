@interface AWDSymptomsNetworkTCPFlowThroughputEvent : PBCodable <NSCopying> {
    struct { unsigned char connAttempts : 1; unsigned char connSuccess : 1; unsigned char delayedACKFactor : 1; unsigned char dlThroughputBytesPerSec : 1; unsigned char estimatorConfidence : 1; unsigned char estimatorDelayMsecs : 1; unsigned char flowDurationMsecs : 1; unsigned char invalidResponses : 1; unsigned char lQM : 1; unsigned char maxCongestionWindow : 1; unsigned char packetErrorRate : 1; unsigned char retransmissionTimeoutMsecs : 1; unsigned char rttAverageMsecs : 1; unsigned char rttMinimumMsecs : 1; unsigned char rttVariation : 1; unsigned char rxBytes : 1; unsigned char rxDuplicateBytes : 1; unsigned char rxOutOfOrderBytes : 1; unsigned char timeToNetworkEventsMsecs : 1; unsigned char txBytes : 1; unsigned char txRetransmittedBytes : 1; unsigned char ulThroughputBytesPerSec : 1; unsigned char snapshotType : 1; unsigned char throughputType : 1; } _has;
}

@property (nonatomic) char hasTimeToNetworkEventsMsecs;
@property (nonatomic) unsigned long long timeToNetworkEventsMsecs;
@property (nonatomic) char hasThroughputType;
@property (nonatomic) int throughputType;
@property (nonatomic) char hasSnapshotType;
@property (nonatomic) int snapshotType;
@property (nonatomic) char hasTxBytes;
@property (nonatomic) unsigned long long txBytes;
@property (nonatomic) char hasRxBytes;
@property (nonatomic) unsigned long long rxBytes;
@property (nonatomic) char hasFlowDurationMsecs;
@property (nonatomic) unsigned long long flowDurationMsecs;
@property (nonatomic) char hasUlThroughputBytesPerSec;
@property (nonatomic) unsigned long long ulThroughputBytesPerSec;
@property (nonatomic) char hasDlThroughputBytesPerSec;
@property (nonatomic) unsigned long long dlThroughputBytesPerSec;
@property (nonatomic) char hasEstimatorDelayMsecs;
@property (nonatomic) unsigned long long estimatorDelayMsecs;
@property (nonatomic) char hasEstimatorConfidence;
@property (nonatomic) unsigned long long estimatorConfidence;
@property (nonatomic) char hasInvalidResponses;
@property (nonatomic) unsigned long long invalidResponses;
@property (nonatomic) char hasRxDuplicateBytes;
@property (nonatomic) unsigned long long rxDuplicateBytes;
@property (nonatomic) char hasRxOutOfOrderBytes;
@property (nonatomic) unsigned long long rxOutOfOrderBytes;
@property (nonatomic) char hasTxRetransmittedBytes;
@property (nonatomic) unsigned long long txRetransmittedBytes;
@property (nonatomic) char hasConnAttempts;
@property (nonatomic) unsigned long long connAttempts;
@property (nonatomic) char hasConnSuccess;
@property (nonatomic) unsigned long long connSuccess;
@property (nonatomic) char hasRttMinimumMsecs;
@property (nonatomic) unsigned long long rttMinimumMsecs;
@property (nonatomic) char hasRttAverageMsecs;
@property (nonatomic) unsigned long long rttAverageMsecs;
@property (nonatomic) char hasRttVariation;
@property (nonatomic) unsigned long long rttVariation;
@property (nonatomic) char hasMaxCongestionWindow;
@property (nonatomic) unsigned long long maxCongestionWindow;
@property (nonatomic) char hasDelayedACKFactor;
@property (nonatomic) unsigned long long delayedACKFactor;
@property (nonatomic) char hasRetransmissionTimeoutMsecs;
@property (nonatomic) unsigned long long retransmissionTimeoutMsecs;
@property (nonatomic) char hasPacketErrorRate;
@property (nonatomic) unsigned long long packetErrorRate;
@property (nonatomic) char hasLQM;
@property (nonatomic) long long lQM;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSnapshotType:(id)a0;
- (int)StringAsThroughputType:(id)a0;
- (id)snapshotTypeAsString:(int)a0;
- (id)throughputTypeAsString:(int)a0;

@end
