@class NSSet, NSMutableSet;

@interface AMSEngagementObserverInfo : NSObject

@property (retain) NSMutableSet *underlyingPlacements;
@property (retain) NSMutableSet *underlyingServiceTypes;
@property (readonly) NSSet *placements;
@property (readonly) NSSet *serviceTypes;

- (id)init;
- (void).cxx_destruct;
- (void)addPlacement:(id)a0;
- (void)addServiceType:(id)a0;
- (void)removePlacement:(id)a0;
- (void)removeServiceType:(id)a0;

@end
