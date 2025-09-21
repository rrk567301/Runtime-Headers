@class CAMediaTimingFunction, PXGItemPlacement, UXView;

@interface PXGViewControllerItemPlacementInterpolator : NSObject {
    PXGItemPlacement *_sourcePlacement;
    PXGItemPlacement *_targetPlacement;
    char _allowsAdjustedTargetPlacement;
    long long _layering;
    UXView *_containerView;
    double _duration;
    CAMediaTimingFunction *_mainTimingFunction;
    CAMediaTimingFunction *_secondaryTimingFunction;
    CAMediaTimingFunction *_fadeTimingFunction;
    char _hasValidGeometry;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceRectVelocity;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetRect;
    char _alwaysHideSource;
    char _alwaysHideTarget;
    char _animatesDisplayedAssetContentsRect;
    char _animatesCornerRadius;
    char _animatesNormalizedDisplayedAssetRect;
    char _animatesNormalizedTitleRect;
    char _animatesNormalizedSubtitleRect;
}

@property (nonatomic) double time;

- (id)init;
- (void).cxx_destruct;
- (id)adjustedPlacement:(id)a0;
- (id)initWithSourcePlacement:(id)a0 targetPlacement:(id)a1 layering:(long long)a2 containerView:(id)a3 duration:(double)a4;

@end
