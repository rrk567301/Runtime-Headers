@class NSArray, WLKSportsFavoriteResponse;

@interface WLKSportsFavoriteRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) unsigned long long action;
@property (readonly, copy, nonatomic) NSArray *ids;
@property (retain, nonatomic) WLKSportsFavoriteResponse *response;

- (void).cxx_destruct;
- (void)processResponse;
- (void)prepareURLRequest:(id /* block */)a0;
- (id)initWithAction:(unsigned long long)a0 ids:(id)a1;
- (id)_preparePOSTQueryOnlyWithRequest:(id)a0;

@end
