@class NSArray;

@interface CalDAVRefreshDelegateListQueueableOperation : CalDAVQueueableOperation {
    NSArray *_delegateInfos;
    BOOL _serverSupportsDelegates;
}

@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;
- (void)refresh;
- (void)performOperation;
- (void)finishOperation;
- (id)readableDescription;
- (void)refreshWithExceptionHandling;
- (BOOL)serverSupportsDelegates;

@end
