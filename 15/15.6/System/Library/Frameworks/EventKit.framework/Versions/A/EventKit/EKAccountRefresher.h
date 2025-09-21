@class NSDate, NSArray, EKEventStore;
@protocol EKAccountRefresherDelegate;

@interface EKAccountRefresher : NSObject {
    EKEventStore *_eventStore;
    char _currentlySyncing;
    NSDate *_refreshStartDate;
    NSArray *_refreshingSources;
    NSArray *_refreshingCalendars;
}

@property (weak, nonatomic) id<EKAccountRefresherDelegate> delegate;
@property (readonly, nonatomic) char refreshing;
@property (readonly, nonatomic) char allAccountsOffline;

- (void).cxx_destruct;
- (void)refresh;
- (id)initWithEventStore:(id)a0;
- (void)_beginMaximumTimeElapsedTimeout;
- (char)_allCalendarsRefreshed;
- (char)_allSourcesRefreshed;
- (char)_areAnyCalendarsCurrentlySyncing;
- (char)_areAnySourcesCurrentlySyncing;
- (void)_beginSyncStartTimeout;
- (void)_cancelMaximumTimeElapsedTimeout;
- (void)_cancelSyncStartTimeout;
- (void)_eventStoreChanged:(id)a0;
- (void)_refreshControlMaximumVisibleTimeElapsed;
- (void)_syncCompleted;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_syncStartTimeoutExpired;
- (char)calendarFinishedRefreshing:(id)a0;
- (char)sourceFinishedRefreshing:(id)a0;

@end
