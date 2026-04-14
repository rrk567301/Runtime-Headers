@class NSString, NSWindow;

@interface PKWebAuthenticationSession : NSObject <ASWebAuthenticationPresentationContextProviding>

@property (retain, nonatomic) NSWindow *presentationWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)presentationAnchorForWebAuthenticationSession:(id)a0;
- (void)performAuthenticationWithURL:(id)a0 callbackScheme:(id)a1 completion:(id /* block */)a2;

@end
