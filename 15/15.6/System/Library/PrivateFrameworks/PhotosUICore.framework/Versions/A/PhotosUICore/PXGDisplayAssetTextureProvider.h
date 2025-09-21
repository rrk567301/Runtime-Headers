@class NSString, CIContext, PXGAssetImageCache, NSArray, NSMutableDictionary, PXGImageRequestQueue, NSObject, PXGThumbnailRequestQueue, NSMutableIndexSet, PXMediaProvider;
@protocol OS_dispatch_queue;

@interface PXGDisplayAssetTextureProvider : PXGTextureProvider <PXGImageRequestPerformer> {
    NSObject<OS_dispatch_queue> *_drawingQueue;
    NSObject<OS_dispatch_queue> *_videoSessionsRequestQueue;
    PXGThumbnailRequestQueue *_requestQueue_thumbnailRequestQueue;
    NSMutableDictionary *_workQueue_textureStreamingSessionsMap;
    NSMutableIndexSet *_workQueue_textureRequestIDsWithDeliveredVideoFrames;
    NSMutableIndexSet *_workQueue_textureRequestIDsThatCannotBeSatisfiedWithThumbnails;
    PXGThumbnailRequestQueue *_workQueue_thumbnailRequestQueue;
    PXGImageRequestQueue *_workQueue_imageRequestQueue;
    NSMutableDictionary *_workQueue_deferredImageRequestBlocksByTextureID;
    CIContext *_workQueue_crossfadeRenderContext;
    NSObject<OS_dispatch_queue> *_cancelationQueue;
    NSMutableDictionary *_cancelationQueue_mediaRequestIDByTextureID;
    NSMutableDictionary *_cancelationQueue_deferredMediaRequestIDByTextureID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lookupLock;
    NSMutableIndexSet *_lookupLock_requestIDsWithDeliveredThumbnails;
    NSMutableIndexSet *_lookupLock_requestIDsWithDeliveredPlaceholders;
    PXGAssetImageCache *_imageCache;
    char _isLowSpec;
    NSArray *_requestOptions;
    struct CGImage { } *_lightPlaceholderImage;
    struct CGImage { } *_darkPlaceholderImage;
    struct CGImage { } *_transparentPlaceholderImage;
    struct CGSize { double width; double height; } _largestImageDataSpecSize;
}

@property double displayLinkLastTargetTimestamp;
@property (nonatomic) char videoRequestsAllowed;
@property (readonly, nonatomic) PXMediaProvider *defaultMediaProvider;
@property (readonly, nonatomic) struct CGImage { } *placeholderImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)defaultMediaVersionHandlerWithDataSourceBeforeChanges:(id)a0 dataSourceAfterChanges:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)releaseCachedResources;
- (char)_imageSizeSatisfiedByThumbnail:(struct CGSize { double x0; double x1; })a0;
- (id)_requestOptionsForUseCase:(unsigned long long)a0 forDrawing:(char)a1 intent:(unsigned long long)a2 useLowMemoryDecode:(char)a3;
- (void)_cancelationQueue_cancelImageRequests:(id)a0;
- (struct { char x0; float x1; char x2; })_defaultStillImageTextureProcessingOptionsForAsset:(id)a0 orientation:(unsigned int)a1 applyCleanAperture:(char)a2;
- (void)_handlePixelBufferChangedForTextureStreamingSession:(id)a0 useLowMemoryMode:(char)a1;
- (void)_handleProvidePlaceholderForTextureRequestID:(int)a0;
- (char)_hasDeliveredThumbnailForTextureRequestID:(int)a0;
- (char)_noteThumbnailAsDeliveredForRequestID:(int)a0;
- (void)_processThumbnailRequestsOnRequestQueue:(char)a0;
- (void)_providePlaceholdersForRequestIDs:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 placeholderStyle:(unsigned long long)a1;
- (void)_requestQueue_handleThumbnailData:(id)a0 spec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x0; struct __CFString *x1; unsigned short x2; unsigned short x3; char x4; } x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; })a1 forTextureRequestID:(int)a2;
- (void)_requestQueue_requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 observer:(id)a1 textureRequestIDs:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 displayAssetFetchResult:(id)a3 presentationStyles:(unsigned long long)a4 targetSize:(struct CGSize { double x0; double x1; })a5 screenScale:(double)a6 screenMaxHeadroom:(double)a7 adjustment:(id)a8 intent:(unsigned long long)a9 cannotBeSatisfiedWithThumbnail:(char)a10 useLowMemoryDecode:(char)a11 applyCleanApertureCrop:(char)a12 mediaProvider:(id)a13;
- (void)_setupRequestOptions;
- (void)_workQueue_cancelTextureRequests:(id)a0;
- (void)_workQueue_cleanupTextureStreamingSession:(id)a0 textureRequestIDs:(id)a1;
- (void)_workQueue_didDeliverVideoContentForRequestID:(int)a0;
- (void)_workQueue_handleCGImageResult:(struct CGImage { } *)a0 orientation:(unsigned int)a1 forAsset:(id)a2 info:(id)a3 targetSize:(struct CGSize { double x0; double x1; })a4 adjustment:(id)a5 shouldCache:(char)a6 textureRequestID:(int)a7 sharedState:(id)a8;
- (void)_workQueue_handleResult:(struct CGImage { } *)a0 orientation:(long long)a1 info:(id)a2 targetSize:(struct CGSize { double x0; double x1; })a3 screenScale:(double)a4 mediaRequest:(id)a5 textureRequestID:(int)a6 sharedState:(id)a7;
- (void)_workQueue_performDeferredImageRequest:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4 textureRequestID:(int)a5 mediaProvider:(id)a6;
- (void)_workQueue_performRequestForDisplayAsset:(id)a0 textureRequestID:(int)a1 sharedState:(id)a2;
- (void)_workQueue_processDeferredImageRequests;
- (void)_workQueue_processImageRequestsWithAllowedIDs:(id)a0;
- (void)_workQueue_provideCGImage:(struct CGImage { } *)a0 options:(struct { char x0; float x1; char x2; })a1 adjustment:(id)a2 isDegraded:(char)a3 forRequestID:(int)a4;
- (void)_workQueue_provideVideoFrameForTextureStreamingSession:(id)a0 useLowMemoryMode:(char)a1;
- (struct __CVBuffer { } *)_workQueue_renderCrossfadeIfNeededWithPixelBuffer:(struct __CVBuffer { } *)a0 forVideoSession:(id)a1 textureRequestID:(id)a2 useLowMemoryMode:(char)a3;
- (void)_workQueue_requestVideoTexturesForSpriteAtIndex:(unsigned int)a0 spriteReference:(id)a1 displayAsset:(id)a2 presentationController:(id)a3 adjustment:(id)a4 presentationType:(unsigned char)a5 textureRequestID:(int)a6 mediaProvider:(id)a7 pixelBufferSourcesProvider:(id)a8 useLowMemoryMode:(char)a9;
- (void)_workQueue_startRequestingVideoTexturesForDisplayAsset:(id)a0 presentationController:(id)a1 pixelBufferSource:(id)a2 pixelBufferSourcesProvider:(id)a3 adjustment:(id)a4 textureRequestID:(int)a5 useLowMemoryMode:(char)a6;
- (void)_workQueue_updateTextureStreamingVisibility:(char)a0;
- (void)cancelTextureRequests:(id)a0;
- (void)didFinishRequestingTextures;
- (id)initWithDefaultMediaProvider:(id)a0 layoutQueue:(id)a1;
- (void)interactionStateDidChange:(struct { long long x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; char x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; })a0;
- (void)performRequestForSpriteIndex:(unsigned int)a0 textureRequestID:(int)a1 sharedState:(id)a2;
- (void)registerImageDataSpecs:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 geometries:(struct { struct { double x0; double x1; double x2; } x0; } *)a1 styles:(struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a2 infos:(struct { unsigned char x0; unsigned char x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 inLayout:(id)a4;
- (void)setPreferBGRA:(char)a0;
- (void)viewEnvironmentDidChange:(id)a0;

@end
