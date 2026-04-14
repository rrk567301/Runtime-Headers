@class NSMutableDictionary;

@interface IMBalloonPluginAttributionController : NSObject

@property (retain, nonatomic) NSMutableDictionary *expiredBundleIDToTimestampMap;
@property (retain, nonatomic) NSMutableDictionary *bundleIDsDisplayingAttribution;
@property (nonatomic) BOOL hasPerformedFirstAppExtensionLoad;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)_currentTimestamp;
- (void)didShowAttributionForBundleIDs:(id)a0;
- (double)_expiryTimeout;
- (void)_handleInstalledPluginsChanged;
- (void)_purgeLeastRecentlySeenAppBundleIDsIfNecessary;
- (void)_saveToFile;
- (BOOL)shouldShowAttributionForBundleID:(id)a0;
- (void)startExpiryTimer;

@end
