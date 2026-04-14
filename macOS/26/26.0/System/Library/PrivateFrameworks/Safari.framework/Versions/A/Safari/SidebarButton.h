@class NSString, SidebarButtonPulseAnimation, NSBitmapImageRep;

@interface SidebarButton : RolloverTrackingButton <NSAnimationDelegate> {
    SidebarButtonPulseAnimation *_pulseAnimation;
    NSBitmapImageRep *_pulseImageRep;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)animationDidStop:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)draggingExited:(id)a0;
- (void)_finishInitialization;
- (void)animationDidEnd:(id)a0;
- (void)concludeDragOperation:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (void)_cleanupPulseAnimation;
- (void)beginPulseAnimation;
- (void)prepareForFavoritesBar;

@end
