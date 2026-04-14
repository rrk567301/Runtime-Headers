@class NSString;

@interface ISS__DAVTotalChallenge : ISS_DAVChallenge {
    struct __CFHTTPMessage { } *badAuthResponse;
    NSString *username;
    NSString *password;
}

- (void)dealloc;
- (void)finalize;
- (void)addAuthHeaderToMessage:(struct __CFHTTPMessage { } *)a0;
- (id)initWithBadAuthResponse:(struct __CFHTTPMessage { } *)a0 username:(id)a1 password:(id)a2;

@end
