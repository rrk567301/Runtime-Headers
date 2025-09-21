@class NSString;

@interface NTPBNotificationSubscribeUnsubscribe : PBCodable <NSCopying> {
    struct { unsigned char notificationSettingType : 1; unsigned char notificationSubscribeUnsubscribeLocation : 1; unsigned char userAction : 1; unsigned char isPaidUserOfChannel : 1; } _has;
}

@property (nonatomic) char hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) char hasNotificationSubscribeUnsubscribeLocation;
@property (nonatomic) int notificationSubscribeUnsubscribeLocation;
@property (readonly, nonatomic) char hasChannelId;
@property (retain, nonatomic) NSString *channelId;
@property (nonatomic) char hasIsPaidUserOfChannel;
@property (nonatomic) char isPaidUserOfChannel;
@property (readonly, nonatomic) char hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (readonly, nonatomic) char hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (readonly, nonatomic) char hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (nonatomic) char hasNotificationSettingType;
@property (nonatomic) int notificationSettingType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
