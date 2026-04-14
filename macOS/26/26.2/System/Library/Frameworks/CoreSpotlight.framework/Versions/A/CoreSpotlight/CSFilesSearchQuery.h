@class CSFilesSearchQueryContext;

@interface CSFilesSearchQuery : CSSearchQuery

@property (retain, nonatomic) CSFilesSearchQueryContext *context;

- (void)handleCompletion:(id)a0;
- (void)handleGatherEnded;
- (void)cancel;
- (unsigned long long)foundItemCount;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)start;
- (id)initWithQueryString:(id)a0 attributes:(id)a1 scopes:(id)a2;

@end
