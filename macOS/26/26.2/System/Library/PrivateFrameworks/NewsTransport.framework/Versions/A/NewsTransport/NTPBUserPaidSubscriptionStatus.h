@class NSString;

@interface NTPBUserPaidSubscriptionStatus : PBCodable <NSCopying> {
    struct { unsigned char paidSubscriptionStatus : 1; } _has;
}

@property (nonatomic) BOOL hasPaidSubscriptionStatus;
@property (nonatomic) int paidSubscriptionStatus;
@property (readonly, nonatomic) BOOL hasPaidSubscriptionChannelId;
@property (retain, nonatomic) NSString *paidSubscriptionChannelId;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (id)paidSubscriptionStatusAsString:(int)a0;
- (int)StringAsPaidSubscriptionStatus:(id)a0;

@end
