@class NSWindow;

@interface NSFocusState : NSPSMatrix {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } theClip;
    NSWindow *window;
    BOOL clipSet;
    BOOL clipEmpty;
    struct __CFArray { } *specialGStateViews;
}

+ (id)sharedFocusState;

- (void)reset;
- (void)dealloc;
- (void)setWindow:(id)a0;
- (void)flush;
- (void)clip:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)flushWithContext:(id)a0;

@end
