@class PARSession;

@interface WBSBrowsingAssistantContentProvider : NSObject

@property (class, readonly, nonatomic) PARSession *sharedPARSession;

+ (id)_assetManagerForCurrentSystemLocale;
+ (id)_sharedSessionConfiguration;
+ (char)assistantEnabledForCurrentDevice;
+ (char)assistantEnabledForLocale:(id)a0;
+ (void)clearAssistantAssetCache;
+ (id)filteredStringForURL:(id)a0 needsVariants:(char *)a1;
+ (void)subscribeToAssistantAssetAndDownloadNow:(char)a0;
+ (void)unsubscribeFromAssistantAsset;

- (void)checkContentAvailabilityForURL:(id)a0 locale:(id)a1 webpageIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)fetchContentForURL:(id)a0 completion:(id /* block */)a1;

@end
