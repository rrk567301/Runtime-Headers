@class NSString, WBTabGroupManager, WBSBackgroundImageCache, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface WBSBackgroundImageManager : NSObject <WBTabGroupManagerObserver, WBSSiteMetadataProvider> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_imageOperationQueue;
    WBSBackgroundImageCache *_backgroundImageCache;
    WBSBackgroundImageCache *_backgroundImageThumbnailCache;
    NSMutableSet *_profilesWithGeneratedBackgroundImages;
}

@property (readonly, nonatomic) WBTabGroupManager *tabGroupManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;
@property (readonly, nonatomic) BOOL providesFavicons;

- (void).cxx_destruct;
- (void)_registerRequest:(id)a0;
- (BOOL)canHandleRequest:(id)a0;
- (id)backgroundImageURLForIdentifier:(id)a0;
- (void)clearImageForIdentifier:(id)a0;
- (void)generateProfileSpecificBackgroundImageWithSymbol:(id)a0 forProfile:(id)a1 withColor:(id)a2 persist:(BOOL)a3 completionHandler:(id /* block */)a4;
- (BOOL)hasGeneratedBackgroundImageForProfileIdentifier:(id)a0;
- (id)initWithTabGroupManager:(id)a0;
- (void)loadImageFromDiskAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)prepareResponseForRequest:(id)a0 allowDelayedResponse:(BOOL)a1;
- (void)reloadBackgroundImageFromDiskForIdentifier:(id)a0;
- (void)reloadDefaultProfileBackgroundImage;
- (id)responseForRequest:(id)a0 willProvideUpdates:(BOOL *)a1;
- (void)stopWatchingUpdatesForRequest:(id)a0;
- (void)tabGroupManager:(id)a0 didRemoveProfileWithIdentifier:(id)a1;
- (void)tabGroupManager:(id)a0 didRemoveTabGroupWithUUID:(id)a1;
- (void)updateImageFromURL:(id)a0 forIdentifier:(id)a1 isGeneratedImage:(BOOL)a2 withinProfile:(BOOL)a3 completionHandler:(id /* block */)a4;
- (long long)_generatedImageScaleWithSymbol:(id)a0;
- (id)_backgroundImageIdentifierForTabGroupUUID:(id)a0;
- (id)_cachedBackgroundImageResponseForRequest:(id)a0;
- (id)_cachedBackgroundImageThumbnailResponseForRequest:(id)a0;
- (void)_clearGeneratedImageForDefaultProfileIfNeeded;
- (void)_deleteImageWithIdentifier:(id)a0;
- (BOOL)_hasProfileSpecificBackgroundImage:(id)a0;
- (BOOL)_hasTabGroupSpecificBackgroundImage:(id)a0;
- (double)_iconOpacityForBackgroundColor:(id)a0 forDarkIcon:(BOOL)a1;
- (BOOL)_isGeneratedBackgroundImageInImageSource:(struct CGImageSource { } *)a0;
- (void)_loadImageFromDiskForIdentifier:(id)a0;
- (void)_loadImageFromDiskIfNeededForRequest:(id)a0;
- (void)_loadImageThumbnailsFromDiskForIdentifier:(id)a0;
- (void)_loadImageThumbnailsFromDiskIfNeededForRequest:(id)a0;
- (void)_removeResponseForUUID:(id)a0 fromCache:(id)a1;
- (void)_setHasProfileSpecificBackgroundImage:(BOOL)a0 forIdentifier:(id)a1;
- (void)_setHasTabGroupSpecificBackgroundImage:(BOOL)a0 forIdentifier:(id)a1;
- (id)_templateImageWithImage:(id)a0 color:(id)a1;

@end
