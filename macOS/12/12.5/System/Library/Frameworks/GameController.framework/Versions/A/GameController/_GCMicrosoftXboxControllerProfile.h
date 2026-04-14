@class NSString;
@protocol _GCPhysicalDeviceManager;

@interface _GCMicrosoftXboxControllerProfile : NSObject <_GCControllerProfile>

@property (class, readonly) id<_GCPhysicalDeviceManager> deviceManager;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)deviceManager:(id)a0 prepareLogicalDevice:(id)a1;
+ (void)deviceManager:(id)a0 willPublishPhysicalDevice:(id)a1;
+ (id)logicalDeviceControllerProductCategory:(id)a0;
+ (id)logicalDevice:(id)a0 makeControllerPhysicalInputProfileWithIdentifier:(id)a1;
+ (void)physicalDevice:(id)a0 getBatteryWithReply:(id /* block */)a1;
+ (id)physicalDeviceGetHapticCapabilities:(id)a0;
+ (id)physicalDeviceGetHapticCapabilityGraph:(id)a0;
+ (long long)logicalDeviceDeterminePhysicalInputType:(id)a0;
+ (id)logicalDeviceControllerDetailedProductCategory:(id)a0;


@end
