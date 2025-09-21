@class NSString, NSData, NTPBIssueData;

@interface NTPBPaywallButtonTap : PBCodable <NSCopying> {
    struct { unsigned char groupType : 1; unsigned char paidSubscriptionConversionPointType : 1; unsigned char parentFeedType : 1; unsigned char purchaseType : 1; unsigned char subscriptionButtonTargetType : 1; } _has;
}

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
@property (nonatomic) char hasGroupType;
@property (nonatomic) int groupType;
@property (nonatomic) char hasPaidSubscriptionConversionPointType;
@property (nonatomic) int paidSubscriptionConversionPointType;
@property (readonly, nonatomic) char hasPurchaseId;
@property (retain, nonatomic) NSString *purchaseId;
@property (nonatomic) char hasSubscriptionButtonTargetType;
@property (nonatomic) int subscriptionButtonTargetType;
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
- (int)StringAsSubscriptionButtonTargetType:(id)a0;
- (int)StringAsGroupType:(id)a0;
- (int)StringAsParentFeedType:(id)a0;
- (int)StringAsPurchaseType:(id)a0;
- (id)groupTypeAsString:(int)a0;
- (id)paidSubscriptionConversionPointTypeAsString:(int)a0;
- (id)parentFeedTypeAsString:(int)a0;
- (id)purchaseTypeAsString:(int)a0;
- (id)subscriptionButtonTargetTypeAsString:(int)a0;

@end
