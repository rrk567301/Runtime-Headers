@interface _GCNintendoProControllerProfile : _GCNintendoJoyConProfile

+ (id)logicalDevice:(id)a0 makeControllerPhysicalInputProfileWithIdentifier:(id)a1;
+ (id)logicalDevice:(id)a0 makeControllerInputDescriptionWithIdentifier:(id)a1 bindings:(id)a2;
+ (id)logicalDevice:(id)a0 makeControllerMotionWithIdentifier:(id)a1;
+ (id)logicalDeviceControllerProductCategory:(id)a0;
+ (void)physicalDevice:(id)a0 getSensorsEnabledWithReply:(id /* block */)a1;
+ (void)physicalDevice:(id)a0 setSensorsActive:(char)a1;
+ (id)physicalDeviceGetHapticCapabilities:(id)a0;
+ (id)physicalDeviceGetHapticCapabilityGraph:(id)a0;
+ (char)physicalDeviceSupportsMotion:(id)a0;

@end
