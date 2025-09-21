@interface SGMIBiomeReducedMessageEvents : NSObject

@property (readonly, nonatomic) char scrolledToEnd;
@property (readonly, nonatomic) char userReplied;
@property (readonly, nonatomic) unsigned int numberOfMailsViewedBeforeSinceAvailable;
@property (readonly, nonatomic) double timeBeforeViewStartSinceAvailable;
@property (readonly, nonatomic) unsigned int messageViewCount;
@property (readonly, nonatomic) double messageViewMaxDwellTime;
@property (readonly, nonatomic) double messageViewTotalDwellTime;
@property (readonly, nonatomic) unsigned int numberOfUnreadMessageAtFirstViewTime;
@property (readonly, nonatomic) unsigned int numberOfMoreRecentUnreadMessageAtFirstViewTime;
@property (readonly, nonatomic) char markedAsRead;
@property (readonly, nonatomic) char markedAsUnread;
@property (readonly, nonatomic) char mailGotFlagged;
@property (readonly, nonatomic) char replyDraftStarted;
@property (readonly, nonatomic) char forwardDraftStarted;
@property (readonly, nonatomic) char markedAsJunk;
@property (readonly, nonatomic) char linkClicked;
@property (readonly, nonatomic) double firstAppLaunchFollowingFetch;
@property (readonly, nonatomic) double messageFetchTime;

- (id)init;
- (void)updateWithEvent:(id)a0 eventTimestamp:(double)a1;
- (void)incrementNumberOfMailsViewedBeforeSinceAvailable;
- (void)incrementNumberOfMoreRecentUnreadMessageAtFirstViewTime;
- (id)initWithScrolledToEnd:(char)a0 messageViewMaxDwellTime:(double)a1 messageViewTotalDwellTime:(double)a2 messageViewCount:(unsigned int)a3 timeBeforeViewStartSinceAvailable:(double)a4 numberOfMailsViewedBeforeSinceAvailable:(unsigned int)a5 userReplied:(char)a6 replyDraftStarted:(char)a7 forwardDraftStarted:(char)a8 numberOfUnreadMessageAtFirstViewTime:(unsigned int)a9 numberOfMoreRecentUnreadMessageAtFirstViewTime:(unsigned int)a10 markedAsRead:(char)a11 markedAsUnread:(char)a12 markedAsJunk:(char)a13 mailGotFlagged:(char)a14 linkClicked:(char)a15;
- (double)messageAvailableTime;
- (void)updateWithAppLaunchAtTime:(double)a0;
- (void)updateWithFlagChangedEvent;
- (void)updateWithMessageFetchedEventAtTime:(double)a0;
- (void)updateWithMessageMovedEventWithPayload:(id)a0;
- (void)updateWithReadChangedEventWithPayload:(id)a0;
- (void)updateWithViewEndWithPayload:(id)a0;
- (void)updateWithViewStartAtTime:(double)a0 unreadMessageCount:(unsigned int)a1;

@end
