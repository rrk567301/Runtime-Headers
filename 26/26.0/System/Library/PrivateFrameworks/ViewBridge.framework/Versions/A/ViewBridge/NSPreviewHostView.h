@class NSPreviewHostViewController;

@interface NSPreviewHostView : NSView {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
}

@property (readonly) NSPreviewHostViewController *previewHostViewController;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)viewWillMoveToWindow:(id)a0;
- (id)retain;
- (void)viewDidMoveToWindow;
- (oneway void)release;
- (void)renewGState;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (void)__vbSuperRelease;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;

@end
