@class NSString, AMSUIWebClientContext, NSURL, ASWebAuthenticationSessionCallback;

@interface AMSUIWebOpenAuthenticationSession : AMSUIWebAction <ASWebAuthenticationPresentationContextProviding, AMSUIWebActionRunnable>

@property (retain) NSURL *URL;
@property (retain) ASWebAuthenticationSessionCallback *callback;
@property BOOL ephemeral;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) AMSUIWebClientContext *context;

- (void).cxx_destruct;
- (id)presentationAnchorForWebAuthenticationSession:(id)a0;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
