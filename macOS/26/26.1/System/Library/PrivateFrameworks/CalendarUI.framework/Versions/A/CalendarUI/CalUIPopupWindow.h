@class NSView;

@interface CalUIPopupWindow : NSWindow

@property (retain) NSView *controlView;
@property BOOL hasCloseBox;

+ (id)popupWindowWithView:(id)a0;

- (BOOL)canBecomeKeyWindow;
- (void)setView:(id)a0;
- (void).cxx_destruct;
- (id)initWithView:(id)a0;
- (BOOL)hasShadow;
- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)orderOut:(id)a0;
- (void)hideControlView;
- (void)showControlView;

@end
