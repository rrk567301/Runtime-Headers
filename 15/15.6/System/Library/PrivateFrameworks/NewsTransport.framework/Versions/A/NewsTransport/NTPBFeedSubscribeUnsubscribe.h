@class NSString, NSData, NSMutableArray;

@interface NTPBFeedSubscribeUnsubscribe : PBCodable <NSCopying> {
    struct { unsigned char previousArticlePublisherArticleVersion : 1; unsigned char displayRank : 1; unsigned char feedCellHostType : 1; unsigned char feedCellSection : 1; unsigned char feedSubscriptionOrigin : 1; unsigned char feedType : 1; unsigned char feedViewPresentationReason : 1; unsigned char groupType : 1; unsigned char recommendationBrickType : 1; unsigned char subscribeUnsubscribeLocation : 1; unsigned char subscribeUnsubscribeSurfaceReason : 1; unsigned char userAction : 1; unsigned char cameFromGroup : 1; unsigned char isPaidSubscriberToFeed : 1; } _has;
}

@property (nonatomic) char hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) char hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) char hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) char hasSubscribeUnsubscribeLocation;
@property (nonatomic) int subscribeUnsubscribeLocation;
@property (nonatomic) char hasFeedViewPresentationReason;
@property (nonatomic) int feedViewPresentationReason;
@property (nonatomic) char hasFeedCellSection;
@property (nonatomic) int feedCellSection;
@property (nonatomic) char hasFeedCellHostType;
@property (nonatomic) int feedCellHostType;
@property (readonly, nonatomic) char hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) char hasDisplayRank;
@property (nonatomic) int displayRank;
@property (readonly, nonatomic) char hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSMutableArray *subscribedFeedIds;
@property (nonatomic) char hasCameFromGroup;
@property (nonatomic) char cameFromGroup;
@property (readonly, nonatomic) char hasGroupFeedId;
@property (retain, nonatomic) NSString *groupFeedId;
@property (nonatomic) char hasGroupType;
@property (nonatomic) int groupType;
@property (nonatomic) char hasIsPaidSubscriberToFeed;
@property (nonatomic) char isPaidSubscriberToFeed;
@property (readonly, nonatomic) char hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (readonly, nonatomic) char hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (readonly, nonatomic) char hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (nonatomic) char hasRecommendationBrickType;
@property (nonatomic) int recommendationBrickType;
@property (nonatomic) char hasSubscribeUnsubscribeSurfaceReason;
@property (nonatomic) int subscribeUnsubscribeSurfaceReason;
@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) char hasPreviousArticleId;
@property (retain, nonatomic) NSString *previousArticleId;
@property (readonly, nonatomic) char hasPreviousArticleVersion;
@property (retain, nonatomic) NSString *previousArticleVersion;
@property (nonatomic) char hasFeedSubscriptionOrigin;
@property (nonatomic) int feedSubscriptionOrigin;
@property (nonatomic) char hasPreviousArticlePublisherArticleVersion;
@property (nonatomic) long long previousArticlePublisherArticleVersion;
@property (readonly, nonatomic) char hasGroupViewExposureId;
@property (retain, nonatomic) NSData *groupViewExposureId;

+ (Class)subscribedFeedIdsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsFeedSubscriptionOrigin:(id)a0;
- (int)StringAsFeedCellSection:(id)a0;
- (int)StringAsFeedType:(id)a0;
- (id)feedSubscriptionOriginAsString:(int)a0;
- (int)StringAsFeedCellHostType:(id)a0;
- (int)StringAsFeedViewPresentationReason:(id)a0;
- (int)StringAsGroupType:(id)a0;
- (int)StringAsRecommendationBrickType:(id)a0;
- (void)addSubscribedFeedIds:(id)a0;
- (void)clearSubscribedFeedIds;
- (id)feedCellHostTypeAsString:(int)a0;
- (id)feedCellSectionAsString:(int)a0;
- (id)feedTypeAsString:(int)a0;
- (id)feedViewPresentationReasonAsString:(int)a0;
- (id)groupTypeAsString:(int)a0;
- (id)recommendationBrickTypeAsString:(int)a0;
- (id)subscribedFeedIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)subscribedFeedIdsCount;

@end
