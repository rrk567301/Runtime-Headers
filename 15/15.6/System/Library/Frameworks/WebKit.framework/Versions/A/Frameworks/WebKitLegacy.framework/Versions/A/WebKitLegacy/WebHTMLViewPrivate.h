@class NSView;

@interface WebHTMLViewPrivate : NSObject {
    char closed;
    char ignoringMouseDraggedEvents;
    char printing;
    char paginateScreenContent;
    char observingSuperviewNotifications;
    char observingWindowNotifications;
    id savedSubviews;
    char subviewsSetAside;
    NSView *layerHostingView;
    char drawingIntoLayer;
    char drawingIntoAcceleratedLayer;
    struct RetainPtr<NSEvent> { void *m_ptr; } mouseDownEvent;
    char handlingMouseDownEvent;
    struct RetainPtr<NSEvent> { void *m_ptr; } keyDownEvent;
    char exposeInputContext;
    char isInSecureInputState;
    char _forceUpdateSecureInputState;
    struct CGPoint { double x; double y; } lastScrollPosition;
    char inScrollPositionChanged;
    struct RetainPtr<WebPluginController> { void *m_ptr; } pluginController;
    struct RetainPtr<NSString> { void *m_ptr; } toolTip;
    long long lastToolTipTag;
    struct WeakObjCPtr<id> { id m_weakReference; } trackingRectOwner;
    void *trackingRectUserData;
    struct RetainPtr<NSTimer> { void *m_ptr; } autoscrollTimer;
    struct RetainPtr<NSEvent> { void *m_ptr; } autoscrollTriggerEvent;
    struct RetainPtr<NSArray> { void *m_ptr; } pageRects;
    struct RetainPtr<WebTextCompletionController> { void *m_ptr; } completionController;
    char transparentBackground;
    struct WebHTMLViewInterpretKeyEventsParameters { struct KeyboardEvent *x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *interpretKeyEventsParameters;
    struct RetainPtr<WebDataSource> { void *m_ptr; } dataSource;
    struct NakedPtr<WebCore::CachedImage> { struct CachedImage *m_ptr; } promisedDragTIFFDataSource;
    SEL selectorForDoCommandBySelector;
    char installedTrackingArea;
    id flagsChangedEventMonitor;
    struct _NSRange { unsigned long long location; unsigned long long length; } softSpaceRange;
    struct RetainPtr<WebSharingServicePickerController> { void *m_ptr; } currentSharingServicePickerController;
}

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)clear;

@end
