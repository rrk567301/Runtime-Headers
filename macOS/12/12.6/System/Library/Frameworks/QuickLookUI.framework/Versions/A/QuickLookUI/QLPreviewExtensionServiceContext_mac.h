@class NSURL, QLExtensionPreview, QLPreviewExtensionViewController;
@protocol QLPreviewingController;

@interface QLPreviewExtensionServiceContext_mac : NSExtensionContext

@property (retain) QLExtensionPreview *preview;
@property (readonly) NSURL *previewContentURL;
@property (weak) QLPreviewExtensionViewController *viewService;
@property (readonly) id<QLPreviewingController> previewingController;
@property BOOL hostIsAnimating;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (BOOL)_extensionIsGenerationBased;

- (void).cxx_destruct;
- (void)loadWithPreview:(id)a0 isAnimating:(BOOL)a1 completion:(id /* block */)a2;
- (void)setPreviewMode:(int)a0;

@end
