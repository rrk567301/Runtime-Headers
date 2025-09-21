@class NSURL, NSArray, NSString;

@interface DCNewGoogleMapsLink : DCMapsLink {
    char _showsTransit;
    char _showsBicycling;
    char _showsStreetView;
    char _showsTraffic;
    unsigned long long _mapType;
    unsigned long long _directionsMode;
    long long _zoomLevel;
}

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSArray *mapsURLComponents;
@property (retain, nonatomic) NSString *location;
@property (readonly, nonatomic) char parsed;
@property (readonly, nonatomic) int linkType;

+ (char)isMapsURL:(id)a0;
+ (id)mapsLinkWithURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)parse;
- (id)destinationAddress;
- (id)startAddress;
- (unsigned long long)mapType;
- (id)searchLocation;
- (id)searchQuery;
- (long long)zoomLevel;
- (char)showsTraffic;
- (id)dataString;
- (unsigned long long)directionsMode;
- (void)parseLatLonZoom;
- (id)searchNearQuery;
- (char)showsStreetView;
- (id)centerLocation;
- (id)latLonZoomString;
- (id)mapsURLComponentAtIndex:(long long)a0;
- (void)parseLinkType;
- (void)parseMapsData;
- (char)showsBicycling;
- (char)showsTransit;
- (id)streetViewLocation;

@end
