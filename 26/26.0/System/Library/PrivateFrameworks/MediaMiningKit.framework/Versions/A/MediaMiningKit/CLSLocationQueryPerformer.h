@class NSArray, CLSLocationCache, NSString, NSObject;
@protocol OS_os_log, GEOMapServiceTicket;

@interface CLSLocationQueryPerformer : NSObject <CLSQueryPerformerProtocol>

@property (readonly, nonatomic) NSArray *geoLocations;
@property (readonly, nonatomic) id<GEOMapServiceTicket> ticket;
@property (readonly, copy, nonatomic) NSArray *regions;
@property (readonly, nonatomic) BOOL isCancelled;
@property (nonatomic) struct { unsigned long long numberOfLocations; unsigned long long numberOfResolvedLocations; unsigned long long numberOfUnneededLocations; unsigned long long numberOfRequests; unsigned long long batchSize; } statistics;
@property (nonatomic) double precision;
@property (nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (readonly, nonatomic) CLSLocationCache *locationCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultPrecision;
+ (unsigned long long)numberOfRegionsPerBatch;
+ (id)queryWithTemplate:(id)a0 forRegions:(id)a1;

- (void)submitWithHandler:(id /* block */)a0;
- (void)cancel;
- (id)initWithLocationCache:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)cacheItems:(id)a0;
- (id)initWithRegions:(id)a0 precision:(double)a1 locationCache:(id)a2;
- (void)logGeoLookupCounterAndDurationWithLookupDuration:(id)a0;
- (void)logGeoLookupFailureResult;
- (BOOL)shouldQueryItemsForRegion:(id)a0 selectedRegions:(id)a1;

@end
