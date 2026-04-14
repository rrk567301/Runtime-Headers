@class NSMutableDictionary;

@interface ICQCloudStorageSummaryCache : NSObject {
    NSMutableDictionary *_summaryCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    id _quotaChangeNotificationObserver;
    id _quotaInfoChangeNotificationObserver;
    id _cloudSubscriptionFeaturesObserver;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setStorageSummary:(id)a0 forAltDSID:(id)a1;
- (id)storageSummaryForAltDSID:(id)a0;
- (void)_startObservingQuotaChangeNotifications;
- (void)_startObservingCloudSubscriptionFeaturesNotifications;
- (void)_stopObservingQuotaChangeNotifications;
- (void)_stopObservingCloudSubscriptionFeaturesNotifications;
- (void)_cleanupCacheForPrimaryAccount;

@end
