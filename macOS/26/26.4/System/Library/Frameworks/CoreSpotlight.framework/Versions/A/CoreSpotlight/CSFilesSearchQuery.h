@class CSFilesSearchQueryContext;

@interface CSFilesSearchQuery : CSSearchQuery

@property (retain, nonatomic) CSFilesSearchQueryContext *context;

- (void)handleCompletion:(id)a0;
- (unsigned long long)foundItemCount;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (void)cancel;
- (void).cxx_destruct;
- (void)handleGatherEnded;
- (void)start;
- (id)initWithQueryString:(id)a0 attributes:(id)a1 scopes:(id)a2;

@end
