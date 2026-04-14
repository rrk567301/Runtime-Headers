@class CSSearchQuery;

@interface CSUnifiedSearchQuery : CSFilesSearchQuery

@property (retain, nonatomic) CSSearchQuery *csQuery;

- (void)setFoundItemsHandler:(id /* block */)a0;
- (void)start;
- (void)cancel;
- (void)setCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithQueryString:(id)a0 attributes:(id)a1 scopes:(id)a2;

@end
