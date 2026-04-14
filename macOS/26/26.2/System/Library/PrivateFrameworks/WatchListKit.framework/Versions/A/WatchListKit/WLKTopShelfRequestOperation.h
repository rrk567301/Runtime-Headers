@class NSArray;

@interface WLKTopShelfRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (id)init;
- (void)processResponse;
- (id)initWithQueryParameters:(id)a0 options:(long long)a1;

@end
