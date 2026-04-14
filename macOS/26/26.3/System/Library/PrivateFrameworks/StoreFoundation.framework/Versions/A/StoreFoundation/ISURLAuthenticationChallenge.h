@class NSURLAuthenticationChallenge;

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge {
    NSURLAuthenticationChallenge *_challenge;
}

- (id)user;
- (id)sender;
- (id)password;
- (BOOL)hasPassword;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)failureCount;
- (void)cancelAuthentication;
- (id)initWithAuthenticationChallenge:(id)a0;
- (void)useCredential:(id)a0;

@end
