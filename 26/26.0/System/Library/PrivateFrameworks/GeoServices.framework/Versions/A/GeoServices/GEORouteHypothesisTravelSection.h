@interface GEORouteHypothesisTravelSection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) double estimatedTravelTime;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTransportType:(int)a0 estimatedTravelTime:(double)a1;
- (void)updateTravelTime:(double)a0;

@end
