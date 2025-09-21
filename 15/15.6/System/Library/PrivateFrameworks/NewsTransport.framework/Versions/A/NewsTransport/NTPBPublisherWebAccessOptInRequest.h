@class NSString;

@interface NTPBPublisherWebAccessOptInRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasChannelId;
@property (retain, nonatomic) NSString *channelId;
@property (readonly, nonatomic) char hasEmail;
@property (retain, nonatomic) NSString *email;
@property (readonly, nonatomic) char hasPurchaseReceipt;
@property (retain, nonatomic) NSString *purchaseReceipt;
@property (readonly, nonatomic) char hasIapId;
@property (retain, nonatomic) NSString *iapId;
@property (readonly, nonatomic) char hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) char hasCountry;
@property (retain, nonatomic) NSString *country;

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
