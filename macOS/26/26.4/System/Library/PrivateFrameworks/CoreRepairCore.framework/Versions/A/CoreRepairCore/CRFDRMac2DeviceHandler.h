@interface CRFDRMac2DeviceHandler : CRFDRMac1DeviceHandler

+ (id)getDeviceHandlerForProductType:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getClaimDataClassesAndInstancesWithPartSPC:(id)a0 withError:(id *)a1;
- (id)getExcludedPropertiesForFactoryReset;
- (BOOL)getMakeDataClassesAndInstancesWithPartSPC:(id)a0 fdrRemote:(struct __AMFDR { } *)a1 makeClasses:(id *)a2 makeInstances:(id *)a3 makePropertiesDict:(id *)a4 fdrError:(id *)a5;

@end
