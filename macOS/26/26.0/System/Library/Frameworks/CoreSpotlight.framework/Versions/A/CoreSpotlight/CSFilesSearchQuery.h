@class CSFilesSearchQueryContext;

@interface CSFilesSearchQuery : CSSearchQuery

@property (retain, nonatomic) CSFilesSearchQueryContext *context;

- (void)start;
- (unsigned long long)foundItemCount;
- (void)handleCompletion:(id)a0;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (void)handleGatherEnded;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithQueryString:(id)a0 attributes:(id)a1 scopes:(id)a2;

@end
