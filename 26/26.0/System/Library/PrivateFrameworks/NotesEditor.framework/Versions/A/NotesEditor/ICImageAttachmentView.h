@class CALayer, NSImage, NSView;

@interface ICImageAttachmentView : ICAttachmentView

@property (retain) CALayer *imageLayer;
@property (weak, nonatomic) NSImage *image;
@property (nonatomic) BOOL shouldUpdateLayoutInImageDidLoad;
@property (nonatomic) BOOL shouldTryToReloadImageIfLoadingFails;
@property (copy, nonatomic) id /* block */ imageLoadingCancelBlock;
@property (readonly, nonatomic) NSImage *placeholderImage;
@property (nonatomic) BOOL shouldShowLoadingImage;
@property (retain, nonatomic) NSView *loadingImageView;
@property (readonly, nonatomic) BOOL isThumbnailView;

+ (id)ICLoadingPlaceholderIconColor;
+ (id)ICLoadingPlaceholderBackgroundColor;
+ (double)ICLoadingPlaceholderIconSize;

- (void)setHighlightColor:(id)a0;
- (void)updateLayer;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })imageSize;
- (void).cxx_destruct;
- (id)accessibilityHelp;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrame;
- (BOOL)cancelDidScrollIntoVisibleRange;
- (void)didChangeAttachment;
- (void)didChangeMedia;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (void)didUpdatePreviewImages;
- (id)imageForPrinting;
- (void)updateImageSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForContent;
- (void)animateImageArrival;
- (id)icaxTypeDescription;
- (id)imageContentsGravity;
- (void)imageDidLoad:(id)a0 shouldFade:(BOOL)a1;
- (BOOL)isAttachmentEditable;
- (void)prepareForPrinting;
- (void)refreshLoadingImage;
- (void)setShowLoadingImage:(BOOL)a0;
- (void)setupBorderForLayer:(id)a0;
- (void)setupEventHandling;
- (void)setupImagePlaceholder;
- (void)setupImagePlaceholderIfNecessary;
- (void)sharedInit:(BOOL)a0;
- (BOOL)shouldIncludeAttachmentTitleInAXLabel;
- (BOOL)showLoadingImage;
- (void)updateImageInView:(BOOL)a0;
- (void)updateImageInViewIfNecessary;

@end
