@interface _GCNintendoN64ControllerProfile : _GCNintendoJoyConProfile

+ (id)logicalDevice:(id)a0 makeControllerPhysicalInputProfileWithIdentifier:(id)a1;
+ (BOOL)logicalDevice:(id)a0 getSystemButtonName:(out id *)a1 sfSymbolName:(out id *)a2 needsMFiCompatibility:(BOOL *)a3;
+ (id)logicalDevice:(id)a0 makeControllerInputDescriptionWithIdentifier:(id)a1 bindings:(id)a2;
+ (id)logicalDevice:(id)a0 makeControllerPhysicalInputProfileDescriptionWithIdentifier:(id)a1 bindings:(id)a2;
+ (id)logicalDeviceControllerProductCategory:(id)a0;

@end
