@class NSURL, NSDictionary;

@interface DCStandardMapsLink : DCMapsLink

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSDictionary *queryDictionary;

+ (BOOL)isMapsURL:(id)a0;
+ (BOOL)isStandardAppleMapsURL:(id)a0;
+ (BOOL)isStandardGoogleMapsURL:(id)a0;
+ (id)mapsLinkWithURL:(id)a0;

- (long long)zoomLevel;
- (id)destinationAddress;
- (unsigned long long)mapType;
- (id)searchQuery;
- (id)initWithURL:(id)a0;
- (id)startAddress;
- (void).cxx_destruct;
- (id)searchLocation;
- (BOOL)showsTraffic;
- (unsigned long long)directionsMode;
- (BOOL)showsStreetView;
- (id)searchNearQuery;
- (id)centerLocation;
- (BOOL)showsBicycling;
- (BOOL)showsTransit;
- (id)streetViewLocation;

@end
