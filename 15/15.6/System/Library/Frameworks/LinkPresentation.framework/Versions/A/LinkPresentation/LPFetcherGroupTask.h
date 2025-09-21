@class LPFetcher, LPFetcherResponse;

@interface LPFetcherGroupTask : NSObject

@property (retain, nonatomic) LPFetcher *fetcher;
@property (retain, nonatomic) LPFetcherResponse *response;
@property (nonatomic) char hasStarted;

- (void).cxx_destruct;

@end
