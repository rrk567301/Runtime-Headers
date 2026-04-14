@class NSURL, NSDictionary;

@interface DCStandardMapsLink : DCMapsLink

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSDictionary *queryDictionary;

+ (id)mapsLinkWithURL:(id)a0;
+ (BOOL)isMapsURL:(id)a0;
+ (BOOL)isStandardAppleMapsURL:(id)a0;
+ (BOOL)isStandardGoogleMapsURL:(id)a0;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)startAddress;
- (id)destinationAddress;
- (long long)zoomLevel;
- (unsigned long long)mapType;
- (id)searchQuery;
- (id)searchLocation;
- (BOOL)showsTraffic;
- (unsigned long long)directionsMode;
- (BOOL)showsTransit;
- (BOOL)showsBicycling;
- (BOOL)showsStreetView;
- (id)streetViewLocation;
- (id)centerLocation;
- (id)searchNearQuery;

@end
