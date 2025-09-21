@class NSString, NSData, NSMutableArray;

@interface NTPBEndOfArticleExposure : PBCodable <NSCopying> {
    struct { unsigned char backendArticleVersionInt64 : 1; unsigned char personalizationTreatmentId : 1; unsigned char publisherArticleVersionInt64 : 1; unsigned char articleType : 1; unsigned char backendArticleVersion : 1; unsigned char characterCount : 1; unsigned char publisherArticleVersion : 1; unsigned char isUserSubscribedToFeed : 1; } _has;
}

@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) char hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (readonly, nonatomic) char hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (readonly, nonatomic) char hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) char hasIsUserSubscribedToFeed;
@property (nonatomic) char isUserSubscribedToFeed;
@property (retain, nonatomic) NSMutableArray *recommendedArticleIds;
@property (retain, nonatomic) NSMutableArray *referencedRecommendedArticleIds;
@property (nonatomic) char hasArticleType;
@property (nonatomic) int articleType;
@property (nonatomic) char hasCharacterCount;
@property (nonatomic) int characterCount;
@property (readonly, nonatomic) char hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSMutableArray *namedEntities;
@property (nonatomic) char hasPublisherArticleVersion;
@property (nonatomic) int publisherArticleVersion;
@property (nonatomic) char hasBackendArticleVersion;
@property (nonatomic) int backendArticleVersion;
@property (readonly, nonatomic) char hasSurfacedByChannelId;
@property (retain, nonatomic) NSString *surfacedByChannelId;
@property (readonly, nonatomic) char hasSurfacedBySectionId;
@property (retain, nonatomic) NSString *surfacedBySectionId;
@property (readonly, nonatomic) char hasSurfacedByTopicId;
@property (retain, nonatomic) NSString *surfacedByTopicId;
@property (readonly, nonatomic) char hasSectionHeadlineId;
@property (retain, nonatomic) NSString *sectionHeadlineId;
@property (nonatomic) char hasPersonalizationTreatmentId;
@property (nonatomic) long long personalizationTreatmentId;
@property (nonatomic) char hasPublisherArticleVersionInt64;
@property (nonatomic) long long publisherArticleVersionInt64;
@property (nonatomic) char hasBackendArticleVersionInt64;
@property (nonatomic) long long backendArticleVersionInt64;

+ (Class)namedEntitiesType;
+ (Class)recommendedArticleIdType;
+ (Class)referencedRecommendedArticleIdsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addNamedEntities:(id)a0;
- (void)clearNamedEntities;
- (id)namedEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)namedEntitiesCount;
- (int)StringAsArticleType:(id)a0;
- (void)addRecommendedArticleId:(id)a0;
- (void)addReferencedRecommendedArticleIds:(id)a0;
- (id)articleTypeAsString:(int)a0;
- (void)clearRecommendedArticleIds;
- (void)clearReferencedRecommendedArticleIds;
- (id)recommendedArticleIdAtIndex:(unsigned long long)a0;
- (unsigned long long)recommendedArticleIdsCount;
- (id)referencedRecommendedArticleIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)referencedRecommendedArticleIdsCount;

@end
