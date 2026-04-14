@class NSString, ISS_DAVChallenge;

@interface ISS__DAVNaiveAuthStore : NSObject <DAVAuthStore> {
    NSString *baseHost;
    NSString *baseScheme;
    int basePort;
    ISS_DAVChallenge *authChallenge;
}

- (void)dealloc;
- (void)finalize;
- (id)init;
- (BOOL)session:(id)a0 addAuthHeaderToMessage:(struct __CFHTTPMessage { } *)a1;
- (void)clearAuthChallengeForSession:(id)a0;
- (BOOL)hasCredentialsForSession:(id)a0;
- (void)session:(id)a0 storeAuthChallenge:(id)a1 forURL:(id)a2;

@end
