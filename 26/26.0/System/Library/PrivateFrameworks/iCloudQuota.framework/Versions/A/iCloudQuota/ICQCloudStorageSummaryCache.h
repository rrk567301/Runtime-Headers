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

- (void)dealloc;
- (void)_startObservingCloudSubscriptionFeaturesNotifications;
- (id)init;
- (id)storageSummaryForAltDSID:(id)a0;
- (void)_cleanupCacheForPrimaryAccount;
- (void)setStorageSummary:(id)a0 forAltDSID:(id)a1;
- (void)_stopObservingCloudSubscriptionFeaturesNotifications;
- (void)_stopObservingQuotaChangeNotifications;
- (void)_startObservingQuotaChangeNotifications;
- (void).cxx_destruct;

@end
