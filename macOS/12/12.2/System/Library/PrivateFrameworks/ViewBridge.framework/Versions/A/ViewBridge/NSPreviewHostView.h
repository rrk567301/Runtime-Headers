@class NSPreviewHostViewController;

@interface NSPreviewHostView : NSView {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
}

@property (readonly) NSPreviewHostViewController *previewHostViewController;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (oneway void)release;
- (void)viewWillMoveToWindow:(id)a0;
- (void)renewGState;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (void)__vbSuperRelease;

@end
