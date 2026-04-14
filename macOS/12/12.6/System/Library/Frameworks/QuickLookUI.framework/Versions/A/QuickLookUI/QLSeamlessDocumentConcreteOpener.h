@class NSDictionary, QLSeamlessOpeningItemInfo, NSObject;
@protocol OS_dispatch_source;

@interface QLSeamlessDocumentConcreteOpener : QLSeamlessDocumentOpener {
    unsigned int _port;
    int _openingState;
    int _loadingState;
    int _showingState;
    NSObject<OS_dispatch_source> *_deferredTimeoutTimer;
    double _loadingProgress;
    NSDictionary *_displayState;
    QLSeamlessOpeningItemInfo *_info;
    BOOL _automaticallyAdjustWindowPosition;
    long long _animationBehavior;
}

- (void)dealloc;
- (id)description;
- (id)initWithURL:(id)a0;
- (BOOL)isAnimating;
- (void)beginDocumentOpening;
- (void)endDocumentOpening;
- (void)beginDocumentLoading;
- (void)endDocumentLoading;
- (void)discard;
- (void)showWindow:(id)a0 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withBlock:(id /* block */)a2;
- (BOOL)isOpening;
- (double)loadingProgress;
- (void)setLoadingProgress:(double)a0;
- (id)displayState;
- (id)transitionImage;
- (BOOL)_beginShowingWindow:(id)a0 effect:(id *)a1;
- (void)_endShowingWindow:(id)a0 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 alreadyVisible:(BOOL)a2 effect:(id)a3;
- (void)deferDocumentLoading;
- (void)showLoadingWindow;
- (void)deferDocumentShowing;
- (void)setAutomaticallyAdjustWindowPosition:(BOOL)a0;
- (BOOL)automaticallyAdjustWindowPosition;
- (void)_stopDeferredTimeout;
- (void)_startDeferredTimeout;
- (void)_noteDocumentOpenedWithWindow:(id)a0;

@end
