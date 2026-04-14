@class NSBitmapImageRep, NSView, NSCrossfadeView;

@interface _NSTitleControlCrossFadeAnimation : NSAnimation {
    NSCrossfadeView *crossFadeView;
}

@property (retain) NSBitmapImageRep *startingSnapshot;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startingFrame;
@property (retain) NSBitmapImageRep *endingSnapshot;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endingFrame;
@property (retain) NSView *view;

- (void)dealloc;
- (void)invalidate;
- (void)startAnimation;
- (void)setCurrentProgress:(float)a0;
- (id)_screen;
- (void)_windowWillStartLiveResize:(id)a0;

@end
