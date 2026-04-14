@class NSColor, CALayer;

@interface NSDesktopImageView : NSView {
    NSColor *_backgroundColor;
    BOOL _loading;
    long long _displayID;
    CALayer *_desktopPictureLayer;
}

@property (copy) NSColor *backgroundColor;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (int)displayID;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_screenChanged:(id)a0;
- (void)_startObservingWindow;
- (void)_stopObservingWindow;
- (void)_forceReloadDesktopPicture;
- (void)_startLoadingDesktopPicture;
- (void)_setDesktopImageBaseOnWorkspace;

@end
