@class NSString, NSData;

@interface NTPBPaidSubscriptionSheetView : PBCodable <NSCopying> {
    struct { unsigned char groupType : 1; unsigned char paidSubscriptionConversionPointExposureLocation : 1; unsigned char paidSubscriptionConversionPointType : 1; unsigned char paidSubscriptionSheetViewPresentationReason : 1; unsigned char parentFeedType : 1; unsigned char userAction : 1; unsigned char arrivedFromAd : 1; unsigned char subscriptionOnlyArticlePreview : 1; } _has;
}

@property (nonatomic) char hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) char hasPaidSubscriptionSheetViewPresentationReason;
@property (nonatomic) int paidSubscriptionSheetViewPresentationReason;
@property (nonatomic) char hasPaidSubscriptionConversionPointExposureLocation;
@property (nonatomic) int paidSubscriptionConversionPointExposureLocation;
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
@property (nonatomic) char hasPaidSubscriptionConversionPointType;
@property (nonatomic) int paidSubscriptionConversionPointType;
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
- (id)groupTypeAsString:(int)a0;
- (id)paidSubscriptionConversionPointExposureLocationAsString:(int)a0;
- (id)paidSubscriptionConversionPointTypeAsString:(int)a0;
- (id)parentFeedTypeAsString:(int)a0;

@end
