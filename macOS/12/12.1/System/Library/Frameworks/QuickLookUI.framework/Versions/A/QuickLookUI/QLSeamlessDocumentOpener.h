@class NSURL, NSDictionary, NSImage;

@interface QLSeamlessDocumentOpener : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property double loadingProgress;
@property BOOL automaticallyAdjustWindowPosition;
@property (readonly) NSDictionary *displayState;
@property (readonly) NSImage *transitionImage;
@property (readonly, getter=isAnimating) BOOL animating;

+ (void)initialize;
+ (BOOL)isSeamlesslyOpeningDocuments;
+ (id)seamlessDocumentOpenerForURL:(id)a0;
+ (id)existingSeamlessDocumentOpenerForURL:(id)a0;
+ (void)_resetHelperActiveState;
+ (BOOL)_isUIHelperMaybeRunning;
+ (void)_discardAllActiveOpeners;
+ (void)_checkSeamlessOpeningState;
+ (void)setIgnorePIDCheck:(BOOL)a0;
+ (void)_someWindowWillOrderOnScreen:(id)a0;
+ (void)_pushSeamlessEventForURL:(id)a0;
+ (void)_popSeamlessEventForURL:(id)a0;
+ (void)_pushShowWindow:(id)a0 forURL:(id)a1;
+ (void)_popShowWindow:(id)a0 forURL:(id)a1;
+ (id)seamlessApplicationOpenerForURL:(id)a0;

- (void)dealloc;
- (id)initWithURL:(id)a0;
- (void)beginDocumentOpening;
- (void)endDocumentOpening;
- (void)beginDocumentLoading;
- (void)endDocumentLoading;
- (void)showWindow:(id)a0 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withBlock:(id /* block */)a2;
- (BOOL)isOpening;
- (BOOL)_beginShowingWindow:(id)a0 effect:(id *)a1;
- (void)_endShowingWindow:(id)a0 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 alreadyVisible:(BOOL)a2 effect:(id)a3;
- (void)deferDocumentLoading;
- (void)showLoadingWindow;
- (void)deferDocumentShowing;

@end
