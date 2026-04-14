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

- (void)_startObservingCloudSubscriptionFeaturesNotifications;
- (void)_cleanupCacheForPrimaryAccount;
- (void).cxx_destruct;
- (void)_stopObservingCloudSubscriptionFeaturesNotifications;
- (id)storageSummaryForAltDSID:(id)a0;
- (id)init;
- (void)_startObservingQuotaChangeNotifications;
- (void)_stopObservingQuotaChangeNotifications;
- (void)dealloc;
- (void)setStorageSummary:(id)a0 forAltDSID:(id)a1;

@end
