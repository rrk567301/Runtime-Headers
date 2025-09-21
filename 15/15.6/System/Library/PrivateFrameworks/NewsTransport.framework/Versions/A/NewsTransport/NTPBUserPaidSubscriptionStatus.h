@class NSString;

@interface NTPBUserPaidSubscriptionStatus : PBCodable <NSCopying> {
    struct { unsigned char paidSubscriptionStatus : 1; } _has;
}

@property (nonatomic) char hasPaidSubscriptionStatus;
@property (nonatomic) int paidSubscriptionStatus;
@property (readonly, nonatomic) char hasPaidSubscriptionChannelId;
@property (retain, nonatomic) NSString *paidSubscriptionChannelId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)paidSubscriptionStatusAsString:(int)a0;
- (int)StringAsPaidSubscriptionStatus:(id)a0;

@end
