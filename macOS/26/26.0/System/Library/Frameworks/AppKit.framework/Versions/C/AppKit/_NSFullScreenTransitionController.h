@class _NSFullScreenSpace;

@interface _NSFullScreenTransitionController : NSObject {
    unsigned long long _signpostID;
    BOOL _sawActiveSpaceChange;
}

@property (retain, nonatomic) _NSFullScreenSpace *space;
@property (readonly, nonatomic) BOOL wantsExtendedDynamicRange;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })flippedCGRectFromNSRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (BOOL)tracksActiveSpaceChanges;

- (void)complete;
- (void)start;
- (void)dealloc;
- (void)interrupt;
- (id)init;
- (id)contentController;
- (unsigned int)contentWindowID;
- (void)performAfterActiveSpaceChanges:(id /* block */)a0;
- (void)_activeSpaceChanged:(id)a0;
- (void)startMenuBarAnimation:(double)a0;
- (BOOL)suppressImplicitFullScreenForOtherWindows;

@end
