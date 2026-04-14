@class NSURLAuthenticationChallenge;

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge {
    NSURLAuthenticationChallenge *_challenge;
}

- (id)user;
- (id)sender;
- (void)dealloc;
- (id)password;
- (long long)failureCount;
- (BOOL)hasPassword;
- (void).cxx_destruct;
- (void)cancelAuthentication;
- (id)initWithAuthenticationChallenge:(id)a0;
- (void)useCredential:(id)a0;

@end
