@class TBRemoteFetchAndCacheDataSource, NSDate;
@protocol TBFetchRequest, TBFetchResponse;

@interface TBRemoteFetchAndCacheOperation : NSOperation {
    BOOL _finished;
    NSDate *_start;
}

@property (retain, nonatomic) id<TBFetchRequest> fetchRequest;
@property (retain, nonatomic) id<TBFetchResponse> response;
@property (retain, nonatomic) TBRemoteFetchAndCacheDataSource *dataSource;

- (void)finish;
- (id)initWithFetchRequest:(id)a0 dataSource:(id)a1;
- (BOOL)isReady;
- (BOOL)isFinished;
- (void)start;
- (id)name;
- (void).cxx_destruct;

@end
