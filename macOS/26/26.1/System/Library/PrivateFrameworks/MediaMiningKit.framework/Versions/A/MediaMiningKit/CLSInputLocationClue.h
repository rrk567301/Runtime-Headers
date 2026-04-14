@class CLSLocationCache, CLSPlace;

@interface CLSInputLocationClue : CLSInputClue {
    CLSPlace *_place;
    CLSLocationCache *_locationCache;
}

@property (nonatomic) unsigned long long numberOfAssets;

+ (id)clueWithLocation:(id)a0 locationCache:(id)a1;
+ (id)cluesWithLocations:(id)a0 locationCache:(id)a1;

- (id)place;
- (id)region;
- (id)description;
- (id)projectedLocation;
- (void).cxx_destruct;
- (double)gpsHorizontalAccuracy;
- (id)location;
- (id)placemark;
- (void)_prepareWithProgressBlock:(id /* block */)a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })closestCoordinates;
- (BOOL)isDefinite;
- (id)regionInPlacemark;

@end
