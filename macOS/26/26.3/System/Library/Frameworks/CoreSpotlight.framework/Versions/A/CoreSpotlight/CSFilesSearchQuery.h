@class CSFilesSearchQueryContext;

@interface CSFilesSearchQuery : CSSearchQuery

@property (retain, nonatomic) CSFilesSearchQueryContext *context;

- (void)handleCompletion:(id)a0;
- (unsigned long long)foundItemCount;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (void)handleGatherEnded;
- (void)cancel;
- (void)start;
- (void).cxx_destruct;
- (id)initWithQueryString:(id)a0 attributes:(id)a1 scopes:(id)a2;

@end
