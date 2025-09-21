@class CALayer, NSImage, NSImageView;

@interface ICImageAttachmentView : ICAttachmentView

@property (retain) CALayer *imageLayer;
@property (weak, nonatomic) NSImage *image;
@property (nonatomic) char shouldUpdateLayoutInImageDidLoad;
@property (nonatomic) char shouldTryToReloadImageIfLoadingFails;
@property (copy, nonatomic) id /* block */ imageLoadingCancelBlock;
@property (readonly, nonatomic) NSImage *placeholderImage;
@property (nonatomic) char shouldShowLoadingImage;
@property (retain, nonatomic) NSImageView *loadingImageView;
@property (readonly, nonatomic) char isThumbnailView;

+ (id)ICLoadingPlaceholderIconColor;
+ (id)ICLoadingPlaceholderBackgroundColor;
+ (double)ICLoadingPlaceholderIconSize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)accessibilityHelp;
- (struct CGSize { double x0; double x1; })imageSize;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (void)setHighlightColor:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrame;
- (char)cancelDidScrollIntoVisibleRange;
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
- (void)imageDidLoad:(id)a0 shouldFade:(char)a1;
- (char)isAttachmentEditable;
- (void)prepareForPrinting;
- (void)refreshLoadingImage;
- (void)setShowLoadingImage:(char)a0;
- (void)setupBorderForLayer:(id)a0;
- (void)setupEventHandling;
- (void)setupImagePlaceholder;
- (void)setupImagePlaceholderIfNecessary;
- (void)sharedInit:(char)a0;
- (char)shouldIncludeAttachmentTitleInAXLabel;
- (char)showLoadingImage;
- (void)updateImageInView:(char)a0;
- (void)updateImageInViewIfNecessary;

@end
