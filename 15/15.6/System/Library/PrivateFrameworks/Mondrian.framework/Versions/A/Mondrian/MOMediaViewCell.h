@class MOMediaView, NSString, MOMediaItem, CALayer;

@interface MOMediaViewCell : UXCollectionViewCell {
    CALayer *_debugIndicatorLayer;
}

@property (readonly) NSString *uuid;
@property (readonly, weak, nonatomic) MOMediaView *mediaView;
@property (readonly) MOMediaItem *mediaItem;
@property (nonatomic) char badgesVisibleWhileScrolling;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (char)_isEmpty;
- (id)indexPath;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)setThumbnailImage:(id)a0;
- (id)thumbnailImage;
- (char)wantsUpdateLayer;
- (unsigned long long)thumbnailVersion;
- (void)updateWithMediaItem:(id)a0;
- (struct CGImage { } *)snapshotOpaque:(char)a0;
- (void)_setDebugIndicatorWithColor:(id)a0;
- (void)_setMediaView:(id)a0;
- (void)_setNeedsUpdateColors;
- (void)animateSelection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mouseTrackingBounds;
- (void)prepareForRecycling;
- (void)setThumbnailImage:(id)a0 usingNearestInterpolation:(char)a1;
- (void)setThumbnailImage:(id)a0 usingNearestInterpolation:(char)a1 animated:(char)a2;

@end
