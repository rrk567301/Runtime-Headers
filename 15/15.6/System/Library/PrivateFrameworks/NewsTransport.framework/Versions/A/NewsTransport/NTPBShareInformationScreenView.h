@class NSString, NSData;

@interface NTPBShareInformationScreenView : PBCodable <NSCopying> {
    struct { unsigned char paidSubscriptionConversionPointType : 1; unsigned char parentFeedType : 1; unsigned char resultType : 1; unsigned char userAction : 1; unsigned char arrivedFromAd : 1; unsigned char subscriptionOnlyArticlePreview : 1; } _has;
}

@property (nonatomic) char hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) char hasResultType;
@property (nonatomic) int resultType;
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
- (int)StringAsParentFeedType:(id)a0;
- (id)paidSubscriptionConversionPointTypeAsString:(int)a0;
- (id)parentFeedTypeAsString:(int)a0;

@end
