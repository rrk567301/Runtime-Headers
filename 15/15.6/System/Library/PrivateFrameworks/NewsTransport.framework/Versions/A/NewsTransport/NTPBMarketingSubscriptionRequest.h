@class NSString, NTPBDeviceInfo;

@interface NTPBMarketingSubscriptionRequest : PBRequest <NSCopying> {
    struct { unsigned char subscriptionAction : 1; unsigned char subscriptionType : 1; } _has;
}

@property (nonatomic) char hasSubscriptionType;
@property (nonatomic) int subscriptionType;
@property (nonatomic) char hasSubscriptionAction;
@property (nonatomic) int subscriptionAction;
@property (readonly, nonatomic) char hasDsid;
@property (retain, nonatomic) NSString *dsid;
@property (readonly, nonatomic) char hasDeviceInfo;
@property (retain, nonatomic) NTPBDeviceInfo *deviceInfo;

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
