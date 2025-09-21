@class NSURL, NSDictionary;

@interface DCStandardMapsLink : DCMapsLink

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSDictionary *queryDictionary;

+ (char)isMapsURL:(id)a0;
+ (char)isStandardAppleMapsURL:(id)a0;
+ (char)isStandardGoogleMapsURL:(id)a0;
+ (id)mapsLinkWithURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)destinationAddress;
- (id)startAddress;
- (unsigned long long)mapType;
- (id)searchLocation;
- (id)searchQuery;
- (long long)zoomLevel;
- (char)showsTraffic;
- (unsigned long long)directionsMode;
- (id)searchNearQuery;
- (char)showsStreetView;
- (id)centerLocation;
- (char)showsBicycling;
- (char)showsTransit;
- (id)streetViewLocation;

@end
