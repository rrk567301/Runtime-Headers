@class HAPAccessoryServer, HMFTimer, HMFObject;

@interface HMDDeferredAccessorySetupHandler : HMFObject

@property (readonly) HAPAccessoryServer *server;
@property (readonly) HMFTimer *timer;
@property (readonly) id /* block */ callback;
@property (readonly) HMFObject *context;

- (void).cxx_destruct;
- (id)initWithServer:(id)a0 timer:(id)a1 callback:(id /* block */)a2 context:(id)a3;

@end
