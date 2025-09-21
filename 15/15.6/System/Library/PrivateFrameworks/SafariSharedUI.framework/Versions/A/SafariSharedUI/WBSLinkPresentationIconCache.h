@class NSString, WBSSiteMetadataImageCache;
@protocol WBSSiteMetadataProviderDelegate;

@interface WBSLinkPresentationIconCache : NSObject <WBSSiteMetadataProvider> {
    WBSSiteMetadataImageCache *_imageCache;
}

@property (weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;
@property (readonly, nonatomic) char providesFavicons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (char)canHandleRequest:(id)a0;
- (void)_historyItemsWereRemoved:(id)a0;
- (void)savePendingChangesBeforeTermination;
- (void)emptyCaches;
- (id)initWithImageDirectoryURL:(id)a0;
- (void)prepareResponseForRequest:(id)a0 allowDelayedResponse:(char)a1;
- (void)purgeUnneededCacheEntries;
- (id)responseForRequest:(id)a0 willProvideUpdates:(char *)a1;
- (id)imageForHost:(id)a0;
- (void)saveImage:(id)a0 forHost:(id)a1;

@end
