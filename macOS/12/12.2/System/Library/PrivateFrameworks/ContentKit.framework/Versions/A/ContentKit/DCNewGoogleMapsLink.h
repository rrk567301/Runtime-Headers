@class NSURL, NSArray, NSString;

@interface DCNewGoogleMapsLink : DCMapsLink {
    BOOL _showsTransit;
    BOOL _showsBicycling;
    BOOL _showsStreetView;
    BOOL _showsTraffic;
    unsigned long long _mapType;
    unsigned long long _directionsMode;
    long long _zoomLevel;
}

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSArray *mapsURLComponents;
@property (retain, nonatomic) NSString *location;
@property (readonly, nonatomic) BOOL parsed;
@property (readonly, nonatomic) int linkType;

+ (BOOL)isMapsURL:(id)a0;
+ (id)mapsLinkWithURL:(id)a0;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)parse;
- (id)startAddress;
- (id)destinationAddress;
- (long long)zoomLevel;
- (unsigned long long)mapType;
- (id)searchQuery;
- (id)searchLocation;
- (BOOL)showsTraffic;
- (id)dataString;
- (unsigned long long)directionsMode;
- (id)searchNearQuery;
- (id)centerLocation;
- (BOOL)showsTransit;
- (BOOL)showsStreetView;
- (BOOL)showsBicycling;
- (id)streetViewLocation;
- (id)mapsURLComponentAtIndex:(long long)a0;
- (void)parseLinkType;
- (id)latLonZoomString;
- (void)parseLatLonZoom;
- (void)parseMapsData;

@end
