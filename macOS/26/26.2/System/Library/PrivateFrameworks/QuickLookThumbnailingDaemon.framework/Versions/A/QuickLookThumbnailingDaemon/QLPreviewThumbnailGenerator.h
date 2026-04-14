@class NSString, NSArray, QLThumbnailMetadata, QLThumbnailExtensionGenerator, QLServerSatellite, NSObject, QLTGeneratorThumbnailRequest, QLThumbnailItem, QLPlatformImage;
@protocol OS_dispatch_queue;

@interface QLPreviewThumbnailGenerator : NSObject {
    struct __QLThumbnailRequest { } *_satelliteRequest;
}

@property BOOL resultIsLowQuality;
@property BOOL wantsLowQuality;
@property (retain) QLThumbnailMetadata *generatedProperties;
@property int status;
@property (copy) NSArray *thumbnailImages;
@property (retain) QLThumbnailItem *item;
@property BOOL resultHasIconModeApplied;
@property (copy) NSString *extensionBadge;
@property (retain) QLTGeneratorThumbnailRequest *request;
@property (retain) QLThumbnailExtensionGenerator *extensionGenerator;
@property (retain) QLServerSatellite *satellite;
@property struct __QLThumbnailRequest { } *satelliteRequest;
@property (readonly) QLPlatformImage *thumbnailImage;
@property int flavor;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *generationQueue;
@property unsigned long long sandboxExtension;

+ (BOOL)canGenerateThumbnailForContentType:(id)a0 atSize:(struct CGSize { double x0; double x1; })a1;

- (void)cancel;
- (void).cxx_destruct;
- (struct CGContext { } *)_beginContext;
- (struct CGContext { } *)_beginContextWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGContext { } *)_beginContextWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void)_createThumbnailForPDF:(id /* block */)a0;
- (void)_drawRemotePDFPage:(id)a0 atIndex:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_generateThumbnailFromExtensionAndReplyWith:(id /* block */)a0;
- (void)_generateThumbnailWithWillStartBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)_generateWithSatelliteWithWillStartBlock:(id /* block */)a0 replyWith:(id /* block */)a1;
- (double)_minimumDimensionForPDFPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 requestThumbnailSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
- (void)_replyWithImages:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)generateThumbnailWithCompletionHandler:(id /* block */)a0;
- (void)generateWithCompletionBlock:(id /* block */)a0;
- (void)generateWithWillStartBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (id)initWithGeneratorRequest:(id)a0 lowQuality:(BOOL)a1 thumbnailItem:(id)a2;

@end
