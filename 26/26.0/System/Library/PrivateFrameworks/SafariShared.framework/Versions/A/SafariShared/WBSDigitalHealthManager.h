@class NSMutableDictionary, DMFWebsitePolicyMonitor;
@protocol WBSDigitalHealthManagerDelegate;

@interface WBSDigitalHealthManager : NSObject {
    DMFWebsitePolicyMonitor *_monitor;
    NSMutableDictionary *_trackedUrlsProfileIdentifierPairToUsageState;
}

@property (weak, nonatomic) id<WBSDigitalHealthManagerDelegate> delegate;

+ (void)_updateWebpageUsage:(id)a0 withDigitalHealthManagerUsageState:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
+ (void)deleteAllUsageHistoryWithProfileIdentifier:(id)a0;
+ (void)deleteUsageHistoryForURLs:(id)a0 profileIdentifier:(id)a1 completionHandler:(id /* block */)a2;
+ (void)deleteUsageHistoryFromDate:(id)a0 toDate:(id)a1 profileIdentifier:(id)a2;

- (void)startObserving;
- (void)dealloc;
- (void)_stopUsageTrackingForURL:(id)a0 profileIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)updateUsageTrackingForURL:(id)a0 withBundleIdentifier:(id)a1 profileIdentifier:(id)a2 toState:(unsigned long long)a3;
- (void)_requestPoliciesForWebsites:(id)a0 completionHandler:(id /* block */)a1;
- (void)_historyWasCleared:(id)a0;
- (void)_historyItemsWereRemoved:(id)a0;
- (id)init;
- (void)stopUsageTrackingForURL:(id)a0 profileIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_startObserving;
- (void)stopObservingWithCompletionHandler:(id /* block */)a0;
- (void)getOverlayStateForURLs:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_updateUsageTrackingForURL:(id)a0 withBundleIdentifier:(id)a1 profileIdentifier:(id)a2 toState:(unsigned long long)a3;
- (void)_stopObserving;
- (void).cxx_destruct;

@end
