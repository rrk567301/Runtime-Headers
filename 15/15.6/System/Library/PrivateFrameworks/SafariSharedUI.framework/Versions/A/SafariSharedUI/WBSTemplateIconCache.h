@class NSCache, NSString, NSMutableDictionary, NSURL, NSMutableSet, NSObject, WBSSiteMetadataImageCache;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface WBSTemplateIconCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    char _areSettingsLoaded;
    WBSSiteMetadataImageCache *_imageCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _templateIconsDataForHostsAccessLock;
    NSMutableDictionary *_templateIconsDataForHosts;
    NSMutableDictionary *_hostsToRequestSets;
    NSMutableSet *_pendingTemplateIconRequestHosts;
    NSMutableSet *_pendingTemplateIconFallbackRequestHosts;
    NSMutableSet *_pendingSVGImageRenderingRequests;
    NSMutableSet *_pendingSVGImageRenderingRequestsThatCanBeSavedToDisk;
    NSMutableDictionary *_requestsToDelayedResponses;
    NSCache *_requestsToResponses;
    char _historyDidFinishLoading;
    char _hasPurgedUnneededItems;
}

@property (readonly, nonatomic) NSURL *imageDirectoryURL;
@property (nonatomic) struct CGSize { double width; double height; } defaultIconSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;
@property (readonly, nonatomic) char providesFavicons;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)canHandleRequest:(id)a0;
- (void)_registerRequest:(id)a0;
- (void)savePendingChangesBeforeTermination;
- (void)emptyCaches;
- (void)retainTemplateIconForURLString:(id)a0;
- (id)_imageForRequest:(id)a0 getThemeColor:(id *)a1;
- (void)_purgeUnneededTemplateIconsIfReady;
- (char)_templateIconRetainerIsReadyForCleanUp;
- (char)cacheData:(id)a0 forRequest:(id)a1 usingToken:(id)a2;
- (id)initWithImageDirectoryURL:(id)a0;
- (void)prepareResponseForRequest:(id)a0 allowDelayedResponse:(char)a1;
- (void)purgeUnneededCacheEntries;
- (void)releaseTemplateIconForHost:(id)a0;
- (void)releaseTemplateIconForURLString:(id)a0;
- (id)responseForRequest:(id)a0 willProvideUpdates:(char *)a1;
- (void)retainTemplateIconForHost:(id)a0;
- (char)shouldRequestTemplateIconForURL:(id)a0 allowRefresh:(char)a1;
- (void)siteMetadataImageCache:(id)a0 didFinishLoadingImage:(id)a1 forKeyString:(id)a2;
- (void)siteMetadataImageCache:(id)a0 didRemoveImageFromCacheForKeyString:(id)a1;
- (void)siteMetadataImageCacheDidEmptyCache:(id)a0;
- (void)siteMetadataImageCacheDidFinishLoadingSettings:(id)a0;
- (void)stopWatchingUpdatesForRequest:(id)a0;
- (id)_monogramForRequest:(id)a0 themeColor:(id)a1;
- (void)_requestTemplateIconForRequest:(id)a0;
- (void)_updateTemplateIconsDataForHost:(id)a0 image:(id)a1 themeColor:(id)a2 isSavedToDisk:(char)a3;
- (void)_didAddHistoryItems:(id)a0;
- (void)_didLoadHistory:(id)a0;
- (void)_didRemoveHistoryItems:(id)a0;
- (id)_generateResponseForRequest:(id)a0;
- (char)_isLocalIconRequest:(id)a0;
- (void)_notifyDidLoadIconForHost:(id)a0;
- (void)_notifyImageWasLoaded:(id)a0 forHost:(id)a1;
- (void)_removeTemplateIconsDataForHost:(id)a0 ifIconIsInCache:(char)a1;
- (void)_saveTemplateIcon:(id)a0 withThemeColor:(id)a1 forHost:(id)a2 toDisk:(char)a3;
- (void)_setUpAndReturnDelayedResponseForRequest:(id)a0;
- (void)_setUpAndReturnPreparedResponseForRequest:(id)a0;
- (id)_templateIconForURL:(id)a0 getThemeColor:(id *)a1;
- (void)_upgradeCacheVersionIfNeeded;
- (char)hasDeterminedIconAvailabilityForURL:(id)a0;
- (void)releaseTemplateIconsForHosts:(id)a0;
- (void)retainTemplateIconsForHosts:(id)a0;

@end
