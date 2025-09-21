@class NSImageView;

@interface SiriSharedUIDeviceMotionEffectView : NSView {
    NSImageView *_effectImageView;
    char _shouldUpdateOffsetRadians;
    char _forcefullyUpdateImageViewFrame;
    double _initialOffsetRadians;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (void)viewDidChangeEffectiveAppearance;
- (char)wantsDefaultClipping;
- (void)_updateEffectView;
- (void)_cleanUpIfNeeded;
- (void)_configureDeviceMotionIfNeeded;
- (char)_supportsContentViewTransforms;
- (char)_supportsDeviceMotion;
- (char)isViewHighContrast;
- (void)updateMaskingForView:(id)a0;
- (long long)viewAppearanceStyle;
- (void)viewWillBeUpdated;

@end
