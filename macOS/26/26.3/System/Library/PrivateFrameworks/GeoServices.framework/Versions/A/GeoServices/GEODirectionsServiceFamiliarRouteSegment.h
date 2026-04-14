@class GEORawPathGeometry;

@interface GEODirectionsServiceFamiliarRouteSegment : NSObject

@property (nonatomic, readonly) GEORawPathGeometry *pathGeometry;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) double travelDuration;
@property (nonatomic, readonly) double length;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPathGeometry:(id)a0 transportType:(int)a1 travelDuration:(double)a2 length:(double)a3;

@end
