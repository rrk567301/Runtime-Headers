@class QLAnimationWindowEffect, NSWindow;
@protocol QLPreviewPanelDataSource;

@interface QLPreviewPanelReserved : NSObject {
    char ignoreOpenAndClose;
    QLAnimationWindowEffect *currentEffect;
    int openingEffect;
    int defaultEffect;
    char ignorePanelFrameChanges;
    double openingTime;
    id<QLPreviewPanelDataSource> dataSource;
    id currentController;
    NSWindow *linkedWindow;
    char makeKeyWindow;
    NSWindow *backgroundFocusWindow;
    int focusMode;
    QLAnimationWindowEffect *backgroundFocusEffect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastShapedBounds;
    char panelHasBeenSetup;
    short deferredClosing;
    int deferredClosingEffect;
    int transient;
    char positionNearPreviewItem;
    char loadingForForceTouch;
    struct __CFMachPort { } *_mouseDownEventTapPort;
    struct __CFRunLoopSource { } *_mouseDownEventTapSource;
    id /* block */ _mouseDownCallback;
    id /* block */ panelDidCloseCompletionBlock;
    char isClosing;
}

- (void).cxx_destruct;

@end
