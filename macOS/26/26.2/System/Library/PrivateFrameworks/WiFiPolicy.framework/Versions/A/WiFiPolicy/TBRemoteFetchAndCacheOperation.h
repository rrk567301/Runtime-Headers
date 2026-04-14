@class TBRemoteFetchAndCacheDataSource, NSDate;
@protocol TBFetchRequest, TBFetchResponse;

@interface TBRemoteFetchAndCacheOperation : NSOperation {
    BOOL _finished;
    NSDate *_start;
}

@property (retain, nonatomic) id<TBFetchRequest> fetchRequest;
@property (retain, nonatomic) id<TBFetchResponse> response;
@property (retain, nonatomic) TBRemoteFetchAndCacheDataSource *dataSource;

- (BOOL)isFinished;
- (BOOL)isReady;
- (void)finish;
- (void).cxx_destruct;
- (void)start;
- (id)name;
- (id)initWithFetchRequest:(id)a0 dataSource:(id)a1;

@end
