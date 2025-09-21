@class NTPBIssueViewData, NSString, NTPBIssueData, NSData, NTPBChannelData;

@interface NTPBAudioEngagementCompleted : PBCodable <NSCopying> {
    struct { unsigned char timePlayed : 1; unsigned char trackDuration : 1; unsigned char feedType : 1; unsigned char groupType : 1; unsigned char playbackSpeed : 1; unsigned char trackVariant : 1; unsigned char adSupportedChannel : 1; unsigned char isPaidSubscriberToSourceChannel : 1; } _has;
}

@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) char hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) char hasAdSupportedChannel;
@property (nonatomic) char adSupportedChannel;
@property (nonatomic) char hasGroupType;
@property (nonatomic) int groupType;
@property (readonly, nonatomic) char hasGroupFeedId;
@property (retain, nonatomic) NSString *groupFeedId;
@property (readonly, nonatomic) char hasGroupViewExposureId;
@property (retain, nonatomic) NSData *groupViewExposureId;
@property (nonatomic) char hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) char hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) char hasTrackDuration;
@property (nonatomic) long long trackDuration;
@property (nonatomic) char hasTrackVariant;
@property (nonatomic) int trackVariant;
@property (readonly, nonatomic) char hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (nonatomic) char hasTimePlayed;
@property (nonatomic) long long timePlayed;
@property (readonly, nonatomic) char hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (readonly, nonatomic) char hasIssueViewData;
@property (retain, nonatomic) NTPBIssueViewData *issueViewData;
@property (readonly, nonatomic) char hasChannelData;
@property (retain, nonatomic) NTPBChannelData *channelData;
@property (readonly, nonatomic) char hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) char hasPlaybackSpeed;
@property (nonatomic) float playbackSpeed;
@property (readonly, nonatomic) char hasEngagementId;
@property (retain, nonatomic) NSString *engagementId;
@property (nonatomic) char hasIsPaidSubscriberToSourceChannel;
@property (nonatomic) char isPaidSubscriberToSourceChannel;

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
- (int)StringAsGroupType:(id)a0;
- (int)StringAsTrackVariant:(id)a0;
- (id)feedTypeAsString:(int)a0;
- (id)groupTypeAsString:(int)a0;
- (id)trackVariantAsString:(int)a0;

@end
