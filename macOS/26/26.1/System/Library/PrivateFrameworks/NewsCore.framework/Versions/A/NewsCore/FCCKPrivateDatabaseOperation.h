@class FCCKPrivateDatabase;

@interface FCCKPrivateDatabaseOperation : FCOperation

@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (nonatomic) BOOL skipPreflight;
@property (nonatomic) long long identityLossResponse;

- (unsigned long long)maxRetries;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (id)init;
- (void)runChildCKOperation:(id)a0 destination:(long long)a1;
- (void)setHandleIdentityLoss:(BOOL)a0;

@end
