@class NSUUID;

@interface MNRouteDivergenceResult : NSObject

@property (retain, nonatomic) NSUUID *routeID;
@property (nonatomic) unsigned long long resultType;
@property (nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } routeCoordinate;
@property (nonatomic) struct { double latitude; double longitude; double altitude; } locationCoordinate;

- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
