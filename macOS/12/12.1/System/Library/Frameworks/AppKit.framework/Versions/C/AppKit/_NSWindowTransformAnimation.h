@class NSWindow, CAAnimation;

@interface _NSWindowTransformAnimation : NSAnimation {
    NSWindow *_animatingWindow;
    NSWindow *_originalWindow;
    id /* block */ _animateToProgress;
    unsigned long long _type;
    id _space;
    id /* block */ _completionBlock;
    double _scaleAmount;
    unsigned char _animateAlpha : 1;
    unsigned char _originalHasParentWindow : 1;
    unsigned int _windowTransformAnimationReservedFlags : 30;
    CAAnimation *_caAnimation;
}

@property (readonly) double currentAnimationAlpha;
@property struct CGPoint { double x; double y; } startPoint;
@property (setter=_setScaleAmount:) double _scaleAmount;
@property (setter=_setAnimatesAlpha:) BOOL _animatesAlpha;
@property (readonly) NSWindow *window;
@property struct CGPoint { double x0; double x1; } anchorPoint;
@property struct CGPoint { double x; double y; } normalizedAnchorPoint;

+ (void)waitForAnimationToCompleteOnWindows:(id)a0 forFullScreen:(BOOL)a1;
+ (id)windowTransformAnimationWithWindow:(id)a0 type:(long long)a1 interruptingAnimation:(id)a2;
+ (void)beginDocumentWindowDuplicationForOriginalDocument:(id)a0;
+ (void)endDocumentWindowDuplication;
+ (void)beginNewDocumentWindowCreation;
+ (void)endNewDocumentWindowCreation;
+ (BOOL)isDuplicatingADocumentWindow;
+ (BOOL)isRestoringPersistentWindows;
+ (id)_originalDocumentWindowForWindow:(id)a0;
+ (void)beginPersistentUIWindowRestoring;
+ (void)endPersistentUIWindowRestoring;

- (void)dealloc;
- (void)setCompletionBlock:(id /* block */)a0;
- (void)startAnimation;
- (void)setCurrentProgress:(float)a0;
- (void)_stopAnimation:(long long)a0 withDisplayLink:(id)a1;
- (id)_screen;
- (BOOL)isOrderFrontAnimation;
- (BOOL)isOrderOutAnimation;
- (id)initWithWindow:(id)a0 type:(long long)a1 interruptingAnimation:(id)a2;
- (void)_gatherChildWindowAnchors:(id)a0 forWindow:(id)a1 anchorPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)_windowTransformAnchors;
- (id)_windowBaseAlphas;
- (id /* block */)_configureAnimationBlock;
- (id)_stringForAnimationType;
- (void)finishConfiguration;
- (void)_duplicateAnimationStopped;
- (void)_cleanUpAnimation;
- (void)setAnimationAlphaValue:(double)a0;
- (void)setWindowShakeProgress:(double)a0;
- (void)setWindowSendDocmentUpTranslationProgress:(double)a0;

@end
