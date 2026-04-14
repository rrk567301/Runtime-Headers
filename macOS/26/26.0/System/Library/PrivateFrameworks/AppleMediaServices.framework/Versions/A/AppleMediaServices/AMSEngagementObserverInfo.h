@class NSSet, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface AMSEngagementObserverInfo : NSObject

@property (retain) NSMutableSet *underlyingPlacements;
@property (retain) NSMutableSet *underlyingServiceTypes;
@property (readonly) NSSet *placements;
@property (readonly) NSSet *serviceTypes;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)initWithQueue:(id)a0;
- (void)addServiceType:(id)a0;
- (void)removePlacement:(id)a0;
- (void)removeServiceType:(id)a0;
- (void)addPlacements:(id)a0;
- (void).cxx_destruct;

@end
