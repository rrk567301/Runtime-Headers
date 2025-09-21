@class NSString, NSData;

@interface NTPBAdExposureOpportunity : PBCodable <NSCopying> {
    struct { unsigned char adErrorCode : 1; unsigned char adCreativeType : 1; unsigned char adType : 1; unsigned char durationInFeed : 1; unsigned char errorCode : 1; unsigned char exposureLocationType : 1; unsigned char feedType : 1; unsigned char responseTime : 1; unsigned char screenfulsFromTop : 1; unsigned char isExpanded : 1; unsigned char isFilled : 1; unsigned char isViewable : 1; } _has;
}

@property (nonatomic) char hasIsExpanded;
@property (nonatomic) char isExpanded;
@property (nonatomic) char hasIsFilled;
@property (nonatomic) char isFilled;
@property (readonly, nonatomic) char hasAdSlotId;
@property (retain, nonatomic) NSString *adSlotId;
@property (nonatomic) char hasDurationInFeed;
@property (nonatomic) int durationInFeed;
@property (nonatomic) char hasResponseTime;
@property (nonatomic) int responseTime;
@property (nonatomic) char hasScreenfulsFromTop;
@property (nonatomic) int screenfulsFromTop;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) char hasIsViewable;
@property (nonatomic) char isViewable;
@property (nonatomic) char hasExposureLocationType;
@property (nonatomic) int exposureLocationType;
@property (nonatomic) char hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) char hasExposureLocationTypeId;
@property (retain, nonatomic) NSString *exposureLocationTypeId;
@property (readonly, nonatomic) char hasAdCreativeId;
@property (retain, nonatomic) NSString *adCreativeId;
@property (readonly, nonatomic) char hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (readonly, nonatomic) char hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (readonly, nonatomic) char hasAdOpportunityId;
@property (retain, nonatomic) NSString *adOpportunityId;
@property (readonly, nonatomic) char hasEventId;
@property (retain, nonatomic) NSString *eventId;
@property (nonatomic) char hasAdErrorCode;
@property (nonatomic) long long adErrorCode;
@property (nonatomic) char hasAdType;
@property (nonatomic) int adType;
@property (nonatomic) char hasAdCreativeType;
@property (nonatomic) int adCreativeType;

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
- (int)StringAsFeedType:(id)a0;
- (id)adTypeAsString:(int)a0;
- (id)adCreativeTypeAsString:(int)a0;
- (id)feedTypeAsString:(int)a0;

@end
