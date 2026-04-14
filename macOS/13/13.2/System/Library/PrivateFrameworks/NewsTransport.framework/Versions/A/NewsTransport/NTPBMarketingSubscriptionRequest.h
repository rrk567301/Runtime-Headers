@class NSString, NTPBDeviceInfo;

@interface NTPBMarketingSubscriptionRequest : PBRequest <NSCopying> {
    struct { unsigned char subscriptionAction : 1; unsigned char subscriptionType : 1; } _has;
}

@property (nonatomic) BOOL hasSubscriptionType;
@property (nonatomic) int subscriptionType;
@property (nonatomic) BOOL hasSubscriptionAction;
@property (nonatomic) int subscriptionAction;
@property (readonly, nonatomic) BOOL hasDsid;
@property (retain, nonatomic) NSString *dsid;
@property (readonly, nonatomic) BOOL hasDeviceInfo;
@property (retain, nonatomic) NTPBDeviceInfo *deviceInfo;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
