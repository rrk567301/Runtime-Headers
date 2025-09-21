@class NSView, NSString, NSTimer, NSArray, WebDataSource, WebSharingServicePickerController, WebTextCompletionController, WebPluginController, NSEvent;

@interface WebHTMLViewPrivate : NSObject {
    BOOL closed;
    BOOL ignoringMouseDraggedEvents;
    BOOL printing;
    BOOL paginateScreenContent;
    BOOL observingSuperviewNotifications;
    BOOL observingWindowNotifications;
    id savedSubviews;
    BOOL subviewsSetAside;
    NSView *layerHostingView;
    BOOL drawingIntoLayer;
    BOOL drawingIntoAcceleratedLayer;
    struct RetainPtr<NSEvent> { NSEvent *m_ptr; } mouseDownEvent;
    BOOL handlingMouseDownEvent;
    struct RetainPtr<NSEvent> { NSEvent *m_ptr; } keyDownEvent;
    BOOL exposeInputContext;
    BOOL isInSecureInputState;
    BOOL _forceUpdateSecureInputState;
    struct CGPoint { double x; double y; } lastScrollPosition;
    BOOL inScrollPositionChanged;
    struct RetainPtr<WebPluginController> { WebPluginController *m_ptr; } pluginController;
    struct RetainPtr<NSString> { NSString *m_ptr; } toolTip;
    long long lastToolTipTag;
    struct WeakObjCPtr<id> { id m_weakReference; } trackingRectOwner;
    void *trackingRectUserData;
    struct RetainPtr<NSTimer> { NSTimer *m_ptr; } autoscrollTimer;
    struct RetainPtr<NSEvent> { NSEvent *m_ptr; } autoscrollTriggerEvent;
    struct RetainPtr<NSArray> { NSArray *m_ptr; } pageRects;
    struct RetainPtr<WebTextCompletionController> { WebTextCompletionController *m_ptr; } completionController;
    BOOL transparentBackground;
    struct WebHTMLViewInterpretKeyEventsParameters { struct KeyboardEvent *x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *interpretKeyEventsParameters;
    struct RetainPtr<WebDataSource> { WebDataSource *m_ptr; } dataSource;
    struct NakedPtr<WebCore::CachedImage> { struct CachedImage *m_ptr; } promisedDragTIFFDataSource;
    SEL selectorForDoCommandBySelector;
    BOOL installedTrackingArea;
    id flagsChangedEventMonitor;
    struct _NSRange { unsigned long long location; unsigned long long length; } softSpaceRange;
    struct RetainPtr<WebSharingServicePickerController> { WebSharingServicePickerController *m_ptr; } currentSharingServicePickerController;
}

+ (void)initialize;

- (void)clear;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
