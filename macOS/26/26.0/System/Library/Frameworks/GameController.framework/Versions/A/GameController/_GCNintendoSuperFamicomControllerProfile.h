@interface _GCNintendoSuperFamicomControllerProfile : _GCNintendoJoyConProfile

+ (BOOL)logicalDevice:(id)a0 getSystemButtonName:(out id *)a1 sfSymbolName:(out id *)a2 needsMFiCompatibility:(BOOL *)a3;
+ (id)logicalDevice:(id)a0 makeControllerInputDescriptionWithIdentifier:(id)a1 bindings:(id)a2;
+ (id)logicalDevice:(id)a0 makeControllerPhysicalInputProfileDescriptionWithIdentifier:(id)a1 bindings:(id)a2;
+ (id)logicalDeviceControllerProductCategory:(id)a0;

@end
