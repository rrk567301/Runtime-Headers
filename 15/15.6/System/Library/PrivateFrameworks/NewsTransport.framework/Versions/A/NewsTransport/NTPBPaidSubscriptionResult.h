@class NSString, NTPBIssueData, NSData, NSMutableArray;

@interface NTPBPaidSubscriptionResult : PBCodable <NSCopying> {
    struct { unsigned char amsPurchaseErrorCode : 1; unsigned char groupType : 1; unsigned char paidSubscriptionConversionPointType : 1; unsigned char parentFeedType : 1; unsigned char purchaseType : 1; unsigned char resultType : 1; unsigned char storekitError : 1; unsigned char arrivedFromAd : 1; unsigned char sawSubscriptionSheet : 1; unsigned char subscriptionOnlyArticlePreview : 1; } _has;
}

@property (nonatomic) char hasResultType;
@property (nonatomic) int resultType;
@property (readonly, nonatomic) char hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (readonly, nonatomic) char hasSectionId;
@property (retain, nonatomic) NSString *sectionId;
@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) char hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (nonatomic) char hasPaidSubscriptionConversionPointType;
@property (nonatomic) int paidSubscriptionConversionPointType;
@property (nonatomic) char hasParentFeedType;
@property (nonatomic) int parentFeedType;
@property (nonatomic) char hasSubscriptionOnlyArticlePreview;
@property (nonatomic) char subscriptionOnlyArticlePreview;
@property (nonatomic) char hasArrivedFromAd;
@property (nonatomic) char arrivedFromAd;
@property (readonly, nonatomic) char hasIadQtoken;
@property (retain, nonatomic) NSString *iadQtoken;
@property (readonly, nonatomic) char hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (readonly, nonatomic) char hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (readonly, nonatomic) char hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (readonly, nonatomic) char hasSubscriptionPurchaseSessionId;
@property (retain, nonatomic) NSData *subscriptionPurchaseSessionId;
@property (nonatomic) char hasSawSubscriptionSheet;
@property (nonatomic) char sawSubscriptionSheet;
@property (nonatomic) char hasGroupType;
@property (nonatomic) int groupType;
@property (readonly, nonatomic) char hasPurchaseId;
@property (retain, nonatomic) NSString *purchaseId;
@property (readonly, nonatomic) char hasGroupFeedId;
@property (retain, nonatomic) NSString *groupFeedId;
@property (readonly, nonatomic) char hasParentFeedId;
@property (retain, nonatomic) NSString *parentFeedId;
@property (readonly, nonatomic) char hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (nonatomic) char hasStorekitError;
@property (nonatomic) int storekitError;
@property (nonatomic) char hasAmsPurchaseErrorCode;
@property (nonatomic) int amsPurchaseErrorCode;
@property (retain, nonatomic) NSMutableArray *topicIds;
@property (readonly, nonatomic) char hasSurfacedByTopicId;
@property (retain, nonatomic) NSString *surfacedByTopicId;
@property (readonly, nonatomic) char hasSurfacedByChannelId;
@property (retain, nonatomic) NSString *surfacedByChannelId;
@property (nonatomic) char hasPurchaseType;
@property (nonatomic) int purchaseType;

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
- (int)StringAsPurchaseType:(id)a0;
- (int)StringAsStorekitError:(id)a0;
- (void)addTopicIds:(id)a0;
- (void)clearTopicIds;
- (id)groupTypeAsString:(int)a0;
- (id)paidSubscriptionConversionPointTypeAsString:(int)a0;
- (id)parentFeedTypeAsString:(int)a0;
- (id)purchaseTypeAsString:(int)a0;
- (id)storekitErrorAsString:(int)a0;
- (id)topicIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicIdsCount;

@end
