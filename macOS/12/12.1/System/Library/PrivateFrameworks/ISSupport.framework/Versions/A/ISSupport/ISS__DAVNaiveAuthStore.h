@class NSString, ISS_DAVChallenge;

@interface ISS__DAVNaiveAuthStore : NSObject <DAVAuthStore> {
    NSString *baseHost;
    NSString *baseScheme;
    int basePort;
    ISS_DAVChallenge *authChallenge;
}

- (void)finalize;
- (void)dealloc;
- (id)init;
- (BOOL)hasCredentialsForSession:(id)a0;
- (BOOL)session:(id)a0 addAuthHeaderToMessage:(struct __CFHTTPMessage { } *)a1;
- (void)session:(id)a0 storeAuthChallenge:(id)a1 forURL:(id)a2;
- (void)clearAuthChallengeForSession:(id)a0;

@end
