@class NSObject;
@protocol OS_dispatch_queue;

@interface CCMaintenanceClient : NSObject <CCMaintenanceProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (id)client;
- (void).cxx_destruct;
- (void)_performNightlyMaintenanceSynchronously:(BOOL)a0 completion:(id /* block */)a1;
- (void)performNightlyMaintenanceWithCompletion:(id /* block */)a0;
- (BOOL)performNightlyMaintenanceWithError:(id *)a0;

@end
