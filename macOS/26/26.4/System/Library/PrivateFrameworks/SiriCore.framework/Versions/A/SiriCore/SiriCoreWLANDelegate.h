@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface SiriCoreWLANDelegate : NSObject <CWEventDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
}

+ (BOOL)isWiFiEnabled;
+ (id)sharedWLANDelegate;

- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addOneShotEnabledHandler:(id /* block */)a0;

@end
