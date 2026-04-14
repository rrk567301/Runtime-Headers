@class WLKPlaybackSummary, NSMapTable, NSDate;

@interface VUIAppDocumentUpdateEventMonitor : NSObject {
    WLKPlaybackSummary *_pendingPlayActivity;
    BOOL _playbackIsActive;
}

@property (retain, nonatomic) NSMapTable *observerMapTable;
@property (nonatomic) int playbackReportToken;
@property (retain, nonatomic) NSDate *lastProcesssedPlayActivity;
@property (retain, nonatomic) NSDate *lastAppDidBecomeActive;

+ (id)sharedMonitor;
+ (BOOL)_isAppRefreshEventType:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)removeObserver:(id)a0;
- (void)_handleLocationDidChangeNotification:(id)a0;
- (void)_handleUpNextRequestDidFinishNotification:(id)a0;
- (void)_handleRemoveFromPlayHistoryRequestDidFinishNotification:(id)a0;
- (void)_handleClearFromPlayHistoryRequestDidFinishNotification:(id)a0;
- (void)_handlePlayHistoryUpdatedNotification:(id)a0;
- (void)_handleSettingsDidChangeNotification:(id)a0;
- (void)_handleAppLibraryDidChangeNotification:(id)a0;
- (void)_handlePurchaseFlowDidFinishNotification:(id)a0;
- (void)_handleSubscriptionDidChangeNotification:(id)a0;
- (void)_handleUTSKDidChangeNotification:(id)a0;
- (void)_handleLocationAuthorizationDidChangeNotification:(id)a0;
- (void)_handleAppWillEnterForegroundNotification:(id)a0;
- (void)_handleAppDidEnterBackgroundNotification:(id)a0;
- (void)_handleSyndicationInfoUpdatedNotification:(id)a0;
- (void)_handleRestrictionsDidChangeNotification:(id)a0;
- (void)_handleDidReportPlaybackToUTSNotification:(id)a0;
- (void)_handleAccountDidChangeNotification:(id)a0;
- (void)addObserver:(id)a0 forEventDescriptors:(id)a1 viewController:(id)a2;
- (void)_notifyObserver:(id)a0 ofRefreshEvent:(id)a1;
- (void)_notifyObserversOfEvent:(id)a0;
- (void)_handleAppDidBecomeActive:(id)a0;
- (void)addObserver:(id)a0 forEventDescriptors:(id)a1;
- (void)_handleEntitlementsDidChangeNotification:(id)a0;
- (void)_handleXPUpNextRequestDidFinishNotification:(id)a0;

@end
