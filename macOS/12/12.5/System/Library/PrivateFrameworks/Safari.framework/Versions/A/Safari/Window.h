@protocol ExtendedWindowDelegate;

@interface Window : NSWindow <LockableFirstResponder> {
    BOOL _unresizable;
    unsigned long long _firstResponderLockedCount;
    struct CGSize { double width; double height; } _savedMinContentSize;
    struct CGSize { double width; double height; } _savedMaxContentSize;
}

@property (weak) id<ExtendedWindowDelegate> delegate;
@property (nonatomic, getter=isResizable) BOOL resizable;

- (void)dealloc;
- (id)delegate;
- (void)close;
- (void)setDelegate:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)sendEvent:(id)a0;
- (void)becomeKeyWindow;
- (BOOL)makeFirstResponder:(id)a0;
- (struct CGPoint { double x0; double x1; })cascadeTopLeftFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_setFrameAfterMove:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)lockFirstResponder;
- (void)unlockFirstResponder;
- (id)findFrontmostOtherWindowOfWidth:(float)a0;
- (BOOL)canCycle;
- (BOOL)firstResponderIsLocked;

@end
