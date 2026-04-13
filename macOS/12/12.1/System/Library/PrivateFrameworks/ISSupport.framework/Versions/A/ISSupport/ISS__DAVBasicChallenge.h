@class NSString;

@interface ISS__DAVBasicChallenge : ISS_DAVChallenge {
    NSString *authString;
}

- (void)finalize;
- (void)dealloc;
- (void)addAuthHeaderToMessage:(struct __CFHTTPMessage { } *)a0;
- (id)initWithAuthString:(id)a0;

@end
