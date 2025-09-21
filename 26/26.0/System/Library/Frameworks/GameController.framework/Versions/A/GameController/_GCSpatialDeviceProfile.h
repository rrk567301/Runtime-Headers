@class NSString;
@protocol _GCPhysicalDeviceManager;

@interface _GCSpatialDeviceProfile : NSObject <_GCControllerProfile>

@property (class, readonly) id<_GCPhysicalDeviceManager> deviceManager;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (BOOL)match:(id)a0;
+ (void)deviceManager:(id)a0 prepareLogicalDevice:(id)a1;
+ (void)deviceManager:(id)a0 willPublishPhysicalDevice:(id)a1;
+ (BOOL)logicalDevice:(id)a0 getSystemButtonName:(out id *)a1 sfSymbolName:(out id *)a2 needsMFiCompatibility:(BOOL *)a3;
+ (id)logicalDevice:(id)a0 makeControllerInputDescriptionWithIdentifier:(id)a1 bindings:(id)a2;
+ (id)logicalDevice:(id)a0 makeControllerPhysicalInputProfileDescriptionWithIdentifier:(id)a1 bindings:(id)a2;
+ (id)logicalDevice:(id)a0 makeControllerSpatialDescriptionWithIdentifier:(id)a1 forClient:(id)a2;
+ (Class)logicalDeviceControllerDescriptionClass:(id)a0;
+ (BOOL)logicalDeviceControllerIsDeviceOnly:(id)a0;
+ (id)logicalDeviceControllerProductCategory:(id)a0;
+ (id)logicalDeviceControllerUniformTypeIdentifier:(id)a0;
+ (id)physicalDeviceGetHapticCapabilities:(id)a0;
+ (id)physicalDeviceGetHapticCapabilityGraph:(id)a0;


@end
