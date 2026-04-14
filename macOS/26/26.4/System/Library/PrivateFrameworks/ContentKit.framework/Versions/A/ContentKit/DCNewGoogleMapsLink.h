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

- (long long)zoomLevel;
- (void)parse;
- (id)destinationAddress;
- (unsigned long long)mapType;
- (id)searchQuery;
- (id)initWithURL:(id)a0;
- (id)startAddress;
- (void).cxx_destruct;
- (id)searchLocation;
- (BOOL)showsTraffic;
- (id)dataString;
- (unsigned long long)directionsMode;
- (id)searchNearQuery;
- (BOOL)showsStreetView;
- (void)parseLatLonZoom;
- (id)centerLocation;
- (id)latLonZoomString;
- (id)mapsURLComponentAtIndex:(long long)a0;
- (void)parseLinkType;
- (void)parseMapsData;
- (BOOL)showsBicycling;
- (BOOL)showsTransit;
- (id)streetViewLocation;

@end
