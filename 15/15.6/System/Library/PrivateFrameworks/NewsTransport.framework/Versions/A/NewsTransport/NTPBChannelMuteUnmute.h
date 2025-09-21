@class NSString, NSData;

@interface NTPBChannelMuteUnmute : PBCodable <NSCopying> {
    struct { unsigned char previousArticlePublisherArticleVersion : 1; unsigned char feedType : 1; unsigned char feedViewPresentationReason : 1; unsigned char groupType : 1; unsigned char muteUnmuteLocation : 1; unsigned char userAction : 1; unsigned char isSearchResultArticle : 1; unsigned char isUserSubscribedToFeed : 1; } _has;
}

@property (nonatomic) char hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) char hasMuteUnmuteLocation;
@property (nonatomic) int muteUnmuteLocation;
@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) char hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (readonly, nonatomic) char hasArticleSessionIdDeprecated;
@property (retain, nonatomic) NSString *articleSessionIdDeprecated;
@property (readonly, nonatomic) char hasArticleViewingSessionIdDeprecated;
@property (retain, nonatomic) NSString *articleViewingSessionIdDeprecated;
@property (readonly, nonatomic) char hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) char hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) char hasChannelMuteUnmuteFeedId;
@property (retain, nonatomic) NSString *channelMuteUnmuteFeedId;
@property (readonly, nonatomic) char hasFeedViewExposureIdDeprecated;
@property (retain, nonatomic) NSString *feedViewExposureIdDeprecated;
@property (nonatomic) char hasIsUserSubscribedToFeed;
@property (nonatomic) char isUserSubscribedToFeed;
@property (readonly, nonatomic) char hasArticleSessionId;
@property (retain, nonatomic) NSData *articleSessionId;
@property (readonly, nonatomic) char hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (readonly, nonatomic) char hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) char hasGroupType;
@property (nonatomic) int groupType;
@property (readonly, nonatomic) char hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (readonly, nonatomic) char hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (readonly, nonatomic) char hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (nonatomic) char hasFeedViewPresentationReason;
@property (nonatomic) int feedViewPresentationReason;
@property (nonatomic) char hasIsSearchResultArticle;
@property (nonatomic) char isSearchResultArticle;
@property (readonly, nonatomic) char hasPreviousArticleId;
@property (retain, nonatomic) NSString *previousArticleId;
@property (readonly, nonatomic) char hasPreviousArticleVersion;
@property (retain, nonatomic) NSString *previousArticleVersion;
@property (nonatomic) char hasPreviousArticlePublisherArticleVersion;
@property (nonatomic) long long previousArticlePublisherArticleVersion;
@property (readonly, nonatomic) char hasGroupViewExposureId;
@property (retain, nonatomic) NSData *groupViewExposureId;

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
- (int)StringAsFeedViewPresentationReason:(id)a0;
- (int)StringAsGroupType:(id)a0;
- (id)feedTypeAsString:(int)a0;
- (id)feedViewPresentationReasonAsString:(int)a0;
- (id)groupTypeAsString:(int)a0;

@end
