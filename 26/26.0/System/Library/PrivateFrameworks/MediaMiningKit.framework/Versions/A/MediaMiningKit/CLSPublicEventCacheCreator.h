@class CLSPublicEventCache, CPAnalytics;
@protocol CLSPublicEventServiceClientProtocol;

@interface CLSPublicEventCacheCreator : NSObject {
    CPAnalytics *_analytics;
}

@property (readonly, nonatomic) CLSPublicEventCache *cache;
@property (readonly, nonatomic) double queryRadius;
@property (readonly, nonatomic) id<CLSPublicEventServiceClientProtocol> serviceClient;
@property (nonatomic) BOOL simulatesTimeout;
@property (readonly, nonatomic) unsigned long long maximumBatchSize;

- (void).cxx_destruct;
- (id)_queryEventsForTimeLocationTuples:(id)a0 invalidationTokens:(out id *)a1 queryContext:(id)a2 analyticsPayload:(id)a3 progressBlock:(id /* block */)a4 error:(id *)a5;
- (id)createCacheForTimeLocationTuples:(id)a0 cachingOptions:(id)a1 progressBlock:(id /* block */)a2 error:(id *)a3;
- (id)initWithCache:(id)a0 queryRadius:(double)a1;
- (id)initWithCache:(id)a0 queryRadius:(double)a1 analytics:(id)a2;

@end
