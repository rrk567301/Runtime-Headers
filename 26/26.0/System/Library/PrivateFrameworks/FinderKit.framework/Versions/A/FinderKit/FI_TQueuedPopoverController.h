@class NSView;

@interface FI_TQueuedPopoverController : FI_TPopoverController {
    struct shared_ptr<TThreadSafeQueue<FI_TQueuedPopoverController *>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _queue;
    struct TNSWeakPtr<NSView> { NSView *fWeakObject; } _weakView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frameInView;
    unsigned long long _preferredEdge;
}

- (id)initWithQueue:(const void *)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)aboutToTearDown;
- (void)showPopoverPriv;
- (void)closePopoverPriv;
- (id)initWithWidth:(double)a0 andQueue:(const void *)a1;
- (void)showPopoverRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 relativeView:(id)a1 preferredEdge:(unsigned long long)a2;

@end
