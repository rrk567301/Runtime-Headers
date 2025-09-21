@class NSArray, NSDictionary, CAAnimation, CAFenceHandle, NSWindow;

@interface _NSWindowTransformAnimation : NSAnimation {
    NSWindow *_animatingWindow;
    CAAnimation *_caAnimation;
    NSWindow *_originalWindow;
    id /* block */ _animateToProgress;
    struct _SLSTransaction { } *_lastStepTransaction;
    unsigned long long _type;
    id _space;
    id /* block */ _completionBlock;
    double _scaleAmount;
    unsigned char _animateAlpha : 1;
    unsigned char _originalHasParentWindow : 1;
    unsigned char _ignoresRequestsToSetCurrentProgress : 1;
    unsigned int _windowTransformAnimationReservedFlags : 29;
    unsigned char _observingWindowForChanges : 1;
    NSDictionary *_cachedWindowBaseAlphas;
    NSDictionary *_cachedWindowTransformAnchors;
    CAFenceHandle *_originalWindowFence;
    NSArray *_fencedWindows;
}

@property (readonly) double currentAnimationAlpha;
@property struct CGPoint { double x; double y; } startPoint;
@property (setter=_setScaleAmount:) double _scaleAmount;
@property (setter=_setAnimatesAlpha:) BOOL _animatesAlpha;
@property (setter=_setIgnoresRequestsToSetCurrentProgress:) BOOL _ignoresRequestsToSetCurrentProgress;
@property (readonly) NSWindow *window;
@property (readonly) NSWindow *originalWindow;
@property struct CGPoint { double x0; double x1; } anchorPoint;
@property struct CGPoint { double x; double y; } normalizedAnchorPoint;

+ (void)beginDocumentWindowDuplicationForOriginalDocument:(id)a0;
+ (void)beginNewDocumentWindowCreation;
+ (void)beginPersistentUIWindowRestoring;
+ (void)endDocumentWindowDuplication;
+ (void)endNewDocumentWindowCreation;
+ (void)endPersistentUIWindowRestoring;
+ (BOOL)isDuplicatingADocumentWindow;
+ (BOOL)isRestoringPersistentWindows;
+ (void)waitForAnimationToCompleteOnWindows:(id)a0 completionHandler:(id /* block */)a1;
+ (void)waitForAnimationToCompleteOnWindows:(id)a0 forFullScreen:(BOOL)a1;
+ (id)windowTransformAnimationWithWindow:(id)a0 type:(long long)a1 interruptingAnimation:(id)a2;

- (void)startAnimation;
- (void)setCompletionBlock:(id /* block */)a0;
- (void)dealloc;
- (void)setCurrentProgress:(float)a0;
- (void).cxx_destruct;
- (void)_stopAnimation:(long long)a0 withDisplayLink:(id)a1;
- (void)_cleanUpAnimation;
- (id /* block */)_configureAnimationBlock;
- (id)_displayLinkProvider;
- (void)_gatherBaseAlphas:(id)a0 forWindow:(id)a1;
- (void)_gatherChildWindowAnchors:(id)a0 forWindow:(id)a1 anchorPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)_resetWindowProperties;
- (id)_stringForAnimationType;
- (id)_windowBaseAlphas:(BOOL)a0;
- (id)_windowTransformAnchors:(BOOL)a0;
- (void)finishConfiguration;
- (id)initWithWindow:(id)a0 animatingWindow:(id)a1 type:(long long)a2 interruptingAnimation:(id)a3;
- (BOOL)isOrderFrontAnimation;
- (BOOL)isOrderOutAnimation;
- (void)reconfigureAnimationBlock;
- (void)setAnimationAlphaValue:(double)a0;

@end
