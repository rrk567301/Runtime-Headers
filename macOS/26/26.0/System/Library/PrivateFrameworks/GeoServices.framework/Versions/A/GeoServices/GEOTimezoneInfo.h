@class NSString, NSTimeZone;

@interface GEOTimezoneInfo : NSObject {
    struct { double latitude; double longitude; } _originCoordinate;
    struct { double latitude; double longitude; } _nearestEdgeCoordinate;
    double _distance;
    NSTimeZone *_timeZone;
}

@property (readonly, nonatomic) NSString *ianaTimeZoneName;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) BOOL isWithinRadius;
@property (readonly, nonatomic) struct { double x0; double x1; } nearestEdgeCoordinate;
@property (readonly, nonatomic) double distanceToNearestEdgeCoordinate;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)canCalculateDistance;
- (id)initWithIANAIdentifier:(id)a0;
- (id)initWithUnsafeTimezoneData:(id)a0 originCoordinate:(struct { double x0; double x1; })a1 nearestEdgeCoordinate:(struct { double x0; double x1; })a2 isWithinRadius:(BOOL)a3 nameDB:(id)a4;
- (void)setNearestEdgeCoordinate:(struct { double x0; double x1; })a0;

@end
