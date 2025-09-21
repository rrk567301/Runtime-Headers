@class NSString, NSURLAuthenticationChallenge;

@interface CoreDAVURLAuthenticationChallengeProxy : NSObject <NSURLAuthenticationChallengeSender> {
    NSURLAuthenticationChallenge *_proxiedChallenge;
    id /* block */ _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelAuthenticationChallenge:(id)a0;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)a0;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)a0;
- (void)useCredential:(id)a0 forAuthenticationChallenge:(id)a1;
- (id)sender;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithChallenge:(id)a0 completionHandler:(id /* block */)a1;

@end
