@class NSDate, NSArray, EKEventStore;
@protocol EKAccountRefresherDelegate;

@interface EKAccountRefresher : NSObject {
    EKEventStore *_eventStore;
    BOOL _currentlySyncing;
    NSDate *_refreshStartDate;
    NSArray *_refreshingSources;
    NSArray *_refreshingCalendars;
}

@property (weak, nonatomic) id<EKAccountRefresherDelegate> delegate;
@property (readonly, nonatomic) BOOL refreshing;
@property (readonly, nonatomic) BOOL allAccountsOffline;

- (void).cxx_destruct;
- (void)refresh;
- (id)initWithEventStore:(id)a0;
- (void)_eventStoreChanged:(id)a0;
- (void)_syncStartTimeoutExpired;
- (void)_refreshControlMaximumVisibleTimeElapsed;
- (void)_syncDidStart;
- (void)_syncDidEnd;
- (BOOL)_allSourcesRefreshed;
- (BOOL)_areAnySourcesCurrentlySyncing;
- (BOOL)_allCalendarsRefreshed;
- (BOOL)_areAnyCalendarsCurrentlySyncing;
- (void)_beginSyncStartTimeout;
- (void)_cancelSyncStartTimeout;
- (void)_beginMaximumTimeElapsedTimeout;
- (void)_cancelMaximumTimeElapsedTimeout;
- (void)_syncCompleted;
- (BOOL)sourceFinishedRefreshing:(id)a0;
- (BOOL)calendarFinishedRefreshing:(id)a0;

@end
