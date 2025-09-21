@class NSMutableArray;

@interface TBCentroidCalculator : NSObject

@property (retain, nonatomic) NSMutableArray *points;

- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x0; double x1; })centroid;
- (char)_validLatitudeValue:(double)a0;
- (char)_validLongitudeValue:(double)a0;
- (void)addLatitude:(double)a0 longitude:(double)a1;

@end
