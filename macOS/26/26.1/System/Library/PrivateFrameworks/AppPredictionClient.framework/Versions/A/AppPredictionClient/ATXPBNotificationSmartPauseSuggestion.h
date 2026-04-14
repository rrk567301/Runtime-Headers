@interface ATXPBNotificationSmartPauseSuggestion : PBCodable <NSCopying> {
    struct { unsigned char expirationTimestamp : 1; unsigned char pauseDuration : 1; } _has;
}

@property (nonatomic) BOOL hasExpirationTimestamp;
@property (nonatomic) double expirationTimestamp;
@property (nonatomic) BOOL hasPauseDuration;
@property (nonatomic) double pauseDuration;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
