@class NSURLAuthenticationChallenge;

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge {
    NSURLAuthenticationChallenge *_challenge;
}

- (id)password;
- (id)sender;
- (id)user;
- (long long)failureCount;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)hasPassword;
- (void)cancelAuthentication;
- (id)initWithAuthenticationChallenge:(id)a0;
- (void)useCredential:(id)a0;

@end
