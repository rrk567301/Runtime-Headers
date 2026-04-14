@interface NTPBSubscriptionDetectionScreenView : PBCodable <NSCopying> {
    struct { unsigned char countOfSubscriptionsDetected : 1; } _has;
}

@property (nonatomic) BOOL hasCountOfSubscriptionsDetected;
@property (nonatomic) int countOfSubscriptionsDetected;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
