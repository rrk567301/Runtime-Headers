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

+ (id)ICLoadingPlaceholderBackgroundColor;
+ (double)ICLoadingPlaceholderIconSize;
+ (id)ICLoadingPlaceholderIconColor;

- (void)setHighlightColor:(id)a0;
- (struct CGSize { double x0; double x1; })imageSize;
- (void)updateLayer;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)accessibilityHelp;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrame;
- (BOOL)cancelDidScrollIntoVisibleRange;
- (void)didChangeAttachment;
- (void)didChangeMedia;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (void)didUpdatePreviewImages;
- (id)imageForPrinting;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForContent;
- (void)updateImageSize;
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
