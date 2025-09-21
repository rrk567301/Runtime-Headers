@class UXView, CAShapeLayer, NSImage, UXImageView, NSString, KHProjectPhoto;
@protocol KHPhotoBinPhotoCellAccessibilitySelectionDelegate;

@interface KHPhotoBinPhotoCell : UXCollectionViewCell <NSAccessibilityRow>

@property (retain, nonatomic) CAShapeLayer *currentFrameImageLayer;
@property (readonly, nonatomic) UXView *selectedBackgroundView;
@property (readonly, nonatomic) UXImageView *previewView;
@property (nonatomic) BOOL usingPlaceholderImage;
@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) KHProjectPhoto *draggingPhoto;
@property (weak, nonatomic) id<KHPhotoBinPhotoCellAccessibilitySelectionDelegate> accessibilitySelectionDelegate;
@property (retain, nonatomic) KHProjectPhoto *photo;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double imageAlpha;
@property (nonatomic, getter=isCurrentFrameImage) BOOL currentFrameImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })preferredContentSize;

- (void)updateLayer;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)layout;
- (void)viewDidMoveToWindow;
- (void)viewDidChangeBackingProperties;
- (void)_updateImage;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (long long)accessibilityIndex;
- (BOOL)accessibilityPerformPick;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRoleDescription;
- (BOOL)isAccessibilitySelected;
- (void)_updateCurrentFrameImagePath;
- (void)_updateCurrentImageMarker;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForImageView;

@end
