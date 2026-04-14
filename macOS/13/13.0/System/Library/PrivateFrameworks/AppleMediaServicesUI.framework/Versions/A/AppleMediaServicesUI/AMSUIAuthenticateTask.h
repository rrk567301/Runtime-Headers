@class NSString, NSViewController;
@protocol AMSBagProtocol;

@interface AMSUIAuthenticateTask : AMSAuthenticateTask <AMSAuthenticateTaskDelegate>

@property (retain) id<AMSBagProtocol> bag;
@property (readonly) NSViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
