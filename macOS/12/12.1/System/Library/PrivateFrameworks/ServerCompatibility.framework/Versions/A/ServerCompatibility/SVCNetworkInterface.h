@interface SVCNetworkInterface : NSObject

+ (id)reservedNetworkInterfaceBSDNamesWithDynamicStoreRef:(struct __SCDynamicStore { } *)a0;
+ (id)reservedNetworkInterfaceBSDNamesWithNetworkSharingSettings:(id)a0;
+ (id)allNetworkInterfaceBSDNames;
+ (id)interfaceBSDNameForBridgeBSDName:(id)a0;
+ (id)reservedNetworkInterfaceBSDNames;
+ (struct __SCNetworkInterface { } *)SCNetworkInterfaceCreateWithBSDName:(id)a0;
+ (BOOL)SCNetworkInterfaceIsPhysicalEthernet:(struct __SCNetworkInterface { } *)a0;

@end
