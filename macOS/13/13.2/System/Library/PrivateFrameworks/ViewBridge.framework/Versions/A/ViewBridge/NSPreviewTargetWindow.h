@class NSPreviewTargetViewController;

@interface NSPreviewTargetWindow : NSAutolayoutJailWindow {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
}

@property (weak) NSPreviewTargetViewController *previewTargetViewController;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (unsigned long long)_validateStyleMask:(unsigned long long)a0;

- (id)retain;
- (oneway void)release;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyWindow;
- (void)becomeKeyWindow;
- (void)orderWindow:(long long)a0 relativeTo:(long long)a1;
- (void)_setEventMask:(unsigned long long)a0;
- (void)setContentViewController:(id)a0;
- (void)_setFrameCommon:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1 stashSize:(BOOL)a2;
- (void)beginSheet:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginCriticalSheet:(id)a0 completionHandler:(id /* block */)a1;
- (void)_beginWindowBlockingModalSessionForShownService:(id)a0;
- (void)_setMouseMovedEventsEnabled:(BOOL)a0;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (void)__vbSuperRelease;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
- (void)_afterSettingWindowEventMask;
- (void)superSetContentViewController:(id)a0;
- (void)_methodNotSupported:(SEL)a0;

@end
