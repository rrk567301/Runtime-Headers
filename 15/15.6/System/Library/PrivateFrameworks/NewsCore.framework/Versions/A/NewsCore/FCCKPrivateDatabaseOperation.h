@class FCCKPrivateDatabase;

@interface FCCKPrivateDatabaseOperation : FCOperation

@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (nonatomic) char skipPreflight;
@property (nonatomic) long long identityLossResponse;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)maxRetries;
- (char)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (char)validateOperation;
- (void)runChildCKOperation:(id)a0 destination:(long long)a1;
- (void)setHandleIdentityLoss:(char)a0;

@end
