@class NSString, BSRBSService, NSDictionary, NSMutableSet;
@protocol BSInvalidatable, BSServiceConnectionEndpointMonitorDelegate;

@interface BSServiceConnectionEndpointMonitor : NSObject <BSServiceMonitor, BSInvalidatable> {
    BSRBSService *_RBSService;
    id<BSServiceConnectionEndpointMonitorDelegate> _lock_delegate;
    NSDictionary *_lock_endpointToEnvironments;
    NSMutableSet *_lock_serialCallOut_endpoints;
    id<BSInvalidatable> _registrationLock_assertion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _registrationLock;
    BOOL _lock_activated;
    BOOL _lock_invalidated;
}

@property (readonly, copy, nonatomic) NSString *service;
@property (retain, nonatomic) id<BSServiceConnectionEndpointMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)monitorForService:(id)a0;

- (void)dealloc;
- (void)invalidate;
- (id)init;
- (id)endpointsForEnvironment:(id)a0;
- (void)serialCallOut_didUpdateEndpointEnvironments:(id)a0;
- (void)activate;
- (void).cxx_destruct;

@end
