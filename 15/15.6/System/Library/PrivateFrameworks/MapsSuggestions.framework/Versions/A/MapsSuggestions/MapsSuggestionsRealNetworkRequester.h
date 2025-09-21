@class NSString;

@interface MapsSuggestionsRealNetworkRequester : NSObject <MapsSuggestionsNetworkRequester>

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)ETAFromWaypoint:(id)a0 toWaypoint:(id)a1 transportType:(int)a2 automobileOptions:(id)a3 completion:(id /* block */)a4;
- (char)canonicalLocalSearchPostalAddress:(id)a0 completion:(id /* block */)a1;
- (char)composedWaypointForAddressString:(id)a0 completion:(id /* block */)a1;
- (char)composedWaypointForCurrentLocation:(id)a0 completion:(id /* block */)a1;
- (char)composedWaypointForLocation:(id)a0 completion:(id /* block */)a1;
- (char)composedWaypointForLocation:(id)a0 mapItem:(id)a1 completion:(id /* block */)a2;
- (char)composedWaypointForMapItem:(id)a0 completion:(id /* block */)a1;
- (char)forwardGeocodeAddressString:(id)a0 completion:(id /* block */)a1;
- (char)forwardGeocodePostalAddress:(id)a0 completion:(id /* block */)a1;
- (id)initFromResourceDepot:(id)a0;
- (char)placeForMuid:(id)a0 completion:(id /* block */)a1;
- (char)placeRefinementForAddress:(id)a0 completion:(id /* block */)a1;
- (char)placeRefinementForCoordinate:(struct { double x0; double x1; })a0 address:(id)a1 completion:(id /* block */)a2;
- (char)resolveMapItemHandleData:(id)a0 completion:(id /* block */)a1;
- (char)reverseGeocodeCoordinate:(struct { double x0; double x1; })a0 completion:(id /* block */)a1;
- (char)reverseGeocodeCoordinate:(struct { double x0; double x1; })a0 shiftIfNeeded:(char)a1 completion:(id /* block */)a2;
- (char)routeForWaypoints:(id)a0 currentLocation:(id)a1 routeAttributes:(id)a2 feedback:(id)a3 completion:(id /* block */)a4;
- (char)searchPOIWithName:(id)a0 ofPOICategory:(id)a1 withinVenue:(id)a2 maxResults:(unsigned long long)a3 completion:(id /* block */)a4;
- (char)searchString:(id)a0 maxResults:(unsigned int)a1 completion:(id /* block */)a2;
- (char)searchWithAirportCode:(id)a0 terminal:(id)a1 gate:(id)a2 completion:(id /* block */)a3;

@end
