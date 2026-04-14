@class NSError, NSString, EKDirectorySearchQuery;

@interface EKDirectorySearchOperation : NSOperation {
    BOOL _isFinished;
    BOOL _isExecuting;
    NSString *_accountID;
    EKDirectorySearchQuery *_query;
    id /* block */ _resultsBlock;
    id _searchID;
}

@property (nonatomic) BOOL numberOfMatchesExceededLimit;
@property (retain, nonatomic) NSError *error;

+ (BOOL)isSupported;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)main;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)_finishWithError:(id)a0;
- (id)initWithSource:(id)a0 query:(id)a1 resultsBlock:(id /* block */)a2;
- (id)_recordTypes;
- (void)_processResults:(id)a0;
- (id)_processResults:(id)a0 class:(Class)a1;

@end
