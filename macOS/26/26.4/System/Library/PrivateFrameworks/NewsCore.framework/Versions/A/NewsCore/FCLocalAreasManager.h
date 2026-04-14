@class FCOnce, FCAsyncSerialQueue, FCLocalAreasMapping, NSDate;
@protocol FCLocalAreasProvider, FCContentContext;

@interface FCLocalAreasManager : NSObject <FCLocalAreasManager>

@property (retain, nonatomic) FCAsyncSerialQueue *queue;
@property (retain, nonatomic) id<FCContentContext> contentContext;
@property (retain) FCLocalAreasMapping *localAreasMapping;
@property (retain) NSDate *localAreasMappingFetchDate;
@property (readonly, nonatomic) FCOnce *loadFromCacheOnce;
@property (readonly, nonatomic) id<FCLocalAreasProvider> cachedLocalAreasProvider;

- (id)initWithContentContext:(id)a0;
- (void).cxx_destruct;
- (void)_refreshWithQoS:(long long)a0 completion:(id /* block */)a1;
- (void)fetchLocalAreasProvider:(id /* block */)a0;
- (void)_loadFromCache;

@end
