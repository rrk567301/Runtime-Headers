@class NSUUID;

@interface GEOCoordinateArraySupportPoint : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } routeCoordinate;
@property (nonatomic) unsigned long long index;
@property (nonatomic) long long roadID;
@property (nonatomic) double heading;
@property (nonatomic) char isUTurn;
@property (nonatomic) int legacyRoadClass;
@property (nonatomic) int legacyFormOfWay;
@property (retain, nonatomic) NSUUID *anchorPointID;
@property (nonatomic) long long matchType;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;

@end
