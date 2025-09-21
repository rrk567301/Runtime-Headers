@class NSString, EKDirectorySearchResultSet, EKDirectoryGroup;

@interface EKGroupExpansionOperation : NSOperation {
    char _isFinished;
    char _isExecuting;
    NSString *_accountID;
    EKDirectoryGroup *_group;
    id /* block */ _completionBlock;
    EKDirectorySearchResultSet *_resultsSet;
}

- (void).cxx_destruct;
- (void)start;
- (char)isConcurrent;
- (char)isExecuting;
- (char)isFinished;
- (void)main;
- (void)_finishWithError:(id)a0;
- (void)_processResults:(id)a0;
- (id)_processResults:(id)a0 class:(Class)a1;
- (id)initWithSource:(id)a0 group:(id)a1 completionBlock:(id /* block */)a2;

@end
