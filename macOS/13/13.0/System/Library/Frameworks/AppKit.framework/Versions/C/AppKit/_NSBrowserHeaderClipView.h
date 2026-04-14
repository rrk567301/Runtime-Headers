@class NSView;

@interface _NSBrowserHeaderClipView : NSClipView

@property (retain, nonatomic) NSView *headerView;

- (void)dealloc;
- (void)_handleFrameChangeForSubview:(id)a0;
- (void)_selfBoundsChanged;
- (void)_pinDocRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_currentDocViewFrame;

@end
