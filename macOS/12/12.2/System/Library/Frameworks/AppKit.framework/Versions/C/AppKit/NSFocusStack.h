@interface NSFocusStack : NSObject {
    struct __CFArray { } *_stack;
    long long _topIndex;
    struct { unsigned char _noAltHandler : 1; unsigned int _reserved : 31; } _fsFlags;
}

+ (id)currentFocusStack;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)focusView:(id)a0 inWindow:(id)a1;
- (void)unfocusView:(id)a0;
- (id)focusedView;
- (void)popTopView;
- (void)fixInvalidatedFocusForFocusView;
- (void)performWithFocusView:(id)a0 inWindow:(id)a1 usingBlock:(id /* block */)a2;
- (void)removeFreedView:(id)a0;
- (void)removeFreedWindow:(id)a0;
- (BOOL)isWindowInFocusStack:(id)a0;
- (void)invalidateFocus:(id)a0;

@end
