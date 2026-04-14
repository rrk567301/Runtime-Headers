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

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (long long)accessibilityIndex;
- (id)accessibilityRoleDescription;
- (BOOL)accessibilityPerformPick;
- (BOOL)accessibilityPerformPress;
- (BOOL)isAccessibilitySelected;
- (void)keyDown:(id)a0;
- (void)viewDidChangeBackingProperties;
- (void)setSelected:(BOOL)a0;
- (void)_updateImage;
- (void)_updateCurrentImageMarker;
- (void)_updateCurrentFrameImagePath;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForImageView;

@end
