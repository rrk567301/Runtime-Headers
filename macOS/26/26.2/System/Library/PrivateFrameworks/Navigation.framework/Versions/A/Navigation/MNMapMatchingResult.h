@class GEOComposedRoute, NSUUID, MNLocation;

@interface MNMapMatchingResult : NSObject {
    void /* unknown type, empty encoding */ routeID;
    void /* unknown type, empty encoding */ matchType;
}

@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic, readonly) NSUUID *routeID;
@property (nonatomic, readonly) MNLocation *location;

- (void).cxx_destruct;
- (id)init;

@end
