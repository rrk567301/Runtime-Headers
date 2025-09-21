@interface NTPBPaidSubscriptionConfig : PBCodable <NSCopying> {
    struct { unsigned char maxGroupSizeIPad : 1; unsigned char maxGroupSizeIPhone : 1; unsigned char maxTimesHeadlineInGroup : 1; } _has;
}

@property (nonatomic) char hasMaxGroupSizeIPad;
@property (nonatomic) long long maxGroupSizeIPad;
@property (nonatomic) char hasMaxGroupSizeIPhone;
@property (nonatomic) long long maxGroupSizeIPhone;
@property (nonatomic) char hasMaxTimesHeadlineInGroup;
@property (nonatomic) long long maxTimesHeadlineInGroup;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
