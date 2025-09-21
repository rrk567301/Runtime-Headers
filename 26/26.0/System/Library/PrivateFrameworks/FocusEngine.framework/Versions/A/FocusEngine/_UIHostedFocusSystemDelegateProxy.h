@class NSString, _UIHostedFocusSystem;
@protocol _UIHostedFocusSystemDelegate;

@interface _UIHostedFocusSystemDelegateProxy : NSObject <_UIHostedFocusSystemDelegate> {
    _UIHostedFocusSystem *_focusSystem;
}

@property (readonly, weak, nonatomic) id<_UIHostedFocusSystemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)_focusSystem:(id)a0 containsChildOfHostEnvironment:(id)a1;
- (id)_focusSystem:(id)a0 focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithFocusSystem:(id)a0 delegate:(id)a1;

@end
