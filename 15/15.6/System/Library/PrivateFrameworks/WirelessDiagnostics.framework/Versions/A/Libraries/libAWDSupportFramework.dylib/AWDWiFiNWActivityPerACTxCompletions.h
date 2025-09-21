@interface AWDWiFiNWActivityPerACTxCompletions : PBCodable <NSCopying> {
    struct { unsigned char ac : 1; unsigned char dpsNotifications : 1; unsigned char durSinceLastEnqueue : 1; unsigned char durSinceLastEnqueueAtLastCheck : 1; unsigned char durSinceLastFailedComp : 1; unsigned char durSinceLastSuccessfulComp : 1; unsigned char expiredComp : 1; unsigned char failedComp : 1; unsigned char failedCompletionsAtLastCheck : 1; unsigned char noAckComp : 1; unsigned char otherErrComp : 1; unsigned char qeuedPackets : 1; unsigned char sinceLastEnqueueHowManyFailed : 1; unsigned char sinceLastEnqueueHowManySuccess : 1; unsigned char sinceLastSuccessHowManyFailed : 1; unsigned char success : 1; unsigned char successfulCompletionsAtLastCheck : 1; } _has;
}

@property (nonatomic) char hasAc;
@property (nonatomic) int ac;
@property (nonatomic) char hasSuccess;
@property (nonatomic) unsigned int success;
@property (nonatomic) char hasDurSinceLastSuccessfulComp;
@property (nonatomic) unsigned int durSinceLastSuccessfulComp;
@property (nonatomic) char hasFailedComp;
@property (nonatomic) unsigned int failedComp;
@property (nonatomic) char hasDurSinceLastFailedComp;
@property (nonatomic) unsigned int durSinceLastFailedComp;
@property (nonatomic) char hasExpiredComp;
@property (nonatomic) unsigned int expiredComp;
@property (nonatomic) char hasNoAckComp;
@property (nonatomic) unsigned int noAckComp;
@property (nonatomic) char hasOtherErrComp;
@property (nonatomic) unsigned int otherErrComp;
@property (nonatomic) char hasDurSinceLastEnqueue;
@property (nonatomic) unsigned int durSinceLastEnqueue;
@property (nonatomic) char hasQeuedPackets;
@property (nonatomic) unsigned int qeuedPackets;
@property (nonatomic) char hasSinceLastEnqueueHowManyFailed;
@property (nonatomic) unsigned int sinceLastEnqueueHowManyFailed;
@property (nonatomic) char hasSinceLastEnqueueHowManySuccess;
@property (nonatomic) unsigned int sinceLastEnqueueHowManySuccess;
@property (nonatomic) char hasSinceLastSuccessHowManyFailed;
@property (nonatomic) unsigned int sinceLastSuccessHowManyFailed;
@property (nonatomic) char hasDurSinceLastEnqueueAtLastCheck;
@property (nonatomic) unsigned int durSinceLastEnqueueAtLastCheck;
@property (nonatomic) char hasSuccessfulCompletionsAtLastCheck;
@property (nonatomic) unsigned int successfulCompletionsAtLastCheck;
@property (nonatomic) char hasFailedCompletionsAtLastCheck;
@property (nonatomic) unsigned int failedCompletionsAtLastCheck;
@property (nonatomic) char hasDpsNotifications;
@property (nonatomic) unsigned int dpsNotifications;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsAc:(id)a0;
- (id)acAsString:(int)a0;

@end
