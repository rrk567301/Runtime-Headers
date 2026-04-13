@class NSWindow;

@interface NSFocusState : NSPSMatrix {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } theClip;
    NSWindow *window;
    BOOL clipSet;
    BOOL clipEmpty;
    struct __CFArray { } *specialGStateViews;
}

+ (id)sharedFocusState;

- (void)dealloc;
- (void)reset;
- (void)flush;
- (void)setWindow:(id)a0;
- (void)setFrameRotation:(double)a0;
- (void)flushWithContext:(id)a0;
- (void)clip:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (id)scaleTo:(double)a0 :(double)a1;

@end
