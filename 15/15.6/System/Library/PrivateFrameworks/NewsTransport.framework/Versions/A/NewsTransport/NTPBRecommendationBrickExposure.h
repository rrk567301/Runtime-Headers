@class NSString, NSMutableArray;

@interface NTPBRecommendationBrickExposure : PBCodable <NSCopying> {
    struct { unsigned char feedType : 1; unsigned char recommendationBrickType : 1; unsigned char exposedFromReferredUser : 1; } _has;
}

@property (nonatomic) char hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) char hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (retain, nonatomic) NSMutableArray *recommendedFeedIds;
@property (nonatomic) char hasRecommendationBrickType;
@property (nonatomic) int recommendationBrickType;
@property (nonatomic) char hasExposedFromReferredUser;
@property (nonatomic) char exposedFromReferredUser;

+ (Class)recommendedFeedIdsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsFeedType:(id)a0;
- (int)StringAsRecommendationBrickType:(id)a0;
- (void)addRecommendedFeedIds:(id)a0;
- (void)clearRecommendedFeedIds;
- (id)feedTypeAsString:(int)a0;
- (id)recommendationBrickTypeAsString:(int)a0;
- (id)recommendedFeedIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)recommendedFeedIdsCount;

@end
