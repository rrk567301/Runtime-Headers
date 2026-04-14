@class NSString;

@interface ISS__DAVBasicChallenge : ISS_DAVChallenge {
    NSString *authString;
}

- (void)dealloc;
- (void)finalize;
- (void)addAuthHeaderToMessage:(struct __CFHTTPMessage { } *)a0;
- (id)initWithAuthString:(id)a0;

@end
