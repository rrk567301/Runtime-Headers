@class NSURL, NSDictionary;

@interface DCStandardMapsLink : DCMapsLink

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSDictionary *queryDictionary;

+ (BOOL)isMapsURL:(id)a0;
+ (BOOL)isStandardAppleMapsURL:(id)a0;
+ (BOOL)isStandardGoogleMapsURL:(id)a0;
+ (id)mapsLinkWithURL:(id)a0;

- (id)startAddress;
- (long long)zoomLevel;
- (id)destinationAddress;
- (id)searchQuery;
- (unsigned long long)mapType;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)searchLocation;
- (BOOL)showsTraffic;
- (unsigned long long)directionsMode;
- (id)searchNearQuery;
- (BOOL)showsStreetView;
- (id)centerLocation;
- (BOOL)showsBicycling;
- (BOOL)showsTransit;
- (id)streetViewLocation;

@end
