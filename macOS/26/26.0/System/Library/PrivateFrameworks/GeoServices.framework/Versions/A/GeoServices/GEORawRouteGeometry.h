@class NSArray;

@interface GEORawRouteGeometry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *paths;
@property (readonly, nonatomic) int elevationModel;
@property (readonly, nonatomic) NSArray *rawData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRawData:(id)a0 elevationModel:(int)a1;
- (id)initWithGeoWaypointRoute:(id)a0 elevationModel:(int)a1;
- (id)initWithRawData:(id)a0;
- (id)initWithRoute:(id)a0 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a1;
- (id)initWithRoute:(id)a0 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a1 desiredElevationModel:(int)a2;
- (void)pathMatcherNoMatchRangesWithHandler:(id /* block */)a0;

@end
