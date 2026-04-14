@class NSMutableDictionary;

@interface ICQCloudStorageSummaryCache : NSObject {
    NSMutableDictionary *_summaryCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    id _quotaChangeNotificationObserver;
    id _quotaInfoChangeNotificationObserver;
    id _cloudSubscriptionFeaturesObserver;
    BOOL _hasDisplayedDetailsPage;
}

@property (nonatomic) BOOL hasDisplayedDetailsPage;

+ (id)sharedInstance;

- (void)_stopObservingCloudSubscriptionFeaturesNotifications;
- (void)dealloc;
- (id)storageSummaryForAltDSID:(id)a0;
- (void)setStorageSummary:(id)a0 forAltDSID:(id)a1;
- (void)_stopObservingQuotaChangeNotifications;
- (void).cxx_destruct;
- (void)_startObservingQuotaChangeNotifications;
- (void)_startObservingCloudSubscriptionFeaturesNotifications;
- (void)_cleanupCacheForPrimaryAccount;
- (id)init;

@end
