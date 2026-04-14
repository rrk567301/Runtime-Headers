@class CALayer;

@interface NSGlobalPreferenceTransitionOverlay : NSWindow {
    CALayer *_rootLayer;
    CALayer *_beforeLayer;
}

- (void)disableAutomaticTermination;
- (void)enableAutomaticTermination;
- (void)_setWindowTag;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (void)endPresentation;
- (id)initOnScreen:(id)a0;

@end
