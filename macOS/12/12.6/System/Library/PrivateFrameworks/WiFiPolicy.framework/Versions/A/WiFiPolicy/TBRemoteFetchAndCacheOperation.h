@class TBRemoteFetchAndCacheDataSource, NSDate;
@protocol TBFetchRequest, TBFetchResponse;

@interface TBRemoteFetchAndCacheOperation : NSOperation {
    BOOL _finished;
    NSDate *_start;
}

@property (retain, nonatomic) id<TBFetchRequest> fetchRequest;
@property (retain, nonatomic) id<TBFetchResponse> response;
@property (retain, nonatomic) TBRemoteFetchAndCacheDataSource *dataSource;

- (id)name;
- (void).cxx_destruct;
- (void)finish;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isReady;
- (id)initWithFetchRequest:(id)a0 dataSource:(id)a1;

@end
