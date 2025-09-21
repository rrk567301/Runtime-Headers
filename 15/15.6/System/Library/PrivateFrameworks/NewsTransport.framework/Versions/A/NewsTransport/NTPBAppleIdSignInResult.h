@class NSData;

@interface NTPBAppleIdSignInResult : PBCodable <NSCopying> {
    struct { unsigned char paidSubscriptionConversionPointType : 1; unsigned char signInResult : 1; } _has;
}

@property (nonatomic) char hasSignInResult;
@property (nonatomic) int signInResult;
@property (nonatomic) char hasPaidSubscriptionConversionPointType;
@property (nonatomic) int paidSubscriptionConversionPointType;
@property (readonly, nonatomic) char hasSubscriptionPurchaseSessionId;
@property (retain, nonatomic) NSData *subscriptionPurchaseSessionId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsPaidSubscriptionConversionPointType:(id)a0;
- (id)paidSubscriptionConversionPointTypeAsString:(int)a0;

@end
