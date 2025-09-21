@class _CLPlaceInference, NSDate;

@interface CLVisit : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char hasArrivalDate;
@property (readonly, nonatomic) char hasDepartureDate;
@property (readonly, copy, nonatomic) NSDate *detectionDate;
@property (readonly, nonatomic) _CLPlaceInference *_placeInference;
@property (readonly, copy, nonatomic) NSDate *arrivalDate;
@property (readonly, copy, nonatomic) NSDate *departureDate;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) double horizontalAccuracy;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 horizontalAccuracy:(double)a1 arrivalDate:(id)a2 departureDate:(id)a3 detectionDate:(id)a4;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 horizontalAccuracy:(double)a1 arrivalDate:(id)a2 departureDate:(id)a3 detectionDate:(id)a4 placeInference:(id)a5;

@end
