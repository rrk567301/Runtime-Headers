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

- (void)parse;
- (id)destinationAddress;
- (long long)zoomLevel;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)mapType;
- (id)startAddress;
- (id)searchQuery;
- (id)searchLocation;
- (BOOL)showsTraffic;
- (id)dataString;
- (unsigned long long)directionsMode;
- (void)parseLatLonZoom;
- (BOOL)showsStreetView;
- (id)searchNearQuery;
- (id)centerLocation;
- (id)latLonZoomString;
- (id)mapsURLComponentAtIndex:(long long)a0;
- (void)parseLinkType;
- (void)parseMapsData;
- (BOOL)showsBicycling;
- (BOOL)showsTransit;
- (id)streetViewLocation;

@end
