@class NSError, GEOLocation, NSObject;
@protocol OS_dispatch_queue, GEOGeographicMetadataFetcher;

@interface GEOGeographicMetadataRequester : NSObject {
    unsigned long long _type;
    GEOLocation *_location;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<GEOGeographicMetadataFetcher> _fetcher;
    NSError *_lastError;
}

@property (copy, nonatomic) id /* block */ processBlock;

+ (void)fetchPossibleTerritoriesForLocation:(id)a0 responseQueue:(id)a1 responseBlock:(id /* block */)a2;
+ (void)fetchDataForLocation:(id)a0 type:(unsigned long long)a1 responseQueue:(id)a2 responseBlock:(id /* block */)a3;

- (void).cxx_destruct;
- (void)_start;
- (id)initWithLocation:(id)a0 type:(unsigned long long)a1;
- (id)_doSimpleLookup:(id)a0 rootQuadKey:(unsigned long long)a1 error:(id *)a2;
- (id)_doTerritoryRegulatoryLookup:(id)a0 error:(id *)a1;
- (void)_fetch;

@end
