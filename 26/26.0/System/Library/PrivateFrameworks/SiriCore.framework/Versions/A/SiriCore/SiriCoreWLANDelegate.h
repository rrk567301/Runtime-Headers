@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface SiriCoreWLANDelegate : NSObject <CWEventDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
}

+ (BOOL)isWiFiEnabled;
+ (id)sharedWLANDelegate;

- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addOneShotEnabledHandler:(id /* block */)a0;

@end
