@class NSString, NTPBIssueData, NSData, NSMutableArray;

@interface NTPBAlreadySubscriberSignIn : PBCodable <NSCopying> {
    struct { unsigned char groupType : 1; unsigned char paidSubscriptionConversionPointType : 1; unsigned char parentFeedType : 1; unsigned char arrivedFromAd : 1; unsigned char subscriptionOnlyArticlePreview : 1; unsigned char successfulNewsTokenVerification : 1; } _has;
}

@property (nonatomic) char hasSuccessfulNewsTokenVerification;
@property (nonatomic) char successfulNewsTokenVerification;
@property (nonatomic) char hasPaidSubscriptionConversionPointType;
@property (nonatomic) int paidSubscriptionConversionPointType;
@property (readonly, nonatomic) char hasErrorMessage;
@property (retain, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) char hasErrorCode;
@property (retain, nonatomic) NSString *errorCode;
@property (readonly, nonatomic) char hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (readonly, nonatomic) char hasSectionId;
@property (retain, nonatomic) NSString *sectionId;
@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) char hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (nonatomic) char hasParentFeedType;
@property (nonatomic) int parentFeedType;
@property (nonatomic) char hasSubscriptionOnlyArticlePreview;
@property (nonatomic) char subscriptionOnlyArticlePreview;
@property (nonatomic) char hasArrivedFromAd;
@property (nonatomic) char arrivedFromAd;
@property (readonly, nonatomic) char hasIadQtoken;
@property (retain, nonatomic) NSString *iadQtoken;
@property (readonly, nonatomic) char hasSubscriptionPurchaseSessionId;
@property (retain, nonatomic) NSData *subscriptionPurchaseSessionId;
@property (readonly, nonatomic) char hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (readonly, nonatomic) char hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (readonly, nonatomic) char hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (nonatomic) char hasGroupType;
@property (nonatomic) int groupType;
@property (readonly, nonatomic) char hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (retain, nonatomic) NSMutableArray *topicIds;
@property (readonly, nonatomic) char hasSurfacedByTopicId;
@property (retain, nonatomic) NSString *surfacedByTopicId;
@property (readonly, nonatomic) char hasSurfacedByChannelId;
@property (retain, nonatomic) NSString *surfacedByChannelId;

+ (Class)topicIdsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsPaidSubscriptionConversionPointType:(id)a0;
- (int)StringAsGroupType:(id)a0;
- (int)StringAsParentFeedType:(id)a0;
- (void)addTopicIds:(id)a0;
- (void)clearTopicIds;
- (id)groupTypeAsString:(int)a0;
- (id)paidSubscriptionConversionPointTypeAsString:(int)a0;
- (id)parentFeedTypeAsString:(int)a0;
- (id)topicIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicIdsCount;

@end
