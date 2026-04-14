@class NSURLAuthenticationChallenge;

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge {
    NSURLAuthenticationChallenge *_challenge;
}

- (id)user;
- (id)password;
- (void).cxx_destruct;
- (id)sender;
- (void)dealloc;
- (long long)failureCount;
- (BOOL)hasPassword;
- (void)cancelAuthentication;
- (id)initWithAuthenticationChallenge:(id)a0;
- (void)useCredential:(id)a0;

@end
