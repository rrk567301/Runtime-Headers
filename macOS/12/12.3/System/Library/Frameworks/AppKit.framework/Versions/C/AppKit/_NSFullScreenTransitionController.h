@class _NSFullScreenSpace;

@interface _NSFullScreenTransitionController : NSObject {
    unsigned long long _signpostID;
}

@property (retain, nonatomic) _NSFullScreenSpace *space;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })flippedCGRectFromNSRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)dealloc;
- (id)init;
- (void)start;
- (void)interrupt;
- (id)contentController;
- (unsigned int)contentWindowID;
- (void)startMenuBarAnimation:(double)a0;
- (void)complete;
- (BOOL)suppressImplicitFullScreenForOtherWindows;

@end
