@class NSArray, GEOTransitStep;
@protocol GEOTransitArtworkDataSource, GEOTransitRoutingIncidentMessage;

@interface GEOComposedTransitWalkingRouteStep : GEOComposedWalkingRouteStep {
    GEOTransitStep *_transitStep;
    struct { double latitude; double longitude; } _startCoordinate;
    struct { double latitude; double longitude; } _endCoordinate;
    NSArray *_steppingArtwork;
    NSArray *_routeDetailsPrimaryArtwork;
    id<GEOTransitArtworkDataSource> _routeDetailsSecondaryArtwork;
}

@property (readonly, nonatomic) id<GEOTransitRoutingIncidentMessage> steppingIncidentMessage;
@property (readonly, nonatomic) id<GEOTransitRoutingIncidentMessage> routeDetailsIncidentMessage;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (double)distance;
- (id)instructions;
- (id)transitStep;
- (struct { double x0; double x1; double x2; })startGeoCoordinate;
- (struct { double x0; double x1; double x2; })endGeoCoordinate;
- (BOOL)isArrivalStep;
- (id)routeDetailsPrimaryArtwork;
- (id)routeDetailsSecondaryArtwork;
- (id)steppingArtwork;
- (id)initWithComposedRoute:(id)a0 decoderData:(id)a1 transitStep:(id)a2 stepIndex:(unsigned long long)a3 geoStep:(id)a4 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 maneuverPointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6;
- (id)initWithComposedRoute:(id)a0 decoderData:(id)a1 transitStep:(id)a2 stepIndex:(unsigned long long)a3 startCoordinate:(struct { double x0; double x1; })a4 endCoordinate:(struct { double x0; double x1; })a5 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6;
- (void)_commonInitWithDecoderData:(id)a0;

@end
