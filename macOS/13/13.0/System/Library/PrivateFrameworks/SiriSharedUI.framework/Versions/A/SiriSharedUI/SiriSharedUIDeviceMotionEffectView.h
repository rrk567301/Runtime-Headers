@class NSImageView;

@interface SiriSharedUIDeviceMotionEffectView : NSView {
    NSImageView *_effectImageView;
    BOOL _shouldUpdateOffsetRadians;
    BOOL _forcefullyUpdateImageViewFrame;
    double _initialOffsetRadians;
}

- (void)invalidate;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)isFlipped;
- (BOOL)wantsDefaultClipping;
- (void)_updateEffectView;
- (void)updateMaskingForView:(id)a0;
- (BOOL)_supportsDeviceMotion;
- (BOOL)_supportsContentViewTransforms;
- (void)viewWillBeUpdated;
- (void)_configureDeviceMotionIfNeeded;
- (void)_cleanUpIfNeeded;
- (BOOL)isViewHighContrast;
- (long long)viewAppearanceStyle;

@end
