@class NSString, NSMutableArray, ChannelIdentity;

@interface ChannelDeferredPublishInfo : PBCodable <NSCopying> {
    struct { unsigned char pushPriority : 1; unsigned char retryCount : 1; } _has;
}

@property (readonly, nonatomic) char hasChannelIdentity;
@property (retain, nonatomic) ChannelIdentity *channelIdentity;
@property (retain, nonatomic) NSMutableArray *channelProvisionOffGridPacketInfos;
@property (nonatomic) char hasPushPriority;
@property (nonatomic) int pushPriority;
@property (nonatomic) char hasRetryCount;
@property (nonatomic) unsigned int retryCount;
@property (readonly, nonatomic) char hasAdopter;
@property (retain, nonatomic) NSString *adopter;

+ (Class)channelProvisionOffGridPacketInfoType;

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
- (void)addChannelProvisionOffGridPacketInfo:(id)a0;
- (id)channelProvisionOffGridPacketInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)channelProvisionOffGridPacketInfosCount;
- (void)clearChannelProvisionOffGridPacketInfos;
- (id)pushPriorityAsString:(int)a0;

@end
