@class NSMutableDictionary;

@interface IMBalloonPluginAttributionController : NSObject

@property (retain, nonatomic) NSMutableDictionary *expiredBundleIDToTimestampMap;
@property (retain, nonatomic) NSMutableDictionary *bundleIDsDisplayingAttribution;
@property (nonatomic) BOOL hasPerformedFirstAppExtensionLoad;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_currentTimestamp;
- (void)startExpiryTimer;
- (BOOL)shouldShowAttributionForBundleID:(id)a0;
- (void)didShowAttributionForBundleIDs:(id)a0;
- (void)_handleInstalledPluginsChanged;
- (double)_expiryTimeout;
- (void)_purgeLeastRecentlySeenAppBundleIDsIfNecessary;
- (void)_saveToFile;

@end
