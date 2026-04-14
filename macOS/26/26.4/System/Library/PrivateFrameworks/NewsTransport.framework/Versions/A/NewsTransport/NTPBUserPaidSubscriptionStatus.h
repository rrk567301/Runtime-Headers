@class NSString;

@interface NTPBUserPaidSubscriptionStatus : PBCodable <NSCopying> {
    struct { unsigned char paidSubscriptionStatus : 1; } _has;
}

@property (nonatomic) BOOL hasPaidSubscriptionStatus;
@property (nonatomic) int paidSubscriptionStatus;
@property (readonly, nonatomic) BOOL hasPaidSubscriptionChannelId;
@property (retain, nonatomic) NSString *paidSubscriptionChannelId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsPaidSubscriptionStatus:(id)a0;
- (id)paidSubscriptionStatusAsString:(int)a0;

@end
