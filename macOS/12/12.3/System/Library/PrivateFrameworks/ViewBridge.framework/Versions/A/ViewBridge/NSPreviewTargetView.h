@class NSPreviewTargetViewController;

@interface NSPreviewTargetView : NSView {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
}

@property (readonly) NSPreviewTargetViewController *previewTargetViewController;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (oneway void)release;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (void)__vbSuperRelease;

@end
