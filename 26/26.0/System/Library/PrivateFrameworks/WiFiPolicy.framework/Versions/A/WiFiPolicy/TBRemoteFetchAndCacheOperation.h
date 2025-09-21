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
- (void)start;
- (BOOL)isReady;
- (void)finish;
- (id)name;
- (id)initWithFetchRequest:(id)a0 dataSource:(id)a1;
- (void).cxx_destruct;

@end
