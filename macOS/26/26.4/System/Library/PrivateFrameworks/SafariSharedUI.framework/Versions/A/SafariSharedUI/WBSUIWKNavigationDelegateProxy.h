@class NSString, NSObject;
@protocol WKNavigationDelegate;

@interface WBSUIWKNavigationDelegateProxy : NSObject <WKNavigationDelegate> {
    NSObject<WKNavigationDelegate> *_delegate;
    id /* block */ _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isProxy;
- (BOOL)conformsToProtocol:(id)a0;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)forwardInvocation:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (BOOL)isMemberOfClass:(Class)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void /* function */ *)methodForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithNavigationDelegate:(id)a0 block:(id /* block */)a1;

@end
