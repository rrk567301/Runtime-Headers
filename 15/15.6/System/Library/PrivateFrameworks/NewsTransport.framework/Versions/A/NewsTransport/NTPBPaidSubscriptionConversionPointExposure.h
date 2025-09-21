@class NSString, NSData, NTPBIssueData;

@interface NTPBPaidSubscriptionConversionPointExposure : PBCodable <NSCopying> {
    struct { unsigned char groupType : 1; unsigned char paidSubscriptionConversionPointExposureLocation : 1; unsigned char paidSubscriptionConversionPointExposurePresentationReason : 1; unsigned char paidSubscriptionConversionPointType : 1; unsigned char parentFeedType : 1; unsigned char purchaseType : 1; unsigned char userAction : 1; unsigned char arrivedFromAd : 1; unsigned char subscriptionOnlyArticlePreview : 1; } _has;
}

@property (nonatomic) char hasPaidSubscriptionConversionPointType;
@property (nonatomic) int paidSubscriptionConversionPointType;
@property (nonatomic) char hasUserAction;
@property (nonatomic) int userAction;
@property (readonly, nonatomic) char hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) char hasPaidSubscriptionConversionPointExposureLocation;
@property (nonatomic) int paidSubscriptionConversionPointExposureLocation;
@property (nonatomic) char hasPaidSubscriptionConversionPointExposurePresentationReason;
@property (nonatomic) int paidSubscriptionConversionPointExposurePresentationReason;
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
@property (readonly, nonatomic) char hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
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
@property (nonatomic) char hasPurchaseType;
@property (nonatomic) int purchaseType;

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
- (int)StringAsPaidSubscriptionConversionPointExposureLocation:(id)a0;
- (int)StringAsParentFeedType:(id)a0;
- (int)StringAsPurchaseType:(id)a0;
- (id)groupTypeAsString:(int)a0;
- (id)paidSubscriptionConversionPointExposureLocationAsString:(int)a0;
- (id)paidSubscriptionConversionPointTypeAsString:(int)a0;
- (id)parentFeedTypeAsString:(int)a0;
- (id)purchaseTypeAsString:(int)a0;

@end
