@class GEOStorageRouteRequestStorage, NSString, NSData, NSNumber;

@interface MSHistoryMultiPointRoute : MSHistoryItem {
    void /* unknown type, empty encoding */ _navigationInterrupted;
    void /* unknown type, empty encoding */ _requiredCharge;
    void /* unknown type, empty encoding */ _routeProgressWaypointIndex;
    void /* unknown type, empty encoding */ _routeRequestStorage;
    void /* unknown type, empty encoding */ _sharedETAData;
    void /* unknown type, empty encoding */ _type;
    void /* unknown type, empty encoding */ _vehicleIdentifier;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) char navigationInterrupted;
@property (nonatomic, retain) NSNumber *requiredCharge;
@property (nonatomic) short routeProgressWaypointIndex;
@property (nonatomic, retain) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, copy) NSData *sharedETAData;
@property (nonatomic) short type;
@property (nonatomic, copy) NSString *vehicleIdentifier;

- (void).cxx_destruct;
- (id)initWithNavigationInterrupted:(char)a0 requiredCharge:(id)a1 routeProgressWaypointIndex:(short)a2 routeRequestStorage:(id)a3 sharedETAData:(id)a4 type:(short)a5 vehicleIdentifier:(id)a6;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(char)a2;
- (id)initWithStore:(id)a0 navigationInterrupted:(char)a1 requiredCharge:(id)a2 routeProgressWaypointIndex:(short)a3 routeRequestStorage:(id)a4 sharedETAData:(id)a5 type:(short)a6 vehicleIdentifier:(id)a7;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(char)a1;

@end
