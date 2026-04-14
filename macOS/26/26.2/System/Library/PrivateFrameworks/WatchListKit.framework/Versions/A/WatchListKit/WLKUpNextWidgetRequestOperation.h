@class WLKUpNextItemCollection;

@interface WLKUpNextWidgetRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) WLKUpNextItemCollection *itemCollection;

- (void).cxx_destruct;
- (id)init;
- (void)processResponse;
- (id)initWithQueryParameters:(id)a0 options:(long long)a1;

@end
