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

- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isProxy;
- (void).cxx_destruct;
- (void /* function */ *)methodForSelector:(SEL)a0;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithNavigationDelegate:(id)a0 block:(id /* block */)a1;

@end
