@class QLAnimationWindowEffect, QLPreviewBubble;
@protocol QLPreviewMenuItemDelegate;

@interface QLPreviewMenuItem : NSMenuItem {
    QLAnimationWindowEffect *_animationWindowEffect;
    QLPreviewBubble *_previewBubble;
    BOOL _previewPanelIsSetUp;
}

@property unsigned long long deepClickPhase;
@property id<QLPreviewMenuItemDelegate> delegate;
@property long long previewStyle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void)close;
- (void)_beginPredeepAnimationAgainstPoint:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)_doPredeepAnimationWithProgress:(double)a0;
- (void)_cancelPredeepAnimation;
- (void)_completeDeepAnimation;
- (void)_releaseDeepAnimation;
- (BOOL)_wantsDeepAnimationCallbacks;
- (void)_openPreview;
- (void)_setUpForAnimationFromPoint:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)_completeOpenAnimation;
- (void)_invokePreviewPanelOpenAnimation:(id)a0;

@end
