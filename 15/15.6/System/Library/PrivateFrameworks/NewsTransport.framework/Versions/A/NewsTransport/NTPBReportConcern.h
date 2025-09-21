@class NSString;

@interface NTPBReportConcern : PBCodable <NSCopying> {
    struct { unsigned char backendArticleVersion : 1; unsigned char publisherArticleVersion : 1; unsigned char articleFeedCellHostType : 1; unsigned char articleFeedCellSection : 1; unsigned char articleParentFeedType : 1; unsigned char concernReason : 1; unsigned char contentType : 1; unsigned char feedFeedType : 1; unsigned char feedViewPresentationReason : 1; unsigned char originProductType : 1; unsigned char isUserSubscribedToFeed : 1; } _has;
}

@property (nonatomic) int reportVersion;
@property (readonly, nonatomic) char hasClientId;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) char hasConcernReason;
@property (nonatomic) int concernReason;
@property (readonly, nonatomic) char hasConcernComments;
@property (retain, nonatomic) NSString *concernComments;
@property (nonatomic) char hasContentType;
@property (nonatomic) int contentType;
@property (readonly, nonatomic) char hasContentId;
@property (retain, nonatomic) NSString *contentId;
@property (readonly, nonatomic) char hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (nonatomic) char hasPublisherArticleVersion;
@property (nonatomic) long long publisherArticleVersion;
@property (nonatomic) char hasBackendArticleVersion;
@property (nonatomic) long long backendArticleVersion;
@property (readonly, nonatomic) char hasArticleParentFeedId;
@property (retain, nonatomic) NSString *articleParentFeedId;
@property (nonatomic) char hasArticleParentFeedType;
@property (nonatomic) int articleParentFeedType;
@property (nonatomic) char hasFeedFeedType;
@property (nonatomic) int feedFeedType;
@property (nonatomic) char hasArticleFeedCellHostType;
@property (nonatomic) int articleFeedCellHostType;
@property (nonatomic) char hasArticleFeedCellSection;
@property (nonatomic) int articleFeedCellSection;
@property (nonatomic) char hasFeedViewPresentationReason;
@property (nonatomic) int feedViewPresentationReason;
@property (readonly, nonatomic) char hasFeedPresentationSearchString;
@property (retain, nonatomic) NSString *feedPresentationSearchString;
@property (nonatomic) char hasIsUserSubscribedToFeed;
@property (nonatomic) char isUserSubscribedToFeed;
@property (readonly, nonatomic) char hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (nonatomic) char hasOriginProductType;
@property (nonatomic) int originProductType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsArticleFeedCellSection:(id)a0;
- (int)StringAsArticleParentFeedType:(id)a0;
- (int)StringAsArticleFeedCellHostType:(id)a0;
- (int)StringAsContentType:(id)a0;
- (int)StringAsFeedFeedType:(id)a0;
- (int)StringAsFeedViewPresentationReason:(id)a0;
- (id)articleFeedCellSectionAsString:(int)a0;
- (id)articleFeedCellHostTypeAsString:(int)a0;
- (id)articleParentFeedTypeAsString:(int)a0;
- (id)contentTypeAsString:(int)a0;
- (id)feedFeedTypeAsString:(int)a0;
- (id)feedViewPresentationReasonAsString:(int)a0;

@end
