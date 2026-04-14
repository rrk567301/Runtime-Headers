@class NSView, NSString, NSArray, QLBubbleAnimator, QLFrameDebugWindow, QLBubbleWindowController, NSWindow, QLAnimationWindowEffect, QLControlsController;
@protocol QLBubbleDelegate;

@interface QLBubbleReserved : NSObject {
    NSView *contentView;
    QLBubbleWindowController *windowController;
    NSWindow *parentWindow;
    QLControlsController *controlsController;
    NSArray *controls;
    QLBubbleAnimator *animator;
    id<QLBubbleDelegate> delegate;
    int animationType;
    NSString *appearanceName;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } animationSourceFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } animationContentFrame;
    unsigned long long preferredEdge;
    unsigned long long usedEdge;
    BOOL savedVisible;
    long long windowLevel;
    struct CGPoint { double x; double y; } aimPoint;
    BOOL forcePreferredEdge;
    BOOL forceTitleBar;
    BOOL forceNoArrow;
    BOOL preventsActivation;
    BOOL skipAnimationInvoke;
    int invokeBubbleTimeout;
    BOOL skipAlphaDuringOpenAnimation;
    BOOL ignoreItemFrameWhenResizing;
    BOOL neverResize;
    BOOL mouseDownCanMoveBubble;
    BOOL bubbleWasManuallyMoved;
    long long controlAlignment;
    id /* block */ activateMonitorBlock;
    id eventMonitor;
    BOOL open;
    BOOL closing;
    QLAnimationWindowEffect *effect;
    QLFrameDebugWindow *debugFrameWindow;
}

- (void)finalize;
- (void)dealloc;

@end
