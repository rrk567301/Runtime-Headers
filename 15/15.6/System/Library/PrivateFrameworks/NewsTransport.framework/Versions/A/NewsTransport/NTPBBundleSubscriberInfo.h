@class NSString, NSMutableArray;

@interface NTPBBundleSubscriberInfo : PBCodable <NSCopying> {
    struct { unsigned char startTimestamp : 1; unsigned char bundleSubscriptionStatus : 1; unsigned char isAmplifyUser : 1; unsigned char isBundlePurchaser : 1; unsigned char isStoreDemoModeEnabled : 1; } _has;
}

@property (nonatomic) char hasBundleSubscriptionStatus;
@property (nonatomic) int bundleSubscriptionStatus;
@property (retain, nonatomic) NSMutableArray *subscribedChannelIds;
@property (readonly, nonatomic) char hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (readonly, nonatomic) char hasUserStorefrontId;
@property (retain, nonatomic) NSString *userStorefrontId;
@property (nonatomic) char hasStartTimestamp;
@property (nonatomic) long long startTimestamp;
@property (nonatomic) char hasIsStoreDemoModeEnabled;
@property (nonatomic) char isStoreDemoModeEnabled;
@property (nonatomic) char hasIsBundlePurchaser;
@property (nonatomic) char isBundlePurchaser;
@property (nonatomic) char hasIsAmplifyUser;
@property (nonatomic) char isAmplifyUser;

+ (Class)subscribedChannelIdsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsBundleSubscriptionStatus:(id)a0;
- (void)addSubscribedChannelIds:(id)a0;
- (id)bundleSubscriptionStatusAsString:(int)a0;
- (void)clearSubscribedChannelIds;
- (id)subscribedChannelIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)subscribedChannelIdsCount;

@end
