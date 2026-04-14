@class NSURLAuthenticationChallenge;

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge {
    NSURLAuthenticationChallenge *_challenge;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)user;
- (id)password;
- (id)sender;
- (BOOL)hasPassword;
- (long long)failureCount;
- (void)cancelAuthentication;
- (void)useCredential:(id)a0;
- (id)initWithAuthenticationChallenge:(id)a0;

@end
