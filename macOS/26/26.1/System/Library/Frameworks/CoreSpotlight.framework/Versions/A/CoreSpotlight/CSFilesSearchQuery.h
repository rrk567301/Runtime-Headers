@class CSFilesSearchQueryContext;

@interface CSFilesSearchQuery : CSSearchQuery

@property (retain, nonatomic) CSFilesSearchQueryContext *context;

- (id)initWithQueryString:(id)a0 context:(id)a1;
- (unsigned long long)foundItemCount;
- (void)handleGatherEnded;
- (void)start;
- (void)cancel;
- (void)handleCompletion:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueryString:(id)a0 attributes:(id)a1 scopes:(id)a2;

@end
