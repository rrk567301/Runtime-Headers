@class CLGeocoder;

@interface _ABGeocodingMapsLauncher : ABMapsLauncher

@property (readonly, nonatomic) CLGeocoder *geocoder;

- (void).cxx_destruct;
- (id)initWithLaunchRequest:(id)a0 nextLauncher:(id)a1;
- (void)launchMaps;
- (void)showPlacemarks:(id)a0;
- (void)launchMapsShowingPlacemarks:(id)a0;
- (id)launchOptionsWithDirections:(BOOL)a0;

@end
