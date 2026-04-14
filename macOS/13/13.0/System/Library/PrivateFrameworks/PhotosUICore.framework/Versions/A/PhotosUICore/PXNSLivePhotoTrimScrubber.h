@class NSPressGestureRecognizer;

@interface PXNSLivePhotoTrimScrubber : PXLivePhotoTrimScrubber

@property (retain, nonatomic) NSPressGestureRecognizer *pressGesture;
@property (nonatomic) struct CGPoint { double x; double y; } lastGestureLocation;

+ (id)createSnappingControllerWithSnappingTarget:(double)a0;
+ (id)_stretchableImageNamed:(id)a0 withCapInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;
+ (id)trimStartImage;
+ (id)trimStartHighlightedImage;
+ (id)trimEndImage;
+ (id)trimEndHighlightedImage;

- (void).cxx_destruct;
- (void)_handlePress:(id)a0;
- (void)setDisabled:(BOOL)a0;
- (id)initWithFilmStripViewClass:(Class)a0 spec:(id)a1;
- (void)_PXNSLivePhotoTrimScrubber_commonInit;
- (void)_handleBeginGesture:(id)a0;
- (void)_handleChangeGesture:(id)a0;
- (void)impactOccured;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backingAlignedRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
