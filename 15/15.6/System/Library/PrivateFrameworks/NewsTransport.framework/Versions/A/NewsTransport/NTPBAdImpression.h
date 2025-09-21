@class NSString, NSData;

@interface NTPBAdImpression : PBCodable <NSCopying> {
    struct { unsigned char videoAdDuration : 1; unsigned char adCreativeType : 1; unsigned char adImpressionTimeThreshold : 1; unsigned char adLocation : 1; unsigned char adType : 1; unsigned char feedType : 1; unsigned char groupType : 1; unsigned char newsProductType : 1; unsigned char videoAdPlacementPosition : 1; unsigned char videoAdType : 1; } _has;
}

@property (readonly, nonatomic) char hasIadCampaign;
@property (retain, nonatomic) NSString *iadCampaign;
@property (readonly, nonatomic) char hasIadLine;
@property (retain, nonatomic) NSString *iadLine;
@property (readonly, nonatomic) char hasIadAd;
@property (retain, nonatomic) NSString *iadAd;
@property (nonatomic) char hasAdType;
@property (nonatomic) int adType;
@property (nonatomic) char hasAdCreativeType;
@property (nonatomic) int adCreativeType;
@property (nonatomic) char hasAdLocation;
@property (nonatomic) int adLocation;
@property (nonatomic) char hasNewsProductType;
@property (nonatomic) int newsProductType;
@property (nonatomic) char hasVideoAdType;
@property (nonatomic) int videoAdType;
@property (nonatomic) char hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) char hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic) char hasVideoAdDuration;
@property (nonatomic) long long videoAdDuration;
@property (nonatomic) char hasVideoAdPlacementPosition;
@property (nonatomic) int videoAdPlacementPosition;
@property (readonly, nonatomic) char hasAdImpressionId;
@property (retain, nonatomic) NSString *adImpressionId;
@property (nonatomic) char hasAdImpressionTimeThreshold;
@property (nonatomic) int adImpressionTimeThreshold;
@property (readonly, nonatomic) char hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (readonly, nonatomic) char hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (readonly, nonatomic) char hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) char hasGroupType;
@property (nonatomic) int groupType;
@property (readonly, nonatomic) char hasGroupViewExposureId;
@property (retain, nonatomic) NSData *groupViewExposureId;
@property (readonly, nonatomic) char hasPreviousArticleId;
@property (retain, nonatomic) NSString *previousArticleId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsAdType:(id)a0;
- (int)StringAsAdCreativeType:(id)a0;
- (int)StringAsAdLocation:(id)a0;
- (int)StringAsFeedType:(id)a0;
- (int)StringAsNewsProductType:(id)a0;
- (int)StringAsGroupType:(id)a0;
- (int)StringAsVideoAdType:(id)a0;
- (id)adTypeAsString:(int)a0;
- (id)adCreativeTypeAsString:(int)a0;
- (id)adLocationAsString:(int)a0;
- (id)feedTypeAsString:(int)a0;
- (id)groupTypeAsString:(int)a0;
- (id)newsProductTypeAsString:(int)a0;
- (id)videoAdTypeAsString:(int)a0;

@end
