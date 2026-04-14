@class MOMediaView, NSString, MOMediaItem, CALayer;

@interface MOMediaViewCell : UXCollectionViewCell {
    CALayer *_debugIndicatorLayer;
}

@property (readonly) NSString *uuid;
@property (readonly, weak, nonatomic) MOMediaView *mediaView;
@property (readonly) MOMediaItem *mediaItem;
@property (nonatomic) BOOL badgesVisibleWhileScrolling;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)_isEmpty;
- (id)indexPath;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (id)thumbnailImage;
- (void)setThumbnailImage:(id)a0;
- (unsigned long long)thumbnailVersion;
- (void)animateSelection;
- (void)_setMediaView:(id)a0;
- (void)prepareForRecycling;
- (void)setThumbnailImage:(id)a0 usingNearestInterpolation:(BOOL)a1;
- (void)setThumbnailImage:(id)a0 usingNearestInterpolation:(BOOL)a1 animated:(BOOL)a2;
- (void)_setDebugIndicatorWithColor:(id)a0;
- (void)_setNeedsUpdateColors;
- (void)updateWithMediaItem:(id)a0;
- (struct CGImage { } *)snapshotOpaque:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mouseTrackingBounds;

@end
