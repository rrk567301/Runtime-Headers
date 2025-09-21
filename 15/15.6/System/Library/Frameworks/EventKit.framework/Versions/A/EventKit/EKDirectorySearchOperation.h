@class NSError, NSString, EKDirectorySearchQuery;

@interface EKDirectorySearchOperation : NSOperation {
    char _isFinished;
    char _isExecuting;
    NSString *_accountID;
    EKDirectorySearchQuery *_query;
    id /* block */ _resultsBlock;
    id _searchID;
}

@property (nonatomic) char numberOfMatchesExceededLimit;
@property (retain, nonatomic) NSError *error;

+ (char)isSupported;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (char)isConcurrent;
- (char)isExecuting;
- (char)isFinished;
- (void)main;
- (void)_finishWithError:(id)a0;
- (void)_processResults:(id)a0;
- (id)_processResults:(id)a0 class:(Class)a1;
- (id)_recordTypes;
- (id)initWithSource:(id)a0 query:(id)a1 resultsBlock:(id /* block */)a2;

@end
