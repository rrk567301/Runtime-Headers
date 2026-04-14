@class NSString, NSMutableDictionary, NSMutableSet, _GCNintendoJoyConDevice, NSObject;
@protocol GCPhysicalDeviceRegistry, NSSecureCoding, OS_dispatch_queue, NSCopying, GCLogicalDeviceRegistry, NSObject;

@interface _GCNintendoJoyConDeviceManager : NSObject <_GCPhysicalDeviceManager, _GCLogicalDeviceManager> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_claimedServices;
    NSMutableDictionary *_physicalDevices;
    _GCNintendoJoyConDevice *_pendingJoyCon;
    NSMutableSet *_fusionGestureDevices;
}

@property (weak) id<GCPhysicalDeviceRegistry, GCLogicalDeviceRegistry> deviceRegistry;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)matchHIDDevice:(id)a0;
- (void)claimHIDDevice:(id)a0;
- (void)relinquishHIDDevice:(id)a0;
- (BOOL)acceptDriverConnection:(id)a0 forHIDDevice:(id)a1;
- (BOOL)acceptFilterConnection:(id)a0 forHIDDevice:(id)a1;
- (id)makeDeviceWithConfiguration:(id)a0 dependencies:(id)a1;
- (void)activateLogicalDevice:(id)a0;
- (void)deactivateLogicalDevice:(id)a0;
- (void)_onqueue_registerFusionConfigurationWithLeftDevice:(id)a0 rightDevice:(id)a1;
- (void)_onqueue_registerDefaultConfigurationForDevice:(id)a0;
- (void)_onqueue_tryRegisteringFusionConfigurationWithDevice:(id)a0;
- (void)_onqueue_registerDefaultConfigurationsForDevice:(id)a0;
- (void)device:(id)a0 fusionGestureActive:(BOOL)a1;

@end
