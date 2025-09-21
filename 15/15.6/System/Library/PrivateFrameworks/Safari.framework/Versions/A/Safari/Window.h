@protocol ExtendedWindowDelegate;

@interface Window : NSWindow <LockableFirstResponder> {
    char _unresizable;
    unsigned long long _firstResponderLockedCount;
    struct CGSize { double width; double height; } _savedMinContentSize;
    struct CGSize { double width; double height; } _savedMaxContentSize;
}

@property (weak) id<ExtendedWindowDelegate> delegate;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } overrideWindowRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } overrideFrameToStaggerFrom;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cascadedChildWindowFrame;
@property (nonatomic, getter=isResizable) char resizable;

- (void)dealloc;
- (void)close;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)becomeKeyWindow;
- (void)_setFrameAfterMove:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })cascadeTopLeftFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (char)makeFirstResponder:(id)a0;
- (char)performKeyEquivalent:(id)a0;
- (void)sendEvent:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(char)a1;
- (char)validateUserInterfaceItem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cascadedFrameForDryRun:(char)a0;
- (char)canCycle;
- (id)findFrontmostOtherWindowOfWidth:(float)a0;
- (char)firstResponderIsLocked;
- (void)lockFirstResponder;
- (void)unlockFirstResponder;

@end
