@class NSArray;

@interface WBSRetryableCKAcceptSharesOperation : WBSRetryableCKOperation

@property (copy, nonatomic) NSArray *shareMetadatas;
@property (copy, nonatomic) id /* block */ perShareCompletionBlock;
@property (copy, nonatomic) id /* block */ acceptSharesCompletionBlock;

- (void).cxx_destruct;
- (void)_setUpOperation:(id)a0;
- (id)_makeOperation;

@end
