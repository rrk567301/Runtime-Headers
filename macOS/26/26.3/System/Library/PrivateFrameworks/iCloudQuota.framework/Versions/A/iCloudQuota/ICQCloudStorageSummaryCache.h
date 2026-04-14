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

- (void)_startObservingQuotaChangeNotifications;
- (void)setStorageSummary:(id)a0 forAltDSID:(id)a1;
- (id)init;
- (void)_stopObservingCloudSubscriptionFeaturesNotifications;
- (void).cxx_destruct;
- (void)_startObservingCloudSubscriptionFeaturesNotifications;
- (void)dealloc;
- (void)_cleanupCacheForPrimaryAccount;
- (void)_stopObservingQuotaChangeNotifications;
- (id)storageSummaryForAltDSID:(id)a0;

@end
