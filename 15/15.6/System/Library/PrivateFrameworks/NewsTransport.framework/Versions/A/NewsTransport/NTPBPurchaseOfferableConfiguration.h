@class NSString;

@interface NTPBPurchaseOfferableConfiguration : PBCodable <NSCopying> {
    struct { unsigned char allowsPublisherPadApp : 1; unsigned char allowsPublisherPhoneApp : 1; unsigned char allowsPublisherWebSite : 1; unsigned char preferredOffer : 1; } _has;
}

@property (readonly, nonatomic) char hasPurchaseId;
@property (retain, nonatomic) NSString *purchaseId;
@property (nonatomic) char hasAllowsPublisherPhoneApp;
@property (nonatomic) char allowsPublisherPhoneApp;
@property (nonatomic) char hasAllowsPublisherPadApp;
@property (nonatomic) char allowsPublisherPadApp;
@property (nonatomic) char hasAllowsPublisherWebSite;
@property (nonatomic) char allowsPublisherWebSite;
@property (nonatomic) char hasPreferredOffer;
@property (nonatomic) char preferredOffer;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
