@class NSString;
@protocol _GCPhysicalDeviceManager;

@interface _GCSonyPSVR2SenseControllerProfile : NSObject <_GCControllerProfile>

@property (class, readonly) id<_GCPhysicalDeviceManager> deviceManager;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)device:(id)a0 fuseWithDevice:(id *)a1 forClient:(id)a2;
+ (void)deviceManager:(id)a0 prepareLogicalDevice:(id)a1;
+ (void)deviceManager:(id)a0 willPublishPhysicalDevice:(id)a1;
+ (BOOL)logicalDevice:(id)a0 getSystemButtonName:(out id *)a1 sfSymbolName:(out id *)a2 needsMFiCompatibility:(BOOL *)a3;
+ (id)logicalDevice:(id)a0 makeControllerInputDescriptionWithIdentifier:(id)a1 bindings:(id)a2 forClient:(id)a3;
+ (id)logicalDevice:(id)a0 makeControllerMotionWithIdentifier:(id)a1;
+ (id)logicalDevice:(id)a0 makeControllerPhysicalInputProfileDescriptionWithIdentifier:(id)a1 bindings:(id)a2 forClient:(id)a3;
+ (id)logicalDevice:(id)a0 makeControllerSpatialDescriptionWithIdentifier:(id)a1 forClient:(id)a2;
+ (BOOL)logicalDevice:(id)a0 shouldMakeControllerForClient:(id)a1;
+ (id)logicalDeviceControllerProductCategory:(id)a0;
+ (id)logicalDeviceControllerProductCategory:(id)a0 forClient:(id)a1;
+ (id)logicalDeviceControllerVendorName:(id)a0 forClient:(id)a1;
+ (void)physicalDevice:(id)a0 getBatteryWithReply:(id /* block */)a1;
+ (void)physicalDevice:(id)a0 getSensorsEnabledWithReply:(id /* block */)a1;
+ (void)physicalDevice:(id)a0 setSensorsActive:(BOOL)a1;
+ (id)physicalDeviceGetHapticCapabilities:(id)a0;
+ (id)physicalDeviceGetHapticCapabilityGraph:(id)a0;
+ (unsigned char)physicalDeviceShouldDisplayAlertAtBatteryLevel:(id)a0;
+ (BOOL)physicalDeviceShouldPublishPowerSource:(id)a0;
+ (BOOL)physicalDeviceSupportsMotion:(id)a0;


@end
