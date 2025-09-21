@class _PXLivePhotoTrimScrubberLoupeViewImageRequest, AVAsset, UXView, CAShapeLayer, UXImageView, NSObject, AVVideoComposition;
@protocol OS_dispatch_queue;

@interface PXLivePhotoTrimScrubberLoupeView : UXView {
    UXView *_container;
    CAShapeLayer *_maskLayer;
    UXImageView *_imageView;
    char _imageIsValid;
    NSObject<OS_dispatch_queue> *_workQueue;
    _PXLivePhotoTrimScrubberLoupeViewImageRequest *_currentImageRequest;
    CAShapeLayer *_borderLayer;
    char _playheadIsValid;
    double _needleWidth;
    char _forceDarkUserInterfaceStyle;
}

@property (readonly, nonatomic) unsigned long long playheadStyle;
@property (readonly, nonatomic) AVAsset *asset;
@property (readonly, nonatomic) AVVideoComposition *videoComposition;
@property (nonatomic) double aspectRatio;
@property (retain, nonatomic) UXView *playerView;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameTime;
@property (nonatomic) double verticalInset;
@property (nonatomic) double outerCornerRadius;
@property (nonatomic) double innerCornerRadius;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_invalidateImage;
- (void)setShowNeedleWithWidth:(double)a0 animate:(char)a1;
- (void)_PXLivePhotoTrimScrubberLoupeView_commonInit;
- (id)_collapsedPathForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_expandedPathForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 needsCutout:(char)a1;
- (void)_extractImageFromImageRequest:(id)a0;
- (void)_invalidatePlayhead;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_loupeFrameWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_presentImage:(id)a0;
- (void)_setPlayheadStyle:(unsigned long long)a0 animate:(char)a1;
- (id)_transitionPathForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 needsCutout:(char)a1;
- (void)_updateImageIfNeeded;
- (void)_updatePlayheadBorderAnimate:(char)a0;
- (void)_updatePlayheadIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forceDarkUserInterfaceStyle:(char)a1;
- (void)setAsset:(id)a0 videoComposition:(id)a1;
- (void)setShowLoupePlayerAnimate:(char)a0;
- (void)setShowLoupeThumbnailWithFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 animate:(char)a1;
- (void)setShowPlayerView:(char)a0;
- (char)showPlayerView;

@end
