@class NSOperationQueue, NSArray, NSError;

@interface VSLoadAllAppIconsOperation : VSAsyncOperation

@property (nonatomic) BOOL shouldPrecomposeIcon;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) NSArray *appDescriptions;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ resultCompletionBlock;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (id)initWithApps:(id)a0 shouldPrecomposeIcon:(BOOL)a1;

@end
