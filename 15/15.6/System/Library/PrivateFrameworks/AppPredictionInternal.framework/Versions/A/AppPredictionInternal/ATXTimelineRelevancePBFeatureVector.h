@interface ATXTimelineRelevancePBFeatureVector : PBCodable <NSCopying> {
    struct { unsigned char appLaunchCount : 1; unsigned char appLaunchPopularity : 1; } _has;
}

@property (nonatomic) char hasAppLaunchPopularity;
@property (nonatomic) long long appLaunchPopularity;
@property (nonatomic) char hasAppLaunchCount;
@property (nonatomic) long long appLaunchCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
