@interface NTPBForYouTodaySectionSpecificConfig : PBCodable <NSCopying> {
    struct { unsigned char cutoffTime : 1; unsigned char feedItemMaxCount : 1; unsigned char feedMaxCount : 1; unsigned char headlinesPerFeedFetchCount : 1; unsigned char localNewsPromotionIndex : 1; unsigned char minimumUpdateInterval : 1; unsigned char subscriptionsFetchCount : 1; unsigned char fetchingBin : 1; } _has;
}

@property (nonatomic) char hasCutoffTime;
@property (nonatomic) unsigned long long cutoffTime;
@property (nonatomic) char hasSubscriptionsFetchCount;
@property (nonatomic) unsigned long long subscriptionsFetchCount;
@property (nonatomic) char hasHeadlinesPerFeedFetchCount;
@property (nonatomic) unsigned long long headlinesPerFeedFetchCount;
@property (nonatomic) char hasFetchingBin;
@property (nonatomic) int fetchingBin;
@property (nonatomic) char hasMinimumUpdateInterval;
@property (nonatomic) unsigned long long minimumUpdateInterval;
@property (nonatomic) char hasLocalNewsPromotionIndex;
@property (nonatomic) unsigned long long localNewsPromotionIndex;
@property (nonatomic) char hasFeedMaxCount;
@property (nonatomic) unsigned long long feedMaxCount;
@property (nonatomic) char hasFeedItemMaxCount;
@property (nonatomic) unsigned long long feedItemMaxCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
