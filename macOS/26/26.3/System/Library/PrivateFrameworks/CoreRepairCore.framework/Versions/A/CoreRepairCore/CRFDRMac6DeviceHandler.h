@interface CRFDRMac6DeviceHandler : CRFDRMac4DeviceHandler

+ (id)getDeviceHandlerForProductType:(int)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getClaimDataClassesAndInstancesWithPartSPC:(id)a0 withError:(id *)a1;
- (id)getMLBDataClasses;
- (id)spcWithComponent:(id)a0 withIdentifier:(id)a1;

@end
