@interface ImagePlaygroundInternal.GPVFXView : VFXView {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ isPausedBySettings;
    void /* unknown type, empty encoding */ isPausedWhenNotAnimating;
    void /* unknown type, empty encoding */ reduceMotion;
    void /* unknown type, empty encoding */ occluded;
    void /* unknown type, empty encoding */ inactiveForALongTime;
    void /* unknown type, empty encoding */ gpuIntensiveModalOperationInProgress;
    void /* unknown type, empty encoding */ coveredByContent;
    void /* unknown type, empty encoding */ performanceNotifierState;
    void /* unknown type, empty encoding */ gp_isAnimatingCount;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;

@end
