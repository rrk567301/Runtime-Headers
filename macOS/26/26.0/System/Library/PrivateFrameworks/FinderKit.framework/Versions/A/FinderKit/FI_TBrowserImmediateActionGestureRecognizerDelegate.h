@class NSString;

@interface FI_TBrowserImmediateActionGestureRecognizerDelegate : NSObject <NSGestureRecognizerDelegatePrivate, NSImmediateActionGestureRecognizerDelegate, NSImmediateActionAnimationController> {
    struct unique_ptr<TBrowserImmediateActionGestureRecognizerHandlerBase, std::default_delete<TBrowserImmediateActionGestureRecognizerHandlerBase>> { struct TBrowserImmediateActionGestureRecognizerHandlerBase *__ptr_; } _handler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (const void *)handler;
- (void)setHandler:(void *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_gestureRecognizer:(id)a0 shouldAttemptToRecognizeWithEvent:(id)a1;
- (void)immediateActionRecognizerDidCancelAnimation:(id)a0;
- (void)immediateActionRecognizerDidCompleteAnimation:(id)a0;
- (void)immediateActionRecognizerWillBeginAnimation:(id)a0;
- (void)immediateActionRecognizerWillPrepare:(id)a0;

@end
