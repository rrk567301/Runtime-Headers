@class NSWindow, NSPoofView, NSDictionary;

@interface NSToolbarPoofAnimator : NSObject {
    NSWindow *_poofWindow;
    NSPoofView *_poofWindowImageView;
    NSDictionary *_callbackInfo;
}

@property (retain) NSToolbarPoofAnimator *selfRetainedPoof;

+ (void)runPoofAtPoint:(struct CGPoint { double x0; double x1; })a0 withSize:(struct CGSize { double x0; double x1; })a1 callbackInfo:(id)a2;
+ (void)runPoofAtPoint:(struct CGPoint { double x0; double x1; })a0;

- (void)dealloc;
- (id)initAtPoint:(struct CGPoint { double x0; double x1; })a0 withSize:(struct CGSize { double x0; double x1; })a1 callbackInfo:(id)a2;
- (void)runPoof;
- (void)_doPoof:(long long)a0;
- (void)_doCallback;

@end
