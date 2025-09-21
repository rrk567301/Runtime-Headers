@class NTPBIssueViewData, NSString, NTPBIssueData, NSData, NTPBAlternateHeadline, NSMutableArray, NTPBIssueExposureData;

@interface NTPBArticleScroll : PBCodable <NSCopying> {
    struct { unsigned char scrollHostViewType : 1; unsigned char scrollingVelocity : 1; unsigned char verticalScrollPositionEnding : 1; unsigned char verticalScrollPositionStarting : 1; unsigned char adSupportedChannel : 1; } _has;
}

@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) char hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (readonly, nonatomic) char hasArticleSessionId;
@property (retain, nonatomic) NSData *articleSessionId;
@property (readonly, nonatomic) char hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (readonly, nonatomic) char hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) char hasScrollHostViewType;
@property (nonatomic) int scrollHostViewType;
@property (readonly, nonatomic) char hasVerticalScrollPositionStart;
@property (retain, nonatomic) NSString *verticalScrollPositionStart;
@property (readonly, nonatomic) char hasVerticalScrollPositionEnd;
@property (retain, nonatomic) NSString *verticalScrollPositionEnd;
@property (readonly, nonatomic) char hasScrollVelocity;
@property (retain, nonatomic) NSString *scrollVelocity;
@property (readonly, nonatomic) char hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) char hasAdSupportedChannel;
@property (nonatomic) char adSupportedChannel;
@property (readonly, nonatomic) char hasSectionHeadlineId;
@property (retain, nonatomic) NSString *sectionHeadlineId;
@property (nonatomic) char hasVerticalScrollPositionStarting;
@property (nonatomic) float verticalScrollPositionStarting;
@property (nonatomic) char hasVerticalScrollPositionEnding;
@property (nonatomic) float verticalScrollPositionEnding;
@property (nonatomic) char hasScrollingVelocity;
@property (nonatomic) float scrollingVelocity;
@property (retain, nonatomic) NSMutableArray *fractionalCohortMemberships;
@property (readonly, nonatomic) char hasAlternateHeadline;
@property (retain, nonatomic) NTPBAlternateHeadline *alternateHeadline;
@property (readonly, nonatomic) char hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (readonly, nonatomic) char hasIssueViewData;
@property (retain, nonatomic) NTPBIssueViewData *issueViewData;
@property (readonly, nonatomic) char hasIssueExposureData;
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData;

+ (Class)fractionalCohortMembershipType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addFractionalCohortMembership:(id)a0;
- (void)clearFractionalCohortMemberships;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)a0;
- (unsigned long long)fractionalCohortMembershipsCount;

@end
