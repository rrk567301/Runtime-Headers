@class _NSTextFinderImpl, NSMapTable, NSView, _NSFindIndicatorOverlayView, NSMutableArray, NSWindow;

@interface NSTextFinderIndicatorManager : NSObject {
    NSMapTable *_findIndicators;
    _NSTextFinderImpl *_textFinderImpl;
    char _isVisible;
    char _updating;
    NSView *_contentView;
    NSWindow *_overlayWindow;
    _NSFindIndicatorOverlayView *_overlayView;
    unsigned long long _disabledScreenUpdatesToken;
    char _needsUpdate;
    char *_updateCancel;
    char *_pulseCancel;
    NSMutableArray *_indicatorsToPulse;
}

+ (id)_textRects:(id)a0 inWebViewCoordinateSpace:(id)a1;

- (void)dealloc;
- (void)cancel;
- (void)setNeedsUpdate:(char)a0;
- (id)_textFinderImpl;
- (void)_containerDidChange;
- (id)_contentView;
- (void)_delayedUpdate;
- (void)_enumerateViewsAndRectsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBlock:(id /* block */)a1;
- (void)_flushUpdate;
- (void)_hideAnimate:(char)a0;
- (id)_parentWindow;
- (void)_scheduleDelayedUpdate;
- (void)_showAnimate:(char)a0;
- (id)initWithTextFinderImpl:(id)a0;
- (char)isVisible;
- (char)needsUpdate;
- (void)pulse;
- (void)setIsVisible:(char)a0 animate:(char)a1;

@end
