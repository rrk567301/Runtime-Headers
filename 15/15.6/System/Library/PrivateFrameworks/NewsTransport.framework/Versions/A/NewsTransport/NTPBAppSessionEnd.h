@class NSMutableArray;

@interface NTPBAppSessionEnd : PBCodable <NSCopying> {
    struct { unsigned char appSessionDuration : 1; unsigned char appsAutoSubscribeFeedCount : 1; unsigned char channelSubscriptionCount : 1; unsigned char internalAutoSubscribeFeedCount : 1; unsigned char notificationEnabledChannelsCount : 1; unsigned char notitificationsEnabledChannelsCount : 1; unsigned char portraitAutoSubscribeFeedCount : 1; unsigned char safariAutoSubscribeFeedCount : 1; unsigned char sessionEndReason : 1; unsigned char topicSubscriptionCount : 1; unsigned char breakingNewsAvailableDuringSession : 1; unsigned char breakingNewsDismissedDuringSession : 1; unsigned char syncedOtherUserIdDuringSession : 1; } _has;
}

@property (nonatomic) char hasSessionEndReason;
@property (nonatomic) int sessionEndReason;
@property (retain, nonatomic) NSMutableArray *lastVisibleViews;
@property (nonatomic) char hasChannelSubscriptionCount;
@property (nonatomic) int channelSubscriptionCount;
@property (nonatomic) char hasTopicSubscriptionCount;
@property (nonatomic) int topicSubscriptionCount;
@property (nonatomic) char hasAppSessionDuration;
@property (nonatomic) long long appSessionDuration;
@property (retain, nonatomic) NSMutableArray *paidSubscriptionChannelIds;
@property (nonatomic) char hasNotitificationsEnabledChannelsCount;
@property (nonatomic) int notitificationsEnabledChannelsCount;
@property (retain, nonatomic) NSMutableArray *notificationChannelIds;
@property (nonatomic) char hasNotificationEnabledChannelsCount;
@property (nonatomic) int notificationEnabledChannelsCount;
@property (retain, nonatomic) NSMutableArray *subscribedFeedIds;
@property (nonatomic) char hasBreakingNewsAvailableDuringSession;
@property (nonatomic) char breakingNewsAvailableDuringSession;
@property (nonatomic) char hasBreakingNewsDismissedDuringSession;
@property (nonatomic) char breakingNewsDismissedDuringSession;
@property (retain, nonatomic) NSMutableArray *autoSubscribedFeedIds;
@property (retain, nonatomic) NSMutableArray *groupableFeedIds;
@property (nonatomic) char hasPortraitAutoSubscribeFeedCount;
@property (nonatomic) int portraitAutoSubscribeFeedCount;
@property (nonatomic) char hasSafariAutoSubscribeFeedCount;
@property (nonatomic) int safariAutoSubscribeFeedCount;
@property (nonatomic) char hasAppsAutoSubscribeFeedCount;
@property (nonatomic) int appsAutoSubscribeFeedCount;
@property (nonatomic) char hasInternalAutoSubscribeFeedCount;
@property (nonatomic) int internalAutoSubscribeFeedCount;
@property (nonatomic) char hasSyncedOtherUserIdDuringSession;
@property (nonatomic) char syncedOtherUserIdDuringSession;

+ (Class)autoSubscribedFeedIdsType;
+ (Class)groupableFeedIdsType;
+ (Class)lastVisibleViewsType;
+ (Class)notificationChannelIdsType;
+ (Class)paidSubscriptionChannelIdsType;
+ (Class)subscribedFeedIdsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSessionEndReason:(id)a0;
- (void)clearPaidSubscriptionChannelIds;
- (unsigned long long)paidSubscriptionChannelIdsCount;
- (void)addAutoSubscribedFeedIds:(id)a0;
- (void)addGroupableFeedIds:(id)a0;
- (void)addLastVisibleViews:(id)a0;
- (void)addNotificationChannelIds:(id)a0;
- (void)addPaidSubscriptionChannelIds:(id)a0;
- (void)addSubscribedFeedIds:(id)a0;
- (id)autoSubscribedFeedIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)autoSubscribedFeedIdsCount;
- (void)clearAutoSubscribedFeedIds;
- (void)clearGroupableFeedIds;
- (void)clearLastVisibleViews;
- (void)clearNotificationChannelIds;
- (void)clearSubscribedFeedIds;
- (id)groupableFeedIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)groupableFeedIdsCount;
- (id)lastVisibleViewsAtIndex:(unsigned long long)a0;
- (unsigned long long)lastVisibleViewsCount;
- (id)notificationChannelIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)notificationChannelIdsCount;
- (id)paidSubscriptionChannelIdsAtIndex:(unsigned long long)a0;
- (id)sessionEndReasonAsString:(int)a0;
- (id)subscribedFeedIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)subscribedFeedIdsCount;

@end
