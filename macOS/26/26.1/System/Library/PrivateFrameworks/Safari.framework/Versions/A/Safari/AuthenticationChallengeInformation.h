@class NSURLAuthenticationChallenge;

@interface AuthenticationChallengeInformation : NSObject {
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) NSURLAuthenticationChallenge *challenge;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)callCompletionHandlerWithDisposition:(long long)a0 credential:(id)a1;
- (id)initWithAuthenticationChallenge:(id)a0 completionHandler:(id /* block */)a1;

@end
