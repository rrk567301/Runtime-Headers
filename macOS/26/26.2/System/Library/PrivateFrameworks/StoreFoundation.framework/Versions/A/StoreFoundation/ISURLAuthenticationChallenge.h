@class NSURLAuthenticationChallenge;

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge {
    NSURLAuthenticationChallenge *_challenge;
}

- (id)user;
- (id)password;
- (BOOL)hasPassword;
- (void).cxx_destruct;
- (id)sender;
- (long long)failureCount;
- (void)dealloc;
- (void)cancelAuthentication;
- (id)initWithAuthenticationChallenge:(id)a0;
- (void)useCredential:(id)a0;

@end
