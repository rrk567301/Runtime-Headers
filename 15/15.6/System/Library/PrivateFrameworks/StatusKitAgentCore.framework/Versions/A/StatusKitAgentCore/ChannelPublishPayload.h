@class NSData, NSString, ChannelIdentity;

@interface ChannelPublishPayload : PBCodable <NSCopying> {
    struct { unsigned char publishInitiateTimestampMillis : 1; unsigned char publishPayloadExpiryTtlMillis : 1; unsigned char pushPriority : 1; unsigned char retryCount : 1; unsigned char pendingPublishHint : 1; unsigned char scheduledPublishHint : 1; } _has;
}

@property (nonatomic) char hasPublishInitiateTimestampMillis;
@property (nonatomic) unsigned long long publishInitiateTimestampMillis;
@property (readonly, nonatomic) char hasChannelIdentity;
@property (retain, nonatomic) ChannelIdentity *channelIdentity;
@property (readonly, nonatomic) char hasPublishPayload;
@property (retain, nonatomic) NSData *publishPayload;
@property (nonatomic) char hasPublishPayloadExpiryTtlMillis;
@property (nonatomic) unsigned long long publishPayloadExpiryTtlMillis;
@property (nonatomic) char hasPushPriority;
@property (nonatomic) int pushPriority;
@property (nonatomic) char hasPendingPublishHint;
@property (nonatomic) char pendingPublishHint;
@property (nonatomic) char hasScheduledPublishHint;
@property (nonatomic) char scheduledPublishHint;
@property (nonatomic) char hasRetryCount;
@property (nonatomic) unsigned int retryCount;
@property (readonly, nonatomic) char hasAdopter;
@property (retain, nonatomic) NSString *adopter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsPushPriority:(id)a0;
- (id)pushPriorityAsString:(int)a0;

@end
