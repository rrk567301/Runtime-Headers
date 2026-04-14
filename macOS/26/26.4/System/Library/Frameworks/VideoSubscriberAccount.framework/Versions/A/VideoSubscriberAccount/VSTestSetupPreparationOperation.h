@class NSOperationQueue, NSArray;

@interface VSTestSetupPreparationOperation : VSAsyncOperation

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) NSArray *errors;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;
- (void)addError:(id)a0;

@end
