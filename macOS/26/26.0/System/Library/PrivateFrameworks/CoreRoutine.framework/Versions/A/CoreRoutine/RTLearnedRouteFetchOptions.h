@class NSString, CLLocation, NSDate;

@interface RTLearnedRouteFetchOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CLLocation *originVisit;
@property (copy, nonatomic) CLLocation *destinationVisit;
@property (readonly, copy, nonatomic) NSDate *routeDate;
@property (readonly, nonatomic) int routeFetchType;
@property (readonly, nonatomic) BOOL fetchAllRouteLocations;
@property (readonly, nonatomic) int routeOriginType;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundlePath;

+ (BOOL)_isValidRouteODLocation:(id)a0 routeDestinationLocation:(id)a1 routeFetchType:(int)a2;
+ (BOOL)isValidRouteFetchType:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToFetchOptions:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 bundlePath:(id)a1 routeOriginLocation:(id)a2 routeDestinationLocation:(id)a3 routeDate:(id)a4 routeFetchType:(int)a5 fetchAllRouteLocations:(BOOL)a6 routeOriginType:(int)a7;
- (id)initWithBundleIdentifier:(id)a0 routeOriginLocation:(id)a1 routeDestinationLocation:(id)a2 routeDate:(id)a3 routeFetchType:(int)a4 fetchAllRouteLocations:(BOOL)a5 routeOriginType:(int)a6;
- (id)initWithBundlePath:(id)a0 routeOriginLocation:(id)a1 routeDestinationLocation:(id)a2 routeDate:(id)a3 routeFetchType:(int)a4 fetchAllRouteLocations:(BOOL)a5 routeOriginType:(int)a6;

@end
