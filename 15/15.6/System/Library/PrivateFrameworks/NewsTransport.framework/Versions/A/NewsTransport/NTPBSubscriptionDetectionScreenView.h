@interface NTPBSubscriptionDetectionScreenView : PBCodable <NSCopying> {
    struct { unsigned char countOfSubscriptionsDetected : 1; } _has;
}

@property (nonatomic) char hasCountOfSubscriptionsDetected;
@property (nonatomic) int countOfSubscriptionsDetected;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
