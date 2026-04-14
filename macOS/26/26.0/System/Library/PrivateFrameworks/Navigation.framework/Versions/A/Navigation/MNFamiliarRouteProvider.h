@class NSString, GEODirectionsServiceFamiliarRoute, NSDate;

@interface MNFamiliarRouteProvider : NSObject <GEODirectionsServiceFamiliarRouteProvider> {
    long long _purpose;
    NSString *_reason;
    NSDate *_date;
    GEODirectionsServiceFamiliarRoute *_cachedFamiliarRoute;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)cachedFamiliarRoute;
- (void)directionsService:(id)a0 fetchFamiliarRouteForWaypoints:(id)a1 handler:(id /* block */)a2;
- (void)fetchFamiliarRouteWithWaypoints:(id)a0 handler:(id /* block */)a1;
- (id)initWithPurpose:(long long)a0 reason:(id)a1 date:(id)a2;

@end
