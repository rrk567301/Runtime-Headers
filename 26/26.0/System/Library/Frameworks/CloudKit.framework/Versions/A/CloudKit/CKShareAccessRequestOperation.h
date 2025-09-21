@class NSArray;

@interface CKShareAccessRequestOperation : CKShareRequestAccessOperation

@property (copy, nonatomic) NSArray *shareURLs;
@property (copy, nonatomic) id /* block */ perShareAccessRequestCompletionBlock;
@property (copy, nonatomic) id /* block */ shareAccessRequestCompletionBlock;

- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithShareURLs:(id)a0;
- (void)setShareAccessRequestCompletionBlockIVar:(id /* block */)a0;

@end
