@class NSArray, FCCloudContext, NSString;

@interface FCTagHeadlinesOperation : FCOperation

@property (copy) NSArray *resultHeadlines;
@property (retain, nonatomic) FCCloudContext *context;
@property (copy, nonatomic) NSString *tagID;
@property (nonatomic) unsigned long long maxHeadlinesCount;
@property (copy) id /* block */ fetchCompletionHandler;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;

@end
