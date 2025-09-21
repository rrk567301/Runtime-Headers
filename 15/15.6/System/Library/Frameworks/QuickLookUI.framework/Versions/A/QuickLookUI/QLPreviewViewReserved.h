@class NSURL, NSMutableDictionary, NSDate, NSPanGestureRecognizer, NSClickGestureRecognizer, QLPreviewPageNumberOverlayController, QLPreviewDragController, QLPreviewContainerView, NSSet, QLScrollController, QLPreviewCacheManager, QLPreviewOverlayController, QLPreviewPathOverlayController, NSString, NSArray, NSView, QLPreviewDocument, NSWindow;
@protocol QLDisplayable, QLPreviewItem;

@interface QLPreviewViewReserved : NSObject {
    int mode;
    char showControls;
    char sizesPreviewToFit;
    NSArray *viewConstraints;
    int internalState;
    char isDeactivating;
    NSSet *supportedDisplayBundleIDs;
    QLPreviewCacheManager *cacheManager;
    id<QLPreviewItem> previewItem;
    char allowLoadingOfUnsupportedDisplayBundleIDs;
    int transition;
    char enableDragNDrop;
    char handlingEvent;
    char handledMouseDown;
    char manageVisibilityOnOldDisplayable;
    char manageVisibilityOnNewDisplayable;
    char changingDisplayable;
    unsigned long long doubleClickModifierFlags;
    NSURL *appURLForNextOpening;
    id<QLDisplayable> loadingDisplayable;
    id<QLDisplayable> emptyDisplayable;
    id<QLDisplayable> genericDisplayable;
    char hasCustomLoadingDisplayable;
    NSView *overlayContentView;
    id delegate;
    QLPreviewOverlayController *overlayController;
    QLScrollController *scrollController;
    QLPreviewContainerView *previewContainerView;
    QLPreviewPathOverlayController *pathOverlayController;
    QLPreviewPageNumberOverlayController *pageNumOverlayController;
    id<QLDisplayable> displayable;
    QLPreviewDocument *document;
    QLPreviewDocument *displayedDocument;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } visualMargins;
    NSMutableDictionary *userDefinedSizes;
    NSDate *timeoutDate;
    char blocking;
    char automaticallyMakePreviewFirstResponder;
    char shouldCloseWithWindow;
    char autostarts;
    char showRemainingTime;
    char enableRemotePreviews;
    char fullLayers;
    char hideLoadingSpinner;
    char loadingForForceTouch;
    NSString *initialDisplayBundleID;
    struct CGSize { double width; double height; } initialThumbnailSize;
    double loadingTimeout;
    char forceVisible;
    char allowsAlerts;
    NSPanGestureRecognizer *dragGestureRecognizer;
    QLPreviewDragController *dragController;
    char dragging;
    char inHitTest;
    NSClickGestureRecognizer *doubleClickRecognizer;
    NSWindow *_windowLastMovedTo;
    id highlightObject;
    id mandatoryServer;
    id forcedContentTypeUTI;
}

- (void).cxx_destruct;

@end
